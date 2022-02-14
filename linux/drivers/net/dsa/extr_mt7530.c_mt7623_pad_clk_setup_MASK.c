
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7530_priv {int dummy; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mt7530_priv*,int ,int) ;
 int FUNC_4 (struct mt7530_priv*,int ,int) ;
 int FUNC_5 (struct mt7530_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct dsa_switch *VAR_4)
{
 struct mt7530_priv *VAR_5 = VAR_4->priv;
 int VAR_6;

 for (VAR_6 = 0 ; VAR_6 < VAR_1; VAR_6++)
  FUNC_5(VAR_5, FUNC_0(VAR_6),
        FUNC_2(8) | FUNC_1(8));

 FUNC_4(VAR_5, VAR_0, VAR_3 | VAR_2);
 FUNC_3(VAR_5, VAR_0, VAR_3);

 return 0;
}
