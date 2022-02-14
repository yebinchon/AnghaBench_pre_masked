
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ctrlmode; int state; } ;
struct TYPE_3__ {int flags; } ;
struct xcan_priv {TYPE_2__ can; int (* read_reg ) (struct xcan_priv*,int ) ;int (* write_reg ) (struct xcan_priv*,int ,int) ;TYPE_1__ devtype; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct net_device*,char*,int ) ;
 struct xcan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct xcan_priv*,int ,int) ;
 int FUNC_4 (struct xcan_priv*,int ,int) ;
 int FUNC_5 (struct xcan_priv*,int ,int) ;
 int FUNC_6 (struct xcan_priv*,int ,int) ;
 int FUNC_7 (struct xcan_priv*,int ) ;
 int FUNC_8 (struct xcan_priv*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_19)
{
 struct xcan_priv *VAR_20 = FUNC_1(VAR_19);
 u32 VAR_21;
 int VAR_22;
 u32 VAR_23;


 VAR_22 = FUNC_2(VAR_19);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_9(VAR_19);
 if (VAR_22 < 0)
  return VAR_22;


 VAR_23 = VAR_12 | VAR_7 |
  VAR_13 | VAR_11 |
  VAR_8 | VAR_10 |
  VAR_6 | FUNC_8(VAR_20);

 if (VAR_20->devtype.flags & VAR_4)
  VAR_23 |= VAR_9;

 VAR_20->write_reg(VAR_20, VAR_5, VAR_23);


 if (VAR_20->can.ctrlmode & VAR_0) {
  VAR_21 = VAR_14;
 } else {
  VAR_21 = 0x0;
 }




 if (VAR_20->devtype.flags & VAR_3)
  VAR_20->write_reg(VAR_20, VAR_2, 0x00000001);

 VAR_20->write_reg(VAR_20, VAR_15, VAR_21);
 VAR_20->write_reg(VAR_20, VAR_17, VAR_16);

 FUNC_0(VAR_19, "status:#x%08x\n",
     VAR_20->read_reg(VAR_20, VAR_18));

 VAR_20->can.state = VAR_1;
 return 0;
}
