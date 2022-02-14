
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct mt7530_priv {int reg_mutex; TYPE_1__* ports; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;
struct TYPE_2__ {int enable; int pm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (struct mt7530_priv*,int,int ) ;
 int FUNC_5 (struct mt7530_priv*,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct dsa_switch *VAR_2, int VAR_3,
     struct phy_device *VAR_4)
{
 struct mt7530_priv *VAR_5 = VAR_2->priv;

 if (!FUNC_3(VAR_2, VAR_3))
  return 0;

 FUNC_6(&VAR_5->reg_mutex);





 VAR_5->ports[VAR_3].pm |= FUNC_2(FUNC_0(VAR_0));
 VAR_5->ports[VAR_3].enable = 1;
 FUNC_5(VAR_5, FUNC_1(VAR_3), VAR_1,
     VAR_5->ports[VAR_3].pm);
 FUNC_4(VAR_5, VAR_3, 0);

 FUNC_7(&VAR_5->reg_mutex);

 return 0;
}
