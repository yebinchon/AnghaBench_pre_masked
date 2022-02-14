
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {struct npcm7xx_gpio* gpio_bank; } ;
struct TYPE_3__ {unsigned int ngpio; int parent; } ;
struct npcm7xx_gpio {TYPE_1__ gc; scalar_t__ base; } ;
struct TYPE_4__ {int flag; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,unsigned int,int,int) ;
 unsigned long FUNC_4 (scalar_t__) ;
 TYPE_2__* VAR_4 ;
 struct npcm7xx_pinctrl* FUNC_5 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_5,
          unsigned int VAR_6)
{
 struct npcm7xx_pinctrl *VAR_7 = FUNC_5(VAR_5);
 struct npcm7xx_gpio *VAR_8 =
  &VAR_7->gpio_bank[VAR_6 / VAR_2];
 int VAR_9 = (VAR_6 % VAR_8->gc.ngpio);
 unsigned long VAR_10 = FUNC_0(VAR_9);
 u32 VAR_11 = 0;
 int VAR_12, VAR_13;

 VAR_12 = VAR_4[VAR_6].flag;
 if (VAR_12 & VAR_0) {

  VAR_13 = FUNC_4(VAR_8->base + VAR_3)
  & VAR_10;
  VAR_11 = VAR_13 ? FUNC_1(VAR_12) : FUNC_2(VAR_12);
  FUNC_3(VAR_8->gc.parent,
   "pin %d strength %d = %d\n", VAR_6, VAR_13, VAR_11);
  return VAR_11;
 }

 return -VAR_1;
}
