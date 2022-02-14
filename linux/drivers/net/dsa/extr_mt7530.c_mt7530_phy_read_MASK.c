
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7530_priv {int bus; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_0, int VAR_1, int VAR_2)
{
 struct mt7530_priv *VAR_3 = VAR_0->priv;

 return FUNC_0(VAR_3->bus, VAR_1, VAR_2);
}
