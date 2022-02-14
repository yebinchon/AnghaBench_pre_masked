
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct device {int dummy; } ;
struct aspeed_lpc_snoop_model_data {scalar_t__ has_hicrb_ensnp; } ;
struct aspeed_lpc_snoop {int regmap; TYPE_1__* chan; } ;
struct TYPE_4__ {struct device* parent; int * fops; int name; int minor; } ;
struct TYPE_3__ {TYPE_2__ miscdev; int fifo; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct device*,int ,char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 struct aspeed_lpc_snoop_model_data* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ,int,int) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_6(struct aspeed_lpc_snoop *VAR_19,
       struct device *VAR_20,
       int VAR_21, u16 VAR_22)
{
 int VAR_23 = 0;
 u32 VAR_24, VAR_25, VAR_26, VAR_27;
 const struct aspeed_lpc_snoop_model_data *VAR_28 =
  FUNC_4(VAR_20);

 FUNC_1(&VAR_19->chan[VAR_21].wq);

 VAR_23 = FUNC_2(&VAR_19->chan[VAR_21].fifo,
    VAR_12, VAR_2);
 if (VAR_23)
  return VAR_23;

 VAR_19->chan[VAR_21].miscdev.minor = VAR_11;
 VAR_19->chan[VAR_21].miscdev.name =
  FUNC_0(VAR_20, VAR_2, "%s%d", VAR_0, VAR_21);
 VAR_19->chan[VAR_21].miscdev.fops = &VAR_18;
 VAR_19->chan[VAR_21].miscdev.parent = VAR_20;
 VAR_23 = FUNC_3(&VAR_19->chan[VAR_21].miscdev);
 if (VAR_23)
  return VAR_23;


 switch (VAR_21) {
 case 0:
  VAR_24 = VAR_6 | VAR_4;
  VAR_25 = VAR_14;
  VAR_26 = VAR_15;
  VAR_27 = VAR_9;
  break;
 case 1:
  VAR_24 = VAR_7 | VAR_5;
  VAR_25 = VAR_16;
  VAR_26 = VAR_17;
  VAR_27 = VAR_10;
  break;
 default:
  return -VAR_1;
 }

 FUNC_5(VAR_19->regmap, VAR_3, VAR_24, VAR_24);
 FUNC_5(VAR_19->regmap, VAR_13, VAR_25,
      VAR_22 << VAR_26);
 if (VAR_28->has_hicrb_ensnp)
  FUNC_5(VAR_19->regmap, VAR_8,
    VAR_27, VAR_27);

 return VAR_23;
}
