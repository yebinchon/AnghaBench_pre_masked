
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mt7530_priv {int reg_mutex; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mt7530_priv*,int ,int *) ;
 int FUNC_2 (struct mt7530_priv*,int ,int ,unsigned char const*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct dsa_switch *VAR_2, int VAR_3,
      const unsigned char *VAR_4, u16 VAR_5)
{
 struct mt7530_priv *VAR_6 = VAR_2->priv;
 int VAR_7;
 u8 VAR_8 = FUNC_0(VAR_3);

 FUNC_3(&VAR_6->reg_mutex);
 FUNC_2(VAR_6, VAR_5, VAR_8, VAR_4, -1, VAR_1);
 VAR_7 = FUNC_1(VAR_6, VAR_0, ((void*)0));
 FUNC_4(&VAR_6->reg_mutex);

 return VAR_7;
}
