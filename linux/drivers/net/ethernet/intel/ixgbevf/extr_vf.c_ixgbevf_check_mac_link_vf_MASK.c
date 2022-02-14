
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* read ) (struct ixgbe_hw*,int*,int) ;int (* check_for_rst ) (struct ixgbe_hw*) ;} ;
struct ixgbe_mbx_info {int timeout; TYPE_1__ ops; } ;
struct ixgbe_mac_info {int get_link_status; scalar_t__ type; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_9,
         ixgbe_link_speed *VAR_10,
         bool *VAR_11,
         bool VAR_12)
{
 struct ixgbe_mbx_info *VAR_13 = &VAR_9->mbx;
 struct ixgbe_mac_info *VAR_14 = &VAR_9->mac;
 s32 VAR_15 = 0;
 u32 VAR_16;
 u32 VAR_17 = 0;


 if (!VAR_13->ops.check_for_rst(VAR_9) || !VAR_13->timeout)
  VAR_14->get_link_status = 1;

 if (!VAR_14->get_link_status)
  goto out;


 VAR_16 = FUNC_0(VAR_9, VAR_5);
 if (!(VAR_16 & VAR_1))
  goto out;




 if (VAR_14->type == VAR_8) {
  int VAR_18;

  for (VAR_18 = 0; VAR_18 < 5; VAR_18++) {
   FUNC_3(100);
   VAR_16 = FUNC_0(VAR_9, VAR_5);

   if (!(VAR_16 & VAR_1))
    goto out;
  }
 }

 switch (VAR_16 & VAR_0) {
 case 129:
  *VAR_10 = VAR_3;
  break;
 case 128:
  *VAR_10 = VAR_4;
  break;
 case 130:
  *VAR_10 = VAR_2;
  break;
 }




 if (VAR_13->ops.read(VAR_9, &VAR_17, 1))
  goto out;

 if (!(VAR_17 & VAR_6)) {

  if (VAR_17 & VAR_7)
   VAR_15 = -1;
  goto out;
 }


 if (!VAR_13->timeout) {
  VAR_15 = -1;
  goto out;
 }




 VAR_14->get_link_status = 0;

out:
 *VAR_11 = !VAR_14->get_link_status;
 return VAR_15;
}
