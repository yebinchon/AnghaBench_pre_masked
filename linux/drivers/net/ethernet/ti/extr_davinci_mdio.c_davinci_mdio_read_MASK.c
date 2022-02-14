
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mii_bus {struct davinci_mdio_data* priv; } ;
struct davinci_mdio_data {int dev; TYPE_2__* regs; } ;
struct TYPE_4__ {TYPE_1__* user; } ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct davinci_mdio_data*) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct mii_bus *VAR_9, int VAR_10, int VAR_11)
{
 struct davinci_mdio_data *VAR_12 = VAR_9->priv;
 u32 VAR_13;
 int VAR_14;

 if (VAR_11 & ~VAR_4 || VAR_10 & ~VAR_3)
  return -VAR_1;

 VAR_14 = FUNC_0(VAR_12->dev);
 if (VAR_14 < 0) {
  FUNC_3(VAR_12->dev);
  return VAR_14;
 }

 VAR_13 = (VAR_7 | VAR_8 | (VAR_11 << 21) |
        (VAR_10 << 16));

 while (1) {
  VAR_14 = FUNC_5(VAR_12);
  if (VAR_14 == -VAR_0)
   continue;
  if (VAR_14 < 0)
   break;

  FUNC_6(VAR_13, &VAR_12->regs->user[0].access);

  VAR_14 = FUNC_5(VAR_12);
  if (VAR_14 == -VAR_0)
   continue;
  if (VAR_14 < 0)
   break;

  VAR_13 = FUNC_4(&VAR_12->regs->user[0].access);
  VAR_14 = (VAR_13 & VAR_5) ? (VAR_13 & VAR_6) : -VAR_2;
  break;
 }

 FUNC_1(VAR_12->dev);
 FUNC_2(VAR_12->dev);
 return VAR_14;
}
