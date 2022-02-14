
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct davinci_mdio_data*) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_7, int VAR_8,
         int VAR_9, u16 VAR_10)
{
 struct davinci_mdio_data *VAR_11 = VAR_7->priv;
 u32 VAR_12;
 int VAR_13;

 if (VAR_9 & ~VAR_3 || VAR_8 & ~VAR_2)
  return -VAR_1;

 VAR_13 = FUNC_0(VAR_11->dev);
 if (VAR_13 < 0) {
  FUNC_3(VAR_11->dev);
  return VAR_13;
 }

 VAR_12 = (VAR_5 | VAR_6 | (VAR_9 << 21) |
     (VAR_8 << 16) | (VAR_10 & VAR_4));

 while (1) {
  VAR_13 = FUNC_4(VAR_11);
  if (VAR_13 == -VAR_0)
   continue;
  if (VAR_13 < 0)
   break;

  FUNC_5(VAR_12, &VAR_11->regs->user[0].access);

  VAR_13 = FUNC_4(VAR_11);
  if (VAR_13 == -VAR_0)
   continue;
  break;
 }

 FUNC_1(VAR_11->dev);
 FUNC_2(VAR_11->dev);

 return VAR_13;
}
