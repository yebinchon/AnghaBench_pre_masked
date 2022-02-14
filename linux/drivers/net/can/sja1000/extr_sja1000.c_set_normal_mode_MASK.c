
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ctrlmode; int state; } ;
struct sja1000_priv {unsigned char (* read_reg ) (struct sja1000_priv*,int ) ;int (* write_reg ) (struct sja1000_priv*,int ,int) ;TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct sja1000_priv* FUNC_1 (struct net_device*) ;
 unsigned char FUNC_2 (struct sja1000_priv*,int ) ;
 int FUNC_3 (struct sja1000_priv*,int ,int) ;
 int FUNC_4 (struct sja1000_priv*,int ,int) ;
 int FUNC_5 (struct sja1000_priv*,int ,int) ;
 unsigned char FUNC_6 (struct sja1000_priv*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_11)
{
 struct sja1000_priv *VAR_12 = FUNC_1(VAR_11);
 unsigned char VAR_13 = VAR_12->read_reg(VAR_12, VAR_10);
 u8 VAR_14 = 0x00;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < 100; VAR_15++) {

  if ((VAR_13 & VAR_7) == 0) {
   VAR_12->can.state = VAR_3;

   if (VAR_12->can.ctrlmode & VAR_0)
    VAR_12->write_reg(VAR_12, VAR_9, VAR_4);
   else
    VAR_12->write_reg(VAR_12, VAR_9,
      VAR_4 & ~VAR_5);
   return;
  }


  if (VAR_12->can.ctrlmode & VAR_1)
   VAR_14 |= VAR_6;
  if (VAR_12->can.ctrlmode & VAR_2)
   VAR_14 |= VAR_8;
  VAR_12->write_reg(VAR_12, VAR_10, VAR_14);

  FUNC_7(10);

  VAR_13 = VAR_12->read_reg(VAR_12, VAR_10);
 }

 FUNC_0(VAR_11, "setting SJA1000 into normal mode failed!\n");
}
