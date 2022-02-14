
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {scalar_t__ type; int id; TYPE_1__ ops; scalar_t__ autoneg_wait_to_complete; } ;
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
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct e1000_hw*,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_12 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_13 (struct e1000_hw*,int ,int) ;

s32 FUNC_14(struct e1000_hw *VAR_10)
{
 struct e1000_phy_info *VAR_11 = &VAR_10->phy;
 s32 VAR_12;
 u16 VAR_13;
 bool VAR_14;


 if (VAR_11->type != VAR_8) {



  VAR_12 = VAR_11->ops.read_reg(VAR_10, VAR_3,
         &VAR_13);
  if (VAR_12)
   goto out;

  VAR_13 &= ~VAR_5;
  VAR_12 = VAR_11->ops.write_reg(VAR_10, VAR_3,
          VAR_13);
  if (VAR_12)
   goto out;

  FUNC_0("M88E1000 PSCR: %X\n", VAR_13);
 }

 VAR_12 = VAR_11->ops.read_reg(VAR_10, VAR_6, &VAR_13);
 if (VAR_12)
  goto out;

 FUNC_1(VAR_10, &VAR_13);

 VAR_12 = VAR_11->ops.write_reg(VAR_10, VAR_6, VAR_13);
 if (VAR_12)
  goto out;


 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12)
  goto out;

 if (VAR_11->autoneg_wait_to_complete) {
  FUNC_0("Waiting for forced speed/duplex link on M88 phy.\n");

  VAR_12 = FUNC_2(VAR_10, VAR_7, 100000, &VAR_14);
  if (VAR_12)
   goto out;

  if (!VAR_14) {
   bool VAR_15 = 1;

   switch (VAR_10->phy.id) {
   case 131:
   case 130:
   case 128:
   case 129:
   case 132:
    VAR_15 = 0;
    break;
   default:
    if (VAR_10->phy.type != VAR_9)
     VAR_15 = 0;
    break;
   }
   if (!VAR_15) {
    FUNC_0("Link taking longer than expected.\n");
   } else {



    VAR_12 = VAR_11->ops.write_reg(VAR_10,
      VAR_2,
      0x001d);
    if (VAR_12)
     goto out;
    VAR_12 = FUNC_3(VAR_10);
    if (VAR_12)
     goto out;
   }
  }


  VAR_12 = FUNC_2(VAR_10, VAR_7,
        100000, &VAR_14);
  if (VAR_12)
   goto out;
 }

 if (VAR_10->phy.type != VAR_9 ||
     VAR_10->phy.id == 131 ||
     VAR_10->phy.id == 130 ||
     VAR_10->phy.id == 128 ||
     VAR_10->phy.id == 129 ||
     VAR_10->phy.id == 132)
  goto out;

 VAR_12 = VAR_11->ops.read_reg(VAR_10, VAR_1, &VAR_13);
 if (VAR_12)
  goto out;





 VAR_13 |= VAR_0;
 VAR_12 = VAR_11->ops.write_reg(VAR_10, VAR_1, VAR_13);
 if (VAR_12)
  goto out;




 VAR_12 = VAR_11->ops.read_reg(VAR_10, VAR_3, &VAR_13);
 if (VAR_12)
  goto out;

 VAR_13 |= VAR_4;
 VAR_12 = VAR_11->ops.write_reg(VAR_10, VAR_3, VAR_13);

out:
 return VAR_12;
}
