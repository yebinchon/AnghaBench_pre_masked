
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2i_hba {int * dummy_buffer; int dummy_buf_dma; TYPE_1__* pcidev; int * mp_bd_tbl; int mp_bd_dma; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2i_hba *VAR_1)
{
 if (VAR_1->mp_bd_tbl) {
  FUNC_0(&VAR_1->pcidev->dev, VAR_0,
      VAR_1->mp_bd_tbl, VAR_1->mp_bd_dma);
  VAR_1->mp_bd_tbl = ((void*)0);
 }
 if (VAR_1->dummy_buffer) {
  FUNC_0(&VAR_1->pcidev->dev, VAR_0,
      VAR_1->dummy_buffer, VAR_1->dummy_buf_dma);
  VAR_1->dummy_buffer = ((void*)0);
 }
 return;
}
