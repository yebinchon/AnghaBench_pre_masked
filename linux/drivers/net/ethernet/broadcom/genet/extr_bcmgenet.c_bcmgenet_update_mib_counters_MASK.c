
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct bcmgenet_stats {int type; int stat_offset; scalar_t__ stat_sizeof; scalar_t__ reg_offset; } ;
struct bcmgenet_priv {int dummy; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;


 int FUNC_0 (struct bcmgenet_priv*) ;
 int VAR_2 ;
 struct bcmgenet_stats* VAR_3 ;
 int FUNC_1 (struct bcmgenet_priv*,scalar_t__) ;
 int FUNC_2 (struct bcmgenet_priv*,int ,scalar_t__) ;
 int FUNC_3 (struct bcmgenet_priv*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct bcmgenet_priv *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  const struct bcmgenet_stats *VAR_7;
  u8 VAR_8 = 0;
  u32 VAR_9 = 0;
  char *VAR_10;

  VAR_7 = &VAR_3[VAR_5];
  switch (VAR_7->type) {
  case 130:
  case 128:
   continue;
  case 129:
   VAR_8 += VAR_1;

  case 132:
   VAR_8 += VAR_1;

  case 133:
   VAR_9 = FUNC_1(VAR_4,
        VAR_2 + VAR_6 + VAR_8);
   VAR_8 = 0;
   break;
  case 131:
   if (FUNC_0(VAR_4)) {
    VAR_9 = FUNC_1(VAR_4, VAR_7->reg_offset);

    if (VAR_9 == ~0)
     FUNC_2(VAR_4, 0,
            VAR_7->reg_offset);
   } else {
    VAR_9 = FUNC_3(VAR_4,
        VAR_7->reg_offset);
   }
   break;
  }

  VAR_6 += VAR_7->stat_sizeof;
  VAR_10 = (char *)VAR_4 + VAR_7->stat_offset;
  *(u32 *)VAR_10 = VAR_9;
 }
}
