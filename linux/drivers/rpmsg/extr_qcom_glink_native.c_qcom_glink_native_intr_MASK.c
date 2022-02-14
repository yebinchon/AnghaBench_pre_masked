
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dev; int mbox_chan; } ;
struct glink_msg {int param2; int param1; int cmd; } ;
typedef int msg ;
typedef int irqreturn_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct qcom_glink*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_7 (struct qcom_glink*,unsigned int,unsigned int) ;
 int FUNC_8 (struct qcom_glink*,unsigned int,unsigned int,int) ;
 int FUNC_9 (struct qcom_glink*,int ) ;
 unsigned int FUNC_10 (struct qcom_glink*) ;
 int FUNC_11 (struct qcom_glink*,unsigned int) ;
 int FUNC_12 (struct qcom_glink*,unsigned int) ;
 int FUNC_13 (struct qcom_glink*,unsigned int) ;
 int FUNC_14 (struct qcom_glink*,struct glink_msg*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_2, void *VAR_3)
{
 struct qcom_glink *VAR_4 = VAR_3;
 struct glink_msg VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;

 for (;;) {
  VAR_8 = FUNC_10(VAR_4);
  if (VAR_8 < sizeof(VAR_5))
   break;

  FUNC_14(VAR_4, &VAR_5, 0, sizeof(VAR_5));

  VAR_9 = FUNC_2(VAR_5.cmd);
  VAR_6 = FUNC_2(VAR_5.param1);
  VAR_7 = FUNC_3(VAR_5.param2);

  switch (VAR_9) {
  case 129:
  case 128:
  case 141:
  case 140:
  case 133:
   VAR_10 = FUNC_12(VAR_4, 0);
   break;
  case 137:
   VAR_10 = FUNC_13(VAR_4, VAR_6);
   FUNC_9(VAR_4, FUNC_0(sizeof(VAR_5), 8));
   break;
  case 138:
   VAR_10 = FUNC_12(VAR_4, VAR_7);
   break;
  case 131:
  case 130:
   VAR_10 = FUNC_11(VAR_4, VAR_8);
   break;
  case 136:
   FUNC_9(VAR_4, FUNC_0(sizeof(VAR_5), 8));

   FUNC_5(VAR_4->mbox_chan, ((void*)0));
   FUNC_4(VAR_4->mbox_chan, 0);
   break;
  case 139:
   FUNC_6(VAR_4, VAR_6, VAR_7, VAR_8);
   break;
  case 135:
   FUNC_8(VAR_4, VAR_6, VAR_7, 0);
   FUNC_9(VAR_4, FUNC_0(sizeof(VAR_5), 8));
   break;
  case 134:
   FUNC_8(VAR_4, VAR_6, VAR_7, 1);
   FUNC_9(VAR_4, FUNC_0(sizeof(VAR_5), 8));
   break;
  case 132:
   FUNC_7(VAR_4, VAR_6, VAR_7);
   FUNC_9(VAR_4, FUNC_0(sizeof(VAR_5), 8));
   break;
  default:
   FUNC_1(VAR_4->dev, "unhandled rx cmd: %d\n", VAR_9);
   VAR_10 = -VAR_0;
   break;
  }

  if (VAR_10)
   break;
 }

 return VAR_1;
}
