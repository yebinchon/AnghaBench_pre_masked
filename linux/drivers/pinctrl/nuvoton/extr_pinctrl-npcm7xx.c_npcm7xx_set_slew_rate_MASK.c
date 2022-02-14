
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_5__ {unsigned int ngpio; } ;
struct npcm7xx_gpio {scalar_t__ base; TYPE_2__ gc; } ;
struct TYPE_4__ {int flag; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct npcm7xx_gpio *VAR_7,
     struct regmap *VAR_8, unsigned int VAR_9,
     int VAR_10)
{
 int VAR_11 = FUNC_0(VAR_9 % VAR_7->gc.ngpio);

 if (VAR_6[VAR_9].flag & VAR_3) {
  switch (VAR_10) {
  case 0:
   FUNC_1(&VAR_7->gc, VAR_7->base + VAR_2,
          VAR_11);
   return 0;
  case 1:
   FUNC_2(&VAR_7->gc, VAR_7->base + VAR_2,
          VAR_11);
   return 0;
  default:
   return -VAR_0;
  }
 }

 if (VAR_6[VAR_9].flag & VAR_4) {
  switch (VAR_10) {
  case 0:
   FUNC_3(VAR_8, VAR_1,
        VAR_5, 0);
   return 0;
  case 1:
   FUNC_3(VAR_8, VAR_1,
        VAR_5, VAR_5);
   return 0;
  default:
   return -VAR_0;
  }
 }

 return -VAR_0;
}
