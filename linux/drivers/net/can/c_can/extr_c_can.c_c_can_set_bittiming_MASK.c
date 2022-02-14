
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct can_bittiming {int brp; unsigned int sjw; unsigned int prop_seg; unsigned int phase_seg1; unsigned int phase_seg2; } ;
struct TYPE_2__ {struct can_bittiming bittiming; } ;
struct c_can_priv {unsigned int (* read_reg ) (struct c_can_priv*,int ) ;int (* write_reg ) (struct c_can_priv*,int ,unsigned int) ;TYPE_1__ can; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*,struct c_can_priv*,unsigned int) ;
 int FUNC_1 (struct net_device*,char*,unsigned int,unsigned int) ;
 struct c_can_priv* FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (struct c_can_priv*,int ) ;
 int FUNC_4 (struct c_can_priv*,int ,unsigned int) ;
 int FUNC_5 (struct c_can_priv*,int ,unsigned int) ;
 int FUNC_6 (struct c_can_priv*,int ,unsigned int) ;
 int FUNC_7 (struct c_can_priv*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13;
 u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u32 VAR_19;
 struct c_can_priv *VAR_20 = FUNC_2(VAR_10);
 const struct can_bittiming *VAR_21 = &VAR_20->can.bittiming;
 int VAR_22;


 VAR_19 = VAR_21->brp - 1;
 VAR_14 = VAR_19 & VAR_1;
 VAR_15 = VAR_19 >> 6;

 VAR_16 = VAR_21->sjw - 1;
 VAR_17 = VAR_21->prop_seg + VAR_21->phase_seg1 - 1;
 VAR_18 = VAR_21->phase_seg2 - 1;
 VAR_11 = VAR_14 | (VAR_16 << VAR_2) | (VAR_17 << VAR_3) |
   (VAR_18 << VAR_4);
 VAR_12 = VAR_15 & VAR_0;

 FUNC_1(VAR_10,
  "setting BTR=%04x BRPE=%04x\n", VAR_11, VAR_12);

 VAR_13 = VAR_20->read_reg(VAR_20, VAR_9);
 VAR_13 &= ~VAR_6;
 VAR_20->write_reg(VAR_20, VAR_9, VAR_5 | VAR_6);
 VAR_22 = FUNC_0(VAR_10, VAR_20, VAR_6);
 if (VAR_22)
  return VAR_22;

 VAR_20->write_reg(VAR_20, VAR_8, VAR_11);
 VAR_20->write_reg(VAR_20, VAR_7, VAR_12);
 VAR_20->write_reg(VAR_20, VAR_9, VAR_13);

 return FUNC_0(VAR_10, VAR_20, 0);
}
