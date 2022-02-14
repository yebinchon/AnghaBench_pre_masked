
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct sja1000_priv {unsigned char (* read_reg ) (struct sja1000_priv*,int ) ;int (* write_reg ) (struct sja1000_priv*,int ,unsigned char) ;TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct sja1000_priv* FUNC_1 (struct net_device*) ;
 unsigned char FUNC_2 (struct sja1000_priv*,int ) ;
 int FUNC_3 (struct sja1000_priv*,int ,unsigned char) ;
 int FUNC_4 (struct sja1000_priv*,int ,unsigned char) ;
 unsigned char FUNC_5 (struct sja1000_priv*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5)
{
 struct sja1000_priv *VAR_6 = FUNC_1(VAR_5);
 unsigned char VAR_7 = VAR_6->read_reg(VAR_6, VAR_4);
 int VAR_8;


 VAR_6->write_reg(VAR_6, VAR_3, VAR_1);

 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {

  if (VAR_7 & VAR_2) {
   VAR_6->can.state = VAR_0;
   return;
  }


  VAR_6->write_reg(VAR_6, VAR_4, VAR_2);
  FUNC_6(10);
  VAR_7 = VAR_6->read_reg(VAR_6, VAR_4);
 }

 FUNC_0(VAR_5, "setting SJA1000 into reset mode failed!\n");
}
