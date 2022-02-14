
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bcmgenet_priv {int dummy; } ;


 int FUNC_0 (struct bcmgenet_priv*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (struct bcmgenet_priv*,int) ;
 int FUNC_2 (struct bcmgenet_priv*,int ,int) ;
 int FUNC_3 (struct bcmgenet_priv*,int) ;
 int FUNC_4 (struct bcmgenet_priv*,int ,int) ;

__attribute__((used)) static u32 FUNC_5(struct bcmgenet_priv *VAR_4, u16 VAR_5)
{
 u16 VAR_6;
 u32 VAR_7;

 switch (VAR_5) {
 case 128:
  if (FUNC_0(VAR_4))
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_3;

  VAR_7 = FUNC_1(VAR_4, VAR_6);

  if (VAR_7 == ~0)
   FUNC_2(VAR_4, 0, VAR_6);
  break;
 case 129:
  if (FUNC_0(VAR_4))
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_1;

  VAR_7 = FUNC_1(VAR_4, VAR_6);

  if (VAR_7 == ~0)
   FUNC_2(VAR_4, 0, VAR_6);
  break;
 default:
  VAR_7 = FUNC_3(VAR_4, VAR_5);

  if (VAR_7 == ~0)
   FUNC_4(VAR_4, 0, VAR_5);
  break;
 }

 return VAR_7;
}
