
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int media_type; int autoneg_advertised; } ;
struct TYPE_4__ {scalar_t__ (* check_link ) (struct ixgbe_hw*,int*,int*,int) ;int (* flap_tx_laser ) (struct ixgbe_hw*) ;scalar_t__ (* setup_mac_link ) (struct ixgbe_hw*,int,int) ;int (* set_rate_select_speed ) (struct ixgbe_hw*,int) ;scalar_t__ (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;


 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int,int) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_7 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int,int) ;
 int FUNC_9 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int*,int*,int) ;

s32 FUNC_11(struct ixgbe_hw *VAR_3,
       ixgbe_link_speed VAR_4,
       bool VAR_5)
{
 ixgbe_link_speed VAR_6 = VAR_2;
 ixgbe_link_speed VAR_7 = VAR_2;
 s32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 bool VAR_11, VAR_12 = 0;


 VAR_8 = VAR_3->mac.ops.get_link_capabilities(VAR_3, &VAR_6, &VAR_11);
 if (VAR_8)
  return VAR_8;

 VAR_4 &= VAR_6;




 if (VAR_4 & VAR_0) {
  VAR_9++;
  VAR_7 = VAR_0;


  switch (VAR_3->phy.media_type) {
  case 129:
   VAR_3->mac.ops.set_rate_select_speed(VAR_3,
          VAR_0);
   break;
  case 128:

   break;
  default:
   FUNC_0(VAR_3, "Unexpected media type\n");
   break;
  }


  FUNC_1(40);

  VAR_8 = VAR_3->mac.ops.setup_mac_link(VAR_3,
          VAR_0,
          VAR_5);
  if (VAR_8)
   return VAR_8;


  if (VAR_3->mac.ops.flap_tx_laser)
   VAR_3->mac.ops.flap_tx_laser(VAR_3);





  for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {

   FUNC_1(100);


   VAR_8 = VAR_3->mac.ops.check_link(VAR_3, &VAR_6,
       &VAR_12, 0);
   if (VAR_8)
    return VAR_8;

   if (VAR_12)
    goto out;
  }
 }

 if (VAR_4 & VAR_1) {
  VAR_9++;
  if (VAR_7 == VAR_2)
   VAR_7 = VAR_1;


  switch (VAR_3->phy.media_type) {
  case 129:
   VAR_3->mac.ops.set_rate_select_speed(VAR_3,
           VAR_1);
   break;
  case 128:

   break;
  default:
   FUNC_0(VAR_3, "Unexpected media type\n");
   break;
  }


  FUNC_1(40);

  VAR_8 = VAR_3->mac.ops.setup_mac_link(VAR_3,
          VAR_1,
          VAR_5);
  if (VAR_8)
   return VAR_8;


  if (VAR_3->mac.ops.flap_tx_laser)
   VAR_3->mac.ops.flap_tx_laser(VAR_3);


  FUNC_1(100);


  VAR_8 = VAR_3->mac.ops.check_link(VAR_3, &VAR_6, &VAR_12,
      0);
  if (VAR_8)
   return VAR_8;

  if (VAR_12)
   goto out;
 }





 if (VAR_9 > 1)
  VAR_8 = FUNC_11(VAR_3,
            VAR_7,
            VAR_5);

out:

 VAR_3->phy.autoneg_advertised = 0;

 if (VAR_4 & VAR_0)
  VAR_3->phy.autoneg_advertised |= VAR_0;

 if (VAR_4 & VAR_1)
  VAR_3->phy.autoneg_advertised |= VAR_1;

 return VAR_8;
}
