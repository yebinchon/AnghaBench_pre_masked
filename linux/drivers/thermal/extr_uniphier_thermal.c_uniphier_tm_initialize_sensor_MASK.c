
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_tm_dev {TYPE_2__* data; TYPE_1__* dev; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_4__ {scalar_t__ map_base; scalar_t__ block_base; int tmod_setup_addr; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (struct regmap*,scalar_t__,int *) ;
 int FUNC_5 (struct regmap*,int ,int) ;
 int FUNC_6 (struct regmap*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_7(struct uniphier_tm_dev *VAR_15)
{
 struct regmap *VAR_16 = VAR_15->regmap;
 u32 VAR_17;
 u32 VAR_18[2];
 int VAR_19;


 FUNC_6(VAR_16, VAR_15->data->block_base + VAR_4,
     VAR_5, 0);
 VAR_19 = FUNC_4(VAR_16, VAR_15->data->map_base + VAR_12, &VAR_17);
 if (VAR_19)
  return VAR_19;
 if (!VAR_17) {

  VAR_19 = FUNC_3(VAR_15->dev->of_node,
       "socionext,tmod-calibration",
       VAR_18,
       FUNC_0(VAR_18));
  if (VAR_19)
   return VAR_19;

  FUNC_5(VAR_16, VAR_15->data->tmod_setup_addr,
   VAR_13 | FUNC_1(VAR_18[0]) |
   VAR_14 | FUNC_2(VAR_18[1]));
 }


 FUNC_6(VAR_16, VAR_15->data->block_base + VAR_6,
     VAR_7, VAR_8);


 FUNC_6(VAR_16, VAR_15->data->block_base + VAR_0,
     VAR_1 | VAR_2,
     VAR_1 | VAR_3);


 FUNC_6(VAR_16, VAR_15->data->map_base + VAR_9,
     VAR_10, VAR_11);

 return 0;
}
