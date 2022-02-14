
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int forced_speed_duplex; } ;
struct TYPE_3__ {scalar_t__ autoneg_wait_to_complete; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


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
 int FUNC_0 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_12)
{
 s32 VAR_13;
 u16 VAR_14;
 bool VAR_15;




 VAR_13 = FUNC_3(VAR_12, VAR_9, &VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_14 &= ~VAR_8;
 VAR_13 = FUNC_4(VAR_12, VAR_7, VAR_14);
 if (VAR_13)
  return VAR_13;

 FUNC_5("GG82563 PSCR: %X\n", VAR_14);

 VAR_13 = FUNC_3(VAR_12, VAR_10, &VAR_14);
 if (VAR_13)
  return VAR_13;

 FUNC_0(VAR_12, &VAR_14);


 VAR_14 |= VAR_0;

 VAR_13 = FUNC_4(VAR_12, VAR_10, VAR_14);
 if (VAR_13)
  return VAR_13;

 FUNC_6(1);

 if (VAR_12->phy.autoneg_wait_to_complete) {
  FUNC_5("Waiting for forced speed/duplex link on GG82563 phy.\n");

  VAR_13 = FUNC_1(VAR_12, VAR_11,
            100000, &VAR_15);
  if (VAR_13)
   return VAR_13;

  if (!VAR_15) {



   VAR_13 = FUNC_2(VAR_12);
   if (VAR_13)
    return VAR_13;
  }


  VAR_13 = FUNC_1(VAR_12, VAR_11,
            100000, &VAR_15);
  if (VAR_13)
   return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_12, VAR_6, &VAR_14);
 if (VAR_13)
  return VAR_13;




 VAR_14 &= ~VAR_5;
 if (VAR_12->mac.forced_speed_duplex & VAR_1)
  VAR_14 |= VAR_4;
 else
  VAR_14 |= VAR_3;




 VAR_14 |= VAR_2;
 VAR_13 = FUNC_4(VAR_12, VAR_6, VAR_14);

 return VAR_13;
}
