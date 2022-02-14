
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int qmi_comp; } ;
struct qcom_slim_ngd_ctrl {int state; int ver; int dev; int reconf; scalar_t__ base; TYPE_1__ qmi; struct qcom_slim_ngd* ngd; } ;
struct qcom_slim_ngd {scalar_t__ base; } ;
typedef enum qcom_slim_ngd_state { ____Placeholder_qcom_slim_ngd_state } qcom_slim_ngd_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct qcom_slim_ngd_ctrl*) ;
 int FUNC_3 (struct qcom_slim_ngd_ctrl*,int) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct qcom_slim_ngd_ctrl *VAR_12)
{
 enum qcom_slim_ngd_state VAR_13 = VAR_12->state;
 struct qcom_slim_ngd *VAR_14 = VAR_12->ngd;
 u32 VAR_15, VAR_16;
 int VAR_17, VAR_18 = 0;

 if (VAR_12->state == VAR_10) {
  VAR_17 = FUNC_5(&VAR_12->qmi.qmi_comp, VAR_3);
  if (!VAR_17)
   return -VAR_1;
 }

 if (VAR_12->state == VAR_8 ||
  VAR_12->state == VAR_10) {
  VAR_18 = FUNC_3(VAR_12, 1);
  if (VAR_18) {
   FUNC_0(VAR_12->dev, "SLIM QMI power request failed:%d\n",
     VAR_18);
   return VAR_18;
  }
 }

 VAR_12->ver = FUNC_4(VAR_12->base);

 VAR_12->ver >>= 16;

 VAR_15 = FUNC_4(VAR_14->base + VAR_7);
 if (VAR_15 & VAR_5) {




  if (VAR_13 == VAR_9) {
   FUNC_1(VAR_12->dev, "Subsys restart: ADSP active framer\n");
   return 0;
  }
  return 0;
 }

 FUNC_6(VAR_0, VAR_14->base + VAR_4);
 VAR_16 = FUNC_4(VAR_14->base + VAR_6);

 FUNC_6(VAR_16|VAR_11,
    VAR_14->base + VAR_6);
 FUNC_2(VAR_12);

 VAR_17 = FUNC_5(&VAR_12->reconf, VAR_3);
 if (!VAR_17) {
  FUNC_0(VAR_12->dev, "capability exchange timed-out\n");
  return -VAR_2;
 }

 return 0;
}
