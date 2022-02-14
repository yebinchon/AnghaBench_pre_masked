
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct SIS_OH {scalar_t__ size; int offset; struct SIS_OH* poh_next; } ;
struct SIS_HEAP {scalar_t__ max_freesize; struct SIS_OH oh_used; struct SIS_OH oh_free; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct SIS_OH*) ;
 int FUNC_2 (struct SIS_OH*,struct SIS_OH*) ;
 struct SIS_OH* FUNC_3 (struct SIS_HEAP*) ;

__attribute__((used)) static struct SIS_OH *
FUNC_4(struct SIS_HEAP *VAR_0, u32 VAR_1)
{
 struct SIS_OH *VAR_2;
 struct SIS_OH *VAR_3;
 int VAR_4 = 0;

 if(VAR_1 > VAR_0->max_freesize) {
  FUNC_0("sisfb: Can't allocate %dk video memory\n",
   (unsigned int) VAR_1 / 1024);
  return ((void*)0);
 }

 VAR_2 = VAR_0->oh_free.poh_next;

 while(VAR_2 != &VAR_0->oh_free) {
  if(VAR_1 <= VAR_2->size) {
   VAR_4 = 1;
   break;
  }
  VAR_2 = VAR_2->poh_next;
 }

 if(!VAR_4) {
  FUNC_0("sisfb: Can't allocate %dk video memory\n",
   (unsigned int) VAR_1 / 1024);
  return ((void*)0);
 }

 if(VAR_1 == VAR_2->size) {
  VAR_3 = VAR_2;
  FUNC_1(VAR_2);
 } else {
  VAR_3 = FUNC_3(VAR_0);
  if(VAR_3 == ((void*)0))
   return ((void*)0);

  VAR_3->offset = VAR_2->offset;
  VAR_3->size = VAR_1;

  VAR_2->offset += VAR_1;
  VAR_2->size -= VAR_1;
 }

 VAR_0->max_freesize -= VAR_1;

 VAR_2 = &VAR_0->oh_used;
 FUNC_2(VAR_2, VAR_3);

 return VAR_3;
}
