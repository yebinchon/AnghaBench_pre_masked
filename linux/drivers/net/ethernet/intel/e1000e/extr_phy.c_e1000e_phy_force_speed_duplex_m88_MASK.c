
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* commit ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {scalar_t__ type; scalar_t__ autoneg_wait_to_complete; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct e1000_hw*,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;

s32 FUNC_7(struct e1000_hw *VAR_9)
{
 struct e1000_phy_info *VAR_10 = &VAR_9->phy;
 s32 VAR_11;
 u16 VAR_12;
 bool VAR_13;




 VAR_11 = FUNC_3(VAR_9, VAR_3, &VAR_12);
 if (VAR_11)
  return VAR_11;

 VAR_12 &= ~VAR_5;
 VAR_11 = FUNC_4(VAR_9, VAR_3, VAR_12);
 if (VAR_11)
  return VAR_11;

 FUNC_5("M88E1000 PSCR: %X\n", VAR_12);

 VAR_11 = FUNC_3(VAR_9, VAR_6, &VAR_12);
 if (VAR_11)
  return VAR_11;

 FUNC_0(VAR_9, &VAR_12);

 VAR_11 = FUNC_4(VAR_9, VAR_6, VAR_12);
 if (VAR_11)
  return VAR_11;


 if (VAR_9->phy.ops.commit) {
  VAR_11 = VAR_9->phy.ops.commit(VAR_9);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_10->autoneg_wait_to_complete) {
  FUNC_5("Waiting for forced speed/duplex link on M88 phy.\n");

  VAR_11 = FUNC_1(VAR_9, VAR_7,
            100000, &VAR_13);
  if (VAR_11)
   return VAR_11;

  if (!VAR_13) {
   if (VAR_9->phy.type != VAR_8) {
    FUNC_5("Link taking longer than expected.\n");
   } else {



    VAR_11 = FUNC_4(VAR_9, VAR_2,
         0x001d);
    if (VAR_11)
     return VAR_11;
    VAR_11 = FUNC_2(VAR_9);
    if (VAR_11)
     return VAR_11;
   }
  }


  VAR_11 = FUNC_1(VAR_9, VAR_7,
            100000, &VAR_13);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_9->phy.type != VAR_8)
  return 0;

 VAR_11 = FUNC_3(VAR_9, VAR_1, &VAR_12);
 if (VAR_11)
  return VAR_11;





 VAR_12 |= VAR_0;
 VAR_11 = FUNC_4(VAR_9, VAR_1, VAR_12);
 if (VAR_11)
  return VAR_11;




 VAR_11 = FUNC_3(VAR_9, VAR_3, &VAR_12);
 if (VAR_11)
  return VAR_11;

 VAR_12 |= VAR_4;
 VAR_11 = FUNC_4(VAR_9, VAR_3, VAR_12);

 return VAR_11;
}
