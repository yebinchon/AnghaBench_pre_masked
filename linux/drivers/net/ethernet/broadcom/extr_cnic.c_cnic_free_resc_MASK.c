
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cnic_uio_dev {int uio_dev; int * dev; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_3__ {int dma; } ;
struct cnic_local {int cid_tbl; int fcoe_cid_tbl; int * ctx_tbl; int * iscsi_tbl; TYPE_2__ kcq1; TYPE_1__ kcq2; int kwq_16_data_info; int kwq_info; int gbl_buf_info; scalar_t__ ctx_blks; int * ctx_arr; struct cnic_uio_dev* udev; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int FUNC_0 (struct cnic_uio_dev*) ;
 int FUNC_1 (struct cnic_dev*) ;
 int FUNC_2 (struct cnic_dev*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cnic_dev *VAR_0)
{
 struct cnic_local *VAR_1 = VAR_0->cnic_priv;
 struct cnic_uio_dev *VAR_2 = VAR_1->udev;

 if (VAR_2) {
  VAR_2->dev = ((void*)0);
  VAR_1->udev = ((void*)0);
  if (VAR_2->uio_dev == -1)
   FUNC_0(VAR_2);
 }

 FUNC_1(VAR_0);
 FUNC_4(VAR_1->ctx_arr);
 VAR_1->ctx_arr = ((void*)0);
 VAR_1->ctx_blks = 0;

 FUNC_2(VAR_0, &VAR_1->gbl_buf_info);
 FUNC_2(VAR_0, &VAR_1->kwq_info);
 FUNC_2(VAR_0, &VAR_1->kwq_16_data_info);
 FUNC_2(VAR_0, &VAR_1->kcq2.dma);
 FUNC_2(VAR_0, &VAR_1->kcq1.dma);
 FUNC_4(VAR_1->iscsi_tbl);
 VAR_1->iscsi_tbl = ((void*)0);
 FUNC_4(VAR_1->ctx_tbl);
 VAR_1->ctx_tbl = ((void*)0);

 FUNC_3(&VAR_1->fcoe_cid_tbl);
 FUNC_3(&VAR_1->cid_tbl);
}
