
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SIS_OHALLOC {struct SIS_OH* aoh; struct SIS_OHALLOC* poha_next; } ;
struct SIS_OH {struct SIS_OH* poh_next; } ;
struct SIS_HEAP {struct SIS_OH* poh_freelist; struct SIS_OHALLOC* poha_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct SIS_OHALLOC* FUNC_0 (int,int ) ;

__attribute__((used)) static struct SIS_OH *
FUNC_1(struct SIS_HEAP *VAR_2)
{
 struct SIS_OHALLOC *VAR_3;
 struct SIS_OH *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 if(VAR_2->poh_freelist == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_1, VAR_0);
  if(!VAR_3)
   return ((void*)0);

  VAR_3->poha_next = VAR_2->poha_chain;
  VAR_2->poha_chain = VAR_3;

  VAR_5 = (VAR_1 - sizeof(struct SIS_OHALLOC)) / sizeof(struct SIS_OH) + 1;

  VAR_4 = &VAR_3->aoh[0];
  for(VAR_6 = VAR_5 - 1; VAR_6 != 0; VAR_6--) {
   VAR_4->poh_next = VAR_4 + 1;
   VAR_4 = VAR_4 + 1;
  }

  VAR_4->poh_next = ((void*)0);
  VAR_2->poh_freelist = &VAR_3->aoh[0];
 }

 VAR_4 = VAR_2->poh_freelist;
 VAR_2->poh_freelist = VAR_4->poh_next;

 return VAR_4;
}
