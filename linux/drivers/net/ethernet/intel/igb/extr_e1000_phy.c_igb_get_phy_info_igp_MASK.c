
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* read_reg ) (struct e1000_hw*,int ,int*) ;int (* get_cable_length ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {int polarity_correction; int is_mdix; void* remote_rx; void* local_rx; int cable_length; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_3 (struct e1000_hw*,int ,int*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int ,int*) ;

s32 FUNC_6(struct e1000_hw *VAR_12)
{
 struct e1000_phy_info *VAR_13 = &VAR_12->phy;
 s32 VAR_14;
 u16 VAR_15;
 bool VAR_16;

 VAR_14 = FUNC_2(VAR_12, 1, 0, &VAR_16);
 if (VAR_14)
  goto out;

 if (!VAR_16) {
  FUNC_0("Phy info is only valid if link is up\n");
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_13->polarity_correction = 1;

 VAR_14 = FUNC_1(VAR_12);
 if (VAR_14)
  goto out;

 VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_2, &VAR_15);
 if (VAR_14)
  goto out;

 VAR_13->is_mdix = (VAR_15 & VAR_3) ? 1 : 0;

 if ((VAR_15 & VAR_5) ==
     VAR_4) {
  VAR_14 = VAR_13->ops.get_cable_length(VAR_12);
  if (VAR_14)
   goto out;

  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_6, &VAR_15);
  if (VAR_14)
   goto out;

  VAR_13->local_rx = (VAR_15 & VAR_7)
    ? VAR_10
    : VAR_9;

  VAR_13->remote_rx = (VAR_15 & VAR_8)
     ? VAR_10
     : VAR_9;
 } else {
  VAR_13->cable_length = VAR_0;
  VAR_13->local_rx = VAR_11;
  VAR_13->remote_rx = VAR_11;
 }

out:
 return VAR_14;
}
