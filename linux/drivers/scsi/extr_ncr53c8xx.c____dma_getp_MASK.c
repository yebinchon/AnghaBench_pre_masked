
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int baddr; scalar_t__ vaddr; } ;
typedef TYPE_1__ m_vtob_s ;
struct TYPE_7__ {int nump; TYPE_1__** vtob; int bush; } ;
typedef TYPE_2__ m_pool_s ;
typedef scalar_t__ m_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int,char*) ;
 scalar_t__ FUNC_3 (int ,int,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static m_addr_t FUNC_4(m_pool_s *VAR_4)
{
 m_addr_t VAR_5;
 m_vtob_s *VAR_6;

 VAR_6 = FUNC_1(&VAR_3, sizeof(*VAR_6), "VTOB");
 if (VAR_6) {
  dma_addr_t VAR_7;
  VAR_5 = (m_addr_t) FUNC_3(VAR_4->bush,
      VAR_2<<VAR_1,
      &VAR_7, VAR_0);
  if (VAR_5) {
   int VAR_8 = FUNC_0(VAR_5);
   VAR_6->vaddr = VAR_5;
   VAR_6->baddr = VAR_7;
   VAR_6->next = VAR_4->vtob[VAR_8];
   VAR_4->vtob[VAR_8] = VAR_6;
   ++VAR_4->nump;
   return VAR_5;
  }
 }
 if (VAR_6)
  FUNC_2(&VAR_3, VAR_6, sizeof(*VAR_6), "VTOB");
 return 0;
}
