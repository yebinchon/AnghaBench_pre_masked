
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* m_vtob_p ;
typedef TYPE_2__* m_pool_p ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev_dmat; } ;
struct TYPE_5__ {int baddr; void* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static inline void *FUNC_1(m_pool_p VAR_2, m_vtob_p VAR_3)
{
 void *VAR_4 = ((void*)0);
 dma_addr_t VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2->dev_dmat, VAR_1, &VAR_5,
   VAR_0);
 if (VAR_4) {
  VAR_3->vaddr = VAR_4;
  VAR_3->baddr = VAR_5;
 }
 return VAR_4;
}
