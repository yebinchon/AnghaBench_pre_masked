
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct npcm7xx_pinctrl {struct npcm7xx_gpio* gpio_bank; } ;
struct TYPE_5__ {unsigned int ngpio; int parent; } ;
struct npcm7xx_gpio {scalar_t__ base; TYPE_2__ gc; } ;
struct TYPE_4__ {int flag; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,unsigned int,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_6(struct npcm7xx_pinctrl *VAR_5,
          unsigned int VAR_6, int VAR_7)
{
 int VAR_8;
 struct npcm7xx_gpio *VAR_9 =
  &VAR_5->gpio_bank[VAR_6 / VAR_2];
 int VAR_10 = FUNC_0(VAR_6 % VAR_9->gc.ngpio);

 VAR_8 = (VAR_4[VAR_6].flag & VAR_0);
 if (!VAR_7 || !VAR_8)
  return -VAR_1;
 if (FUNC_2(VAR_8) == VAR_7) {
  FUNC_3(VAR_9->gc.parent,
   "setting pin %d to low strength [%d]\n", VAR_6, VAR_7);
  FUNC_4(&VAR_9->gc, VAR_9->base + VAR_3, VAR_10);
  return 0;
 } else if (FUNC_1(VAR_8) == VAR_7) {
  FUNC_3(VAR_9->gc.parent,
   "setting pin %d to high strength [%d]\n", VAR_6, VAR_7);
  FUNC_5(&VAR_9->gc, VAR_9->base + VAR_3, VAR_10);
  return 0;
 }

 return -VAR_1;
}
