
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* m_vtob_p ;
typedef TYPE_2__* m_pool_p ;
struct TYPE_8__ {int nump; TYPE_1__** vtob; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;


 int FUNC_0 (void*) ;
 TYPE_1__* FUNC_1 (int *,int,char*) ;
 int VAR_0 ;
 void* FUNC_2 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void * FUNC_3(m_pool_p VAR_1)
{
 m_vtob_p VAR_2;
 void *VAR_3;

 VAR_2 = FUNC_1(&VAR_0, sizeof(*VAR_2), "VTOB");
 if (!VAR_2)
  goto out_err;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3) {
  int VAR_4 = FUNC_0(VAR_3);
  VAR_2->next = VAR_1->vtob[VAR_4];
  VAR_1->vtob[VAR_4] = VAR_2;
  ++VAR_1->nump;
 }
 return VAR_3;
out_err:
 return ((void*)0);
}
