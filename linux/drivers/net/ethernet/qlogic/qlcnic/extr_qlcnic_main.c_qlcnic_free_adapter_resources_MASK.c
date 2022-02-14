
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_fw_dump {int * tmpl_hdr; int * dma_buffer; int phys_addr; } ;
struct qlcnic_adapter {TYPE_3__* ahw; TYPE_1__* pdev; int * recv_ctx; } ;
struct TYPE_5__ {int * buff; } ;
struct TYPE_6__ {struct qlcnic_fw_dump fw_dump; TYPE_2__ reset; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_fw_dump *VAR_2 = &VAR_1->ahw->fw_dump;

 FUNC_1(VAR_1->recv_ctx);
 VAR_1->recv_ctx = ((void*)0);

 if (VAR_2->tmpl_hdr) {
  FUNC_2(VAR_2->tmpl_hdr);
  VAR_2->tmpl_hdr = ((void*)0);
 }

 if (VAR_2->dma_buffer) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0,
      VAR_2->dma_buffer, VAR_2->phys_addr);
  VAR_2->dma_buffer = ((void*)0);
 }

 FUNC_1(VAR_1->ahw->reset.buff);
 VAR_1->ahw->fw_dump.tmpl_hdr = ((void*)0);
}
