
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pd_revision; void* data; void* type; int dr_set; int pr_set; int prefer_role; int revision; } ;
struct tps6598x {int i2c_protocol; int port; TYPE_1__ typec_cap; int regmap; int * dev; int lock; } ;
struct i2c_client {int dev; int irq; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;







 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 struct tps6598x* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int ,int *,int ,int,int ,struct tps6598x*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,struct tps6598x*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct tps6598x*) ;
 int FUNC_12 (struct tps6598x*,int) ;
 int FUNC_13 (struct tps6598x*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_14 (struct tps6598x*,int ,int*) ;
 int VAR_21 ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_22)
{
 struct tps6598x *VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 int VAR_27;

 VAR_23 = FUNC_5(&VAR_22->dev, sizeof(*VAR_23), VAR_2);
 if (!VAR_23)
  return -VAR_1;

 FUNC_10(&VAR_23->lock);
 VAR_23->dev = &VAR_22->dev;

 VAR_23->regmap = FUNC_6(VAR_22, &VAR_21);
 if (FUNC_0(VAR_23->regmap))
  return FUNC_1(VAR_23->regmap);

 VAR_27 = FUNC_14(VAR_23, VAR_8, &VAR_26);
 if (VAR_27 < 0 || !VAR_26)
  return -VAR_0;
 if (FUNC_8(VAR_22->adapter, VAR_3))
  VAR_23->i2c_protocol = 1;


 VAR_27 = FUNC_11(VAR_23);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_14(VAR_23, VAR_6, &VAR_24);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_14(VAR_23, VAR_7, &VAR_25);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_23->typec_cap.revision = VAR_17;
 VAR_23->typec_cap.pd_revision = 0x200;
 VAR_23->typec_cap.prefer_role = VAR_10;
 VAR_23->typec_cap.pr_set = VAR_20;
 VAR_23->typec_cap.dr_set = VAR_18;

 switch (FUNC_2(VAR_25)) {
 case 129:
 case 130:
  VAR_23->typec_cap.type = VAR_14;
  VAR_23->typec_cap.data = VAR_16;
  break;
 case 131:
 case 133:
  VAR_23->typec_cap.type = VAR_13;
  VAR_23->typec_cap.data = VAR_12;
  break;
 case 132:
  VAR_23->typec_cap.type = VAR_13;
  VAR_23->typec_cap.data = VAR_16;
  break;
 case 134:
  VAR_23->typec_cap.type = VAR_13;
  VAR_23->typec_cap.data = VAR_11;
  break;
 case 128:
  VAR_23->typec_cap.type = VAR_15;
  VAR_23->typec_cap.data = VAR_11;
  break;
 default:
  return -VAR_0;
 }

 VAR_23->port = FUNC_15(&VAR_22->dev, &VAR_23->typec_cap);
 if (FUNC_0(VAR_23->port))
  return FUNC_1(VAR_23->port);

 if (VAR_24 & VAR_9) {
  VAR_27 = FUNC_12(VAR_23, VAR_24);
  if (VAR_27)
   FUNC_3(&VAR_22->dev, "failed to register partner\n");
 }

 VAR_27 = FUNC_7(&VAR_22->dev, VAR_22->irq, ((void*)0),
     VAR_19,
     VAR_5 | VAR_4,
     FUNC_4(&VAR_22->dev), VAR_23);
 if (VAR_27) {
  FUNC_13(VAR_23, 0);
  FUNC_16(VAR_23->port);
  return VAR_27;
 }

 FUNC_9(VAR_22, VAR_23);

 return 0;
}
