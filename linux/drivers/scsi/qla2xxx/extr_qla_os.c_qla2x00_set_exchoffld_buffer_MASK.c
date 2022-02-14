
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {scalar_t__ exchoffld_enabled; } ;
struct qla_hw_data {int exchoffld_size; int max_exchg; scalar_t__ init_cb; TYPE_1__ flags; int exchoffld_buf; TYPE_8__* pdev; int exchoffld_buf_dma; } ;
struct init_cb_81xx {scalar_t__ exchange_count; } ;
struct TYPE_11__ {int ql2xexchoffld; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,TYPE_8__*,int,char*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (TYPE_2__*,int*,int) ;
 int FUNC_7 (TYPE_2__*,int*,int*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

int
FUNC_10(scsi_qla_host_t *VAR_7)
{
 int VAR_8;
 u16 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 struct qla_hw_data *VAR_13 = VAR_7->hw;

 if (!VAR_13->flags.exchoffld_enabled)
  return VAR_3;

 if (!FUNC_0(VAR_13))
  return VAR_3;

 VAR_10 = 0;
 VAR_8 = FUNC_7(VAR_7, &VAR_9, &VAR_10);
 if (VAR_8 != VAR_3) {
  FUNC_4(VAR_5, VAR_13->pdev, 0xd012,
      "Failed to get exlogin status.\n");
  return VAR_8;
 }

 FUNC_6(VAR_7, &VAR_11, VAR_10);
 FUNC_3(VAR_6, VAR_7, 0xd014,
     "Actual exchange offload count: %d.\n", VAR_11);

 VAR_12 = VAR_11 * VAR_9;

 if (VAR_12 != VAR_13->exchoffld_size) {
  FUNC_5(VAR_13);
  if (VAR_11 <= VAR_1) {
   VAR_13->exchoffld_size = 0;
   VAR_13->flags.exchoffld_enabled = 0;
   return VAR_3;
  }

  VAR_13->exchoffld_size = VAR_12;

  FUNC_3(VAR_6, VAR_7, 0xd016,
      "Exchange offload: max_count=%d, actual count=%d entry sz=0x%x, total sz=0x%x\n",
      VAR_10, VAR_11, VAR_9, VAR_12);

  FUNC_3(VAR_6, VAR_7, 0xd017,
      "Exchange Buffers requested size = 0x%x\n",
      VAR_13->exchoffld_size);


  VAR_13->exchoffld_buf = FUNC_2(&VAR_13->pdev->dev,
   VAR_13->exchoffld_size, &VAR_13->exchoffld_buf_dma, VAR_2);
  if (!VAR_13->exchoffld_buf) {
   FUNC_4(VAR_5, VAR_13->pdev, 0xd013,
   "Failed to allocate memory for Exchange Offload.\n");

   if (VAR_13->max_exchg >
       (VAR_1 + VAR_4)) {
    VAR_13->max_exchg -= VAR_4;
   } else if (VAR_13->max_exchg >
       (VAR_1 + 512)) {
    VAR_13->max_exchg -= 512;
   } else {
    VAR_13->flags.exchoffld_enabled = 0;
    FUNC_4(VAR_5, VAR_13->pdev, 0xd013,
        "Disabling Exchange offload due to lack of memory\n");
   }
   VAR_13->exchoffld_size = 0;

   return -VAR_0;
  }
 } else if (!VAR_13->exchoffld_buf || (VAR_11 <= VAR_1)) {

  FUNC_5(VAR_13);
  VAR_13->exchoffld_size = 0;
  VAR_13->flags.exchoffld_enabled = 0;
  FUNC_3(VAR_6, VAR_7, 0xd016,
      "Exchange offload not enable: offld size=%d, actual count=%d entry sz=0x%x, total sz=0x%x.\n",
      VAR_13->exchoffld_size, VAR_11, VAR_9, VAR_12);
  return 0;
 }


 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_5, VAR_7, 0xd02e,
      "Setup exchange offload buffer ****FAILED****.\n");
  FUNC_5(VAR_13);
 } else {

  struct init_cb_81xx *VAR_14 = (struct init_cb_81xx *)VAR_13->init_cb;

  if (FUNC_8(VAR_7))
   VAR_14->exchange_count = 0;
  else
   VAR_14->exchange_count = FUNC_1(VAR_7->ql2xexchoffld);
 }

 return VAR_8;
}
