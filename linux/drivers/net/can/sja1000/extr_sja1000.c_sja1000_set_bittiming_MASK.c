
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct sja1000_priv {int (* write_reg ) (struct sja1000_priv*,int ,int) ;TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*,int,int) ;
 struct sja1000_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sja1000_priv*,int ,int) ;
 int FUNC_3 (struct sja1000_priv*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct sja1000_priv *VAR_4 = FUNC_1(VAR_3);
 struct can_bittiming *VAR_5 = &VAR_4->can.bittiming;
 u8 VAR_6, VAR_7;

 VAR_6 = ((VAR_5->brp - 1) & 0x3f) | (((VAR_5->sjw - 1) & 0x3) << 6);
 VAR_7 = ((VAR_5->prop_seg + VAR_5->phase_seg1 - 1) & 0xf) |
  (((VAR_5->phase_seg2 - 1) & 0x7) << 4);
 if (VAR_4->can.ctrlmode & VAR_0)
  VAR_7 |= 0x80;

 FUNC_0(VAR_3, "setting BTR0=0x%02x BTR1=0x%02x\n", VAR_6, VAR_7);

 VAR_4->write_reg(VAR_4, VAR_1, VAR_6);
 VAR_4->write_reg(VAR_4, VAR_2, VAR_7);

 return 0;
}
