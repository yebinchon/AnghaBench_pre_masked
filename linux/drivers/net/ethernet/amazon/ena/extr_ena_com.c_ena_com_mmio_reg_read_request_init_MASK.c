
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_com_mmio_read {int seq_num; int readless_supported; TYPE_1__* read_resp; int read_resp_dma_addr; int lock; } ;
struct ena_com_dev {int dmadev; struct ena_com_mmio_read mmio_read; } ;
struct TYPE_2__ {int req_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ena_com_dev *VAR_2)
{
 struct ena_com_mmio_read *VAR_3 = &VAR_2->mmio_read;

 FUNC_2(&VAR_3->lock);
 VAR_3->read_resp =
  FUNC_0(VAR_2->dmadev,
       sizeof(*VAR_3->read_resp),
       &VAR_3->read_resp_dma_addr, VAR_1);
 if (FUNC_3(!VAR_3->read_resp))
  goto err;

 FUNC_1(VAR_2);

 VAR_3->read_resp->req_id = 0x0;
 VAR_3->seq_num = 0x0;
 VAR_3->readless_supported = 1;

 return 0;

err:

 return -VAR_0;
}
