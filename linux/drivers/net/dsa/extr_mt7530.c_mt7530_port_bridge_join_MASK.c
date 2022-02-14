
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mt7530_priv {int reg_mutex; TYPE_1__* ports; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;
struct TYPE_4__ {struct net_device* bridge_dev; } ;
struct TYPE_3__ {int pm; scalar_t__ enable; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct dsa_switch*,int) ;
 TYPE_2__* FUNC_4 (struct dsa_switch*,int) ;
 int FUNC_5 (struct mt7530_priv*,int ,int ,int ) ;
 int FUNC_6 (struct mt7530_priv*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct dsa_switch *VAR_3, int VAR_4,
   struct net_device *VAR_5)
{
 struct mt7530_priv *VAR_6 = VAR_3->priv;
 u32 VAR_7 = FUNC_0(VAR_0);
 int VAR_8;

 FUNC_7(&VAR_6->reg_mutex);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {




  if (FUNC_3(VAR_3, VAR_8) && VAR_8 != VAR_4) {
   if (FUNC_4(VAR_3, VAR_8)->bridge_dev != VAR_5)
    continue;
   if (VAR_6->ports[VAR_8].enable)
    FUNC_6(VAR_6, FUNC_1(VAR_8),
        FUNC_2(FUNC_0(VAR_4)));
   VAR_6->ports[VAR_8].pm |= FUNC_2(FUNC_0(VAR_4));

   VAR_7 |= FUNC_0(VAR_8);
  }
 }


 if (VAR_6->ports[VAR_4].enable)
  FUNC_5(VAR_6, FUNC_1(VAR_4),
      VAR_2, FUNC_2(VAR_7));
 VAR_6->ports[VAR_4].pm |= FUNC_2(VAR_7);

 FUNC_8(&VAR_6->reg_mutex);

 return 0;
}
