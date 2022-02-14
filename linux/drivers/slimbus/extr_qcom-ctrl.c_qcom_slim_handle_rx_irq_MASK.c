
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qcom_slim_ctrl {int wd; int rxwq; scalar_t__ base; int dev; int ctrl; } ;
typedef int irqreturn_t ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;



 scalar_t__ VAR_4 ;
 int FUNC_4 (int*,scalar_t__,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,...) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct qcom_slim_ctrl*) ;
 int FUNC_9 (int *,scalar_t__*,scalar_t__,int ) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_11(struct qcom_slim_ctrl *VAR_5,
        u32 VAR_6)
{
 u32 *VAR_7, VAR_8[10];
 bool VAR_9 = 0;
 u8 VAR_10, VAR_11, VAR_12;

 VAR_8[0] = FUNC_7(VAR_5->base + VAR_3);
 VAR_11 = FUNC_2(VAR_8[0]);
 VAR_12 = FUNC_3(VAR_8[0]);
 VAR_10 = FUNC_1(VAR_8[0]>>8);





 if (VAR_11 == VAR_4 && VAR_10 == 128) {
  VAR_7 = (u32 *)FUNC_8(VAR_5);
  if (!VAR_7) {
   FUNC_5(VAR_5->dev, "dropping RX:0x%x due to RX full\n",
     VAR_8[0]);
   goto rx_ret_irq;
  }
  VAR_7[0] = VAR_8[0];

 } else {
  VAR_7 = VAR_8;
 }

 FUNC_4(VAR_7 + 1, VAR_5->base + VAR_3 + 4,
   FUNC_0(VAR_12, 4));

 switch (VAR_10) {

 case 128:
  VAR_9 = 1;
  break;
 case 130:
 case 129:
  FUNC_9(&VAR_5->ctrl, (u8 *)(VAR_7 + 1),
      (u8)(*VAR_7 >> 24), (VAR_12 - 4));
  break;
 default:
  FUNC_5(VAR_5->dev, "unsupported MC,%x MT:%x\n",
   VAR_10, VAR_11);
  break;
 }
rx_ret_irq:
 FUNC_10(VAR_2, VAR_5->base +
         VAR_1);
 if (VAR_9)
  FUNC_6(VAR_5->rxwq, &VAR_5->wd);

 return VAR_0;
}
