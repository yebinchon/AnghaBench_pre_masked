
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct qla_hw_data {scalar_t__ exlogin_size; int exlogin_buf_dma; TYPE_5__* pdev; int exlogin_buf; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_5__*,int,char*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

int
FUNC_7(scsi_qla_host_t *VAR_6)
{
 int VAR_7;
 uint16_t VAR_8, VAR_9, VAR_10;
 struct qla_hw_data *VAR_11 = VAR_6->hw;


 if (!VAR_3)
  return VAR_2;

 if (!FUNC_0(VAR_11))
  return VAR_2;

 FUNC_2(VAR_5, VAR_6, 0xd021, "EXLOGIN count: %d.\n", VAR_3);
 VAR_9 = 0;
 VAR_7 = FUNC_5(VAR_6, &VAR_8, &VAR_9);
 if (VAR_7 != VAR_2) {
  FUNC_3(VAR_4, VAR_11->pdev, 0xd029,
      "Failed to get exlogin status.\n");
  return VAR_7;
 }

 VAR_10 = (VAR_3 > VAR_9) ? VAR_9 : VAR_3;
 VAR_10 *= VAR_8;

 if (VAR_10 != VAR_11->exlogin_size) {
  FUNC_4(VAR_11);
  VAR_11->exlogin_size = VAR_10;

  FUNC_2(VAR_5, VAR_6, 0xd024,
      "EXLOGIN: max_logins=%d, portdb=0x%x, total=%d.\n",
      VAR_9, VAR_8, VAR_10);

  FUNC_2(VAR_5, VAR_6, 0xd025,
      "EXLOGIN: requested size=0x%x\n", VAR_11->exlogin_size);


  VAR_11->exlogin_buf = FUNC_1(&VAR_11->pdev->dev,
   VAR_11->exlogin_size, &VAR_11->exlogin_buf_dma, VAR_1);
  if (!VAR_11->exlogin_buf) {
   FUNC_3(VAR_4, VAR_11->pdev, 0xd02a,
      "Failed to allocate memory for exlogin_buf_dma.\n");
   return -VAR_0;
  }
 }


 VAR_7 = FUNC_6(VAR_6, VAR_11->exlogin_buf_dma);
 if (VAR_7) {
  FUNC_2(VAR_4, VAR_6, 0xd033,
      "Setup extended login buffer  ****FAILED****.\n");
  FUNC_4(VAR_11);
 }

 return VAR_7;
}
