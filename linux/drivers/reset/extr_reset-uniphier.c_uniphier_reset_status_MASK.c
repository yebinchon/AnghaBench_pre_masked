
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_reset_priv {int dev; int regmap; struct uniphier_reset_data* data; } ;
struct uniphier_reset_data {unsigned long id; int flags; int bit; int reg; } ;
struct reset_controller_dev {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct uniphier_reset_priv* FUNC_3 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_4(struct reset_controller_dev *VAR_3,
     unsigned long VAR_4)
{
 struct uniphier_reset_priv *VAR_5 = FUNC_3(VAR_3);
 const struct uniphier_reset_data *VAR_6;

 for (VAR_6 = VAR_5->data; VAR_6->id != VAR_2; VAR_6++) {
  unsigned int VAR_7;
  int VAR_8, VAR_9;

  if (VAR_6->id != VAR_4)
   continue;

  VAR_8 = FUNC_2(VAR_5->regmap, VAR_6->reg, &VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_9 = !!(VAR_7 & FUNC_0(VAR_6->bit));

  if (VAR_6->flags & VAR_1)
   VAR_9 = !VAR_9;

  return VAR_9;
 }

 FUNC_1(VAR_5->dev, "reset_id=%lu was not found\n", VAR_4);
 return -VAR_0;
}
