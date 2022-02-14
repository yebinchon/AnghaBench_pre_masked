
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* check_for_rst ) (struct ixgbe_hw*) ;} ;
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
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_7,
     ixgbe_link_speed *VAR_8,
     bool *VAR_9,
     bool VAR_10)
{
 struct ixgbe_mbx_info *VAR_11 = &VAR_7->mbx;
 struct ixgbe_mac_info *VAR_12 = &VAR_7->mac;
 u32 VAR_13;


 if (!VAR_11->ops.check_for_rst(VAR_7) || !VAR_11->timeout)
  VAR_12->get_link_status = 1;

 if (!VAR_12->get_link_status)
  goto out;


 VAR_13 = FUNC_0(VAR_7, VAR_5);
 if (!(VAR_13 & VAR_1))
  goto out;




 if (VAR_12->type == VAR_6) {
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < 5; VAR_14++) {
   FUNC_2(100);
   VAR_13 = FUNC_0(VAR_7, VAR_5);

   if (!(VAR_13 & VAR_1))
    goto out;
  }
 }

 switch (VAR_13 & VAR_0) {
 case 129:
  *VAR_8 = VAR_3;
  break;
 case 128:
  *VAR_8 = VAR_4;
  break;
 case 130:
  *VAR_8 = VAR_2;
  break;
 }




 VAR_12->get_link_status = 0;

out:
 *VAR_9 = !VAR_12->get_link_status;
 return 0;
}
