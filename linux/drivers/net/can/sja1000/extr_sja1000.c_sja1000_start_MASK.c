
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct sja1000_priv {int (* read_reg ) (struct sja1000_priv*,int ) ;int (* write_reg ) (struct sja1000_priv*,int ,int) ;TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 struct sja1000_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sja1000_priv*,int ) ;
 int FUNC_5 (struct sja1000_priv*,int ,int) ;
 int FUNC_6 (struct sja1000_priv*,int ,int) ;
 int FUNC_7 (struct sja1000_priv*,int ) ;
 int FUNC_8 (struct sja1000_priv*,int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_7)
{
 struct sja1000_priv *VAR_8 = FUNC_1(VAR_7);


 if (VAR_8->can.state != VAR_0)
  FUNC_3(VAR_7);


 if (!(VAR_8->read_reg(VAR_8, VAR_2) & VAR_1))
  FUNC_0(VAR_7);


 VAR_8->write_reg(VAR_8, VAR_6, 0x0);
 VAR_8->write_reg(VAR_8, VAR_5, 0x0);
 VAR_8->read_reg(VAR_8, VAR_3);


 VAR_8->read_reg(VAR_8, VAR_4);


 FUNC_2(VAR_7);
}
