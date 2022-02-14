
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_reset_priv {int dev; int regmap; struct uniphier_reset_data* data; } ;
struct uniphier_reset_data {unsigned long id; int flags; int reg; int bit; } ;
struct reset_controller_dev {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct uniphier_reset_priv* FUNC_3 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_4(struct reset_controller_dev *VAR_3,
     unsigned long VAR_4, int VAR_5)
{
 struct uniphier_reset_priv *VAR_6 = FUNC_3(VAR_3);
 const struct uniphier_reset_data *VAR_7;

 for (VAR_7 = VAR_6->data; VAR_7->id != VAR_2; VAR_7++) {
  unsigned int VAR_8, VAR_9;

  if (VAR_7->id != VAR_4)
   continue;

  VAR_8 = FUNC_0(VAR_7->bit);

  if (VAR_5)
   VAR_9 = VAR_8;
  else
   VAR_9 = ~VAR_8;

  if (VAR_7->flags & VAR_1)
   VAR_9 = ~VAR_9;

  return FUNC_2(VAR_6->regmap, VAR_7->reg, VAR_8, VAR_9);
 }

 FUNC_1(VAR_6->dev, "reset_id=%lu was not handled\n", VAR_4);
 return -VAR_0;
}
