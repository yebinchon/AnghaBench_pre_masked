
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* write_reg ) (struct e1000_hw*,int ,int) ;int (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int id; int* pair_length; int min_cable_length; int max_cable_length; int cable_length; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (void**) ;
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


 void** VAR_11 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct e1000_hw*,int ,int*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,int*) ;
 int FUNC_6 (struct e1000_hw*,int ,int) ;
 int FUNC_7 (struct e1000_hw*,int ,int) ;
 int FUNC_8 (struct e1000_hw*,int ,int*) ;
 int FUNC_9 (struct e1000_hw*,int ,int*) ;
 int FUNC_10 (struct e1000_hw*,int ,int*) ;
 int FUNC_11 (struct e1000_hw*,int ,int*) ;
 int FUNC_12 (struct e1000_hw*,int ,int*) ;
 int FUNC_13 (struct e1000_hw*,int ,int) ;
 int FUNC_14 (struct e1000_hw*,int ,int*) ;

s32 FUNC_15(struct e1000_hw *VAR_12)
{
 struct e1000_phy_info *VAR_13 = &VAR_12->phy;
 s32 VAR_14;
 u16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0;
 u16 VAR_21;
 u16 VAR_22;

 switch (VAR_12->phy.id) {
 case 128:
 case 129:
 case 131:
 case 132:

  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_1,
         &VAR_18);
  if (VAR_14)
   goto out;

  VAR_14 = VAR_13->ops.write_reg(VAR_12, VAR_1, 0x07);
  if (VAR_14)
   goto out;


  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_2, &VAR_16);
  if (VAR_14)
   goto out;

  VAR_19 = !(VAR_16 & VAR_3);


  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_4, &VAR_15);
  if (VAR_14)
   goto out;

  VAR_13->pair_length[0] = VAR_15 / (VAR_19 ? 100 : 1);
  VAR_20 = VAR_13->pair_length[0];
  VAR_21 = VAR_13->pair_length[0];
  VAR_22 = VAR_13->pair_length[0];


  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_5, &VAR_15);
  if (VAR_14)
   goto out;

  VAR_13->pair_length[1] = VAR_15 / (VAR_19 ? 100 : 1);
  VAR_20 += VAR_13->pair_length[1];
  VAR_21 = FUNC_2(VAR_21, VAR_13->pair_length[1]);
  VAR_22 = FUNC_1(VAR_22, VAR_13->pair_length[1]);


  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_6, &VAR_15);
  if (VAR_14)
   goto out;

  VAR_13->pair_length[2] = VAR_15 / (VAR_19 ? 100 : 1);
  VAR_20 += VAR_13->pair_length[2];
  VAR_21 = FUNC_2(VAR_21, VAR_13->pair_length[2]);
  VAR_22 = FUNC_1(VAR_22, VAR_13->pair_length[2]);


  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_7, &VAR_15);
  if (VAR_14)
   goto out;

  VAR_13->pair_length[3] = VAR_15 / (VAR_19 ? 100 : 1);
  VAR_20 += VAR_13->pair_length[3];
  VAR_21 = FUNC_2(VAR_21, VAR_13->pair_length[3]);
  VAR_22 = FUNC_1(VAR_22, VAR_13->pair_length[3]);


  VAR_13->min_cable_length = VAR_21;
  VAR_13->max_cable_length = VAR_22;
  VAR_13->cable_length = VAR_20 / 4;


  VAR_14 = VAR_13->ops.write_reg(VAR_12, VAR_1,
          VAR_18);
  if (VAR_14)
   goto out;
  break;
 case 130:

  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_1,
         &VAR_18);
  if (VAR_14)
   goto out;

  VAR_14 = VAR_13->ops.write_reg(VAR_12, VAR_1, 0x05);
  if (VAR_14)
   goto out;

  VAR_14 = VAR_13->ops.read_reg(VAR_12, VAR_10,
         &VAR_15);
  if (VAR_14)
   goto out;

  VAR_17 = (VAR_15 & VAR_8) >>
   VAR_9;
  if (VAR_17 >= FUNC_0(VAR_11) - 1) {
   VAR_14 = -VAR_0;
   goto out;
  }

  VAR_13->min_cable_length = VAR_11[VAR_17];
  VAR_13->max_cable_length = VAR_11[VAR_17 + 1];

  VAR_13->cable_length = (VAR_13->min_cable_length +
         VAR_13->max_cable_length) / 2;


  VAR_14 = VAR_13->ops.write_reg(VAR_12, VAR_1,
          VAR_18);
  if (VAR_14)
   goto out;

  break;
 default:
  VAR_14 = -VAR_0;
  goto out;
 }

out:
 return VAR_14;
}
