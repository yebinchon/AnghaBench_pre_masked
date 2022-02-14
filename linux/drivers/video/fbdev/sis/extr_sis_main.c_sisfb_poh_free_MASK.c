
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct SIS_OH {scalar_t__ offset; scalar_t__ size; struct SIS_OH* poh_next; } ;
struct SIS_HEAP {struct SIS_OH oh_free; int max_freesize; struct SIS_OH oh_used; } ;


 int FUNC_0 (struct SIS_OH*) ;
 int FUNC_1 (struct SIS_HEAP*,struct SIS_OH*) ;
 int FUNC_2 (struct SIS_OH*,struct SIS_OH*) ;

__attribute__((used)) static struct SIS_OH *
FUNC_3(struct SIS_HEAP *VAR_0, u32 VAR_1)
{
 struct SIS_OH *VAR_2;
 struct SIS_OH *VAR_3;
 struct SIS_OH *VAR_4;
 struct SIS_OH *VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;

 VAR_3 = VAR_0->oh_used.poh_next;

 while(VAR_3 != &VAR_0->oh_used) {
  if(VAR_3->offset == VAR_1) {
   VAR_8 = 1;
   break;
  }

  VAR_3 = VAR_3->poh_next;
 }

 if(!VAR_8)
  return ((void*)0);

 VAR_0->max_freesize += VAR_3->size;

 VAR_4 = VAR_5 = ((void*)0);
 VAR_6 = VAR_3->offset + VAR_3->size;
 VAR_7 = VAR_3->offset;

 VAR_2 = VAR_0->oh_free.poh_next;

 while(VAR_2 != &VAR_0->oh_free) {
  if(VAR_2->offset == VAR_6) {
   VAR_5 = VAR_2;
  } else if((VAR_2->offset + VAR_2->size) == VAR_7) {
   VAR_4 = VAR_2;
  }
  VAR_2 = VAR_2->poh_next;
 }

 FUNC_0(VAR_3);

 if(VAR_4 && VAR_5) {
  VAR_4->size += (VAR_3->size + VAR_5->size);
  FUNC_0(VAR_5);
  FUNC_1(VAR_0, VAR_3);
  FUNC_1(VAR_0, VAR_5);
  return VAR_4;
 }

 if(VAR_4) {
  VAR_4->size += VAR_3->size;
  FUNC_1(VAR_0, VAR_3);
  return VAR_4;
 }

 if(VAR_5) {
  VAR_5->size += VAR_3->size;
  VAR_5->offset = VAR_3->offset;
  FUNC_1(VAR_0, VAR_3);
  return VAR_5;
 }

 FUNC_2(&VAR_0->oh_free, VAR_3);

 return VAR_3;
}
