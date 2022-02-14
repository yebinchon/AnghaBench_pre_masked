
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_ctrl {int id; int val; int handler; } ;
struct si476x_radio {TYPE_3__* core; TYPE_2__* ops; } ;
typedef enum si476x_phase_diversity_mode { ____Placeholder_si476x_phase_diversity_mode } si476x_phase_diversity_mode ;
struct TYPE_10__ {int rds_fifo_depth; int diversity_mode; int regmap; TYPE_1__* client; } ;
struct TYPE_9__ {int (* phase_diversity ) (TYPE_3__*,int) ;} ;
struct TYPE_8__ {int irq; } ;


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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_3__*,int,int,int,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 struct si476x_radio* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct v4l2_ctrl *VAR_17)
{
 int VAR_18;
 enum si476x_phase_diversity_mode VAR_19;
 struct si476x_radio *VAR_20 = FUNC_9(VAR_17->handler);

 FUNC_5(VAR_20->core);

 switch (VAR_17->id) {
 case 132:
  VAR_18 = FUNC_1(VAR_20->core->regmap,
         VAR_2,
         VAR_10,
         VAR_17->val);
  break;
 case 138:
  switch (VAR_17->val) {
  case 135:
   VAR_18 = FUNC_1(VAR_20->core->regmap,
          VAR_2,
          VAR_6,
          0);
   break;
  case 137:
   VAR_18 = FUNC_1(VAR_20->core->regmap,
          VAR_2,
          VAR_9,
          VAR_7);
   break;
  case 136:
   VAR_18 = FUNC_1(VAR_20->core->regmap,
          VAR_2,
          VAR_9,
          VAR_8);
   break;
  default:
   VAR_18 = -VAR_0;
   break;
  }
  break;
 case 130:
  VAR_18 = FUNC_2(VAR_20->core->regmap,
          VAR_14,
          VAR_17->val);
  break;
 case 129:
  VAR_18 = FUNC_2(VAR_20->core->regmap,
          VAR_15,
          VAR_17->val);
  break;
 case 131:
  VAR_18 = FUNC_2(VAR_20->core->regmap,
          VAR_13,
          VAR_17->val);
  break;
 case 134:





  if (FUNC_4(VAR_20->core))
   FUNC_0(VAR_20->core->regmap, 1);

  if (VAR_17->val) {
   VAR_18 = FUNC_2(VAR_20->core->regmap,
           VAR_4,
           VAR_20->core->rds_fifo_depth);
   if (VAR_18 < 0)
    break;

   if (VAR_20->core->client->irq) {
    VAR_18 = FUNC_2(VAR_20->core->regmap,
            VAR_5,
            VAR_16);
    if (VAR_18 < 0)
     break;
   }


   VAR_18 = FUNC_3(VAR_20->core,
              0,
              1,
              1,
              ((void*)0));
   if (VAR_18 < 0)
    break;

   VAR_18 = FUNC_1(VAR_20->core->regmap,
          VAR_3,
          VAR_12,
          VAR_11);
  } else {
   VAR_18 = FUNC_1(VAR_20->core->regmap,
          VAR_3,
          VAR_12,
          !VAR_11);
  }

  if (FUNC_4(VAR_20->core))
   FUNC_0(VAR_20->core->regmap, 0);
  break;
 case 128:
  VAR_18 = FUNC_2(VAR_20->core->regmap,
          VAR_1,
          VAR_17->val);
  break;

 case 133:
  VAR_19 = FUNC_7(VAR_17->val);

  if (VAR_19 == VAR_20->core->diversity_mode) {
   VAR_18 = 0;
   break;
  }

  if (FUNC_4(VAR_20->core)) {




   VAR_20->core->diversity_mode = VAR_19;
   VAR_18 = 0;
  } else {
   VAR_18 = VAR_20->ops->phase_diversity(VAR_20->core, VAR_19);
   if (!VAR_18)
    VAR_20->core->diversity_mode = VAR_19;
  }
  break;

 default:
  VAR_18 = -VAR_0;
  break;
 }

 FUNC_6(VAR_20->core);

 return VAR_18;
}
