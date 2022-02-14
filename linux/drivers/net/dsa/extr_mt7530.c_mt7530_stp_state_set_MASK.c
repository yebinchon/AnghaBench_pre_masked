
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt7530_priv {int dummy; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;







 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mt7530_priv*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct dsa_switch *VAR_6, int VAR_7, u8 VAR_8)
{
 struct mt7530_priv *VAR_9 = VAR_6->priv;
 u32 VAR_10;

 switch (VAR_8) {
 case 131:
  VAR_10 = VAR_2;
  break;
 case 132:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_5;
  break;
 case 129:
  VAR_10 = VAR_4;
  break;
 case 130:
 default:
  VAR_10 = VAR_3;
  break;
 }

 FUNC_1(VAR_9, FUNC_0(VAR_7), VAR_0, VAR_10);
}
