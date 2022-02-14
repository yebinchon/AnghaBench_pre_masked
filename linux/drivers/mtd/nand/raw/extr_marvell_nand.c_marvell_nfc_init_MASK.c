
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct marvell_nfc {TYPE_2__* caps; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int is_nfcv2; scalar_t__ need_system_controller; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct marvell_nfc*) ;
 int FUNC_3 (struct marvell_nfc*) ;
 int FUNC_4 (struct regmap*,int ,int ,int ) ;
 int FUNC_5 (struct regmap*,int ,int) ;
 struct regmap* FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct marvell_nfc *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev->of_node;







 if (VAR_9->caps->need_system_controller) {
  struct regmap *VAR_11 =
   FUNC_6(VAR_10,
       "marvell,system-controller");

  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);

  FUNC_5(VAR_11, VAR_4,
        VAR_7 |
        VAR_5 |
        VAR_6 |
        VAR_8);

  FUNC_4(VAR_11, VAR_0,
       VAR_1,
       VAR_1);

  FUNC_4(VAR_11, VAR_2,
       VAR_3,
       VAR_3);
 }


 if (!VAR_9->caps->is_nfcv2)
  FUNC_2(VAR_9);

 FUNC_3(VAR_9);

 return 0;
}
