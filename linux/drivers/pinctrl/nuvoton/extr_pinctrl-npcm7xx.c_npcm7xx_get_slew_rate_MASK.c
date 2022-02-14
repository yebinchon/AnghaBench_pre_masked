
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct TYPE_3__ {unsigned int ngpio; } ;
struct npcm7xx_gpio {scalar_t__ base; TYPE_1__ gc; } ;
struct TYPE_4__ {int flag; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct npcm7xx_gpio *VAR_7,
     struct regmap *VAR_8, unsigned int VAR_9)
{
 u32 VAR_10;
 int VAR_11 = (VAR_9 % VAR_7->gc.ngpio);
 unsigned long VAR_12 = FUNC_0(VAR_11);

 if (VAR_6[VAR_9].flag & VAR_3)
  return FUNC_1(VAR_7->base + VAR_2)
  & VAR_12;

 if (VAR_6[VAR_9].flag & VAR_4) {
  FUNC_2(VAR_8, VAR_1, &VAR_10);
  return !!(VAR_10 & VAR_5);
 }

 return -VAR_0;
}
