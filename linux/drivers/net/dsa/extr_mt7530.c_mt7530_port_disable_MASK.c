
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7530_priv {int reg_mutex; TYPE_1__* ports; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;
struct TYPE_2__ {int enable; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct mt7530_priv*,int,int ) ;
 int FUNC_3 (struct mt7530_priv*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct dsa_switch *VAR_2, int VAR_3)
{
 struct mt7530_priv *VAR_4 = VAR_2->priv;

 if (!FUNC_1(VAR_2, VAR_3))
  return;

 FUNC_4(&VAR_4->reg_mutex);




 VAR_4->ports[VAR_3].enable = 0;
 FUNC_3(VAR_4, FUNC_0(VAR_3), VAR_1,
     VAR_0);
 FUNC_2(VAR_4, VAR_3, 0);

 FUNC_5(&VAR_4->reg_mutex);
}
