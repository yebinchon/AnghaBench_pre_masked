
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {TYPE_3__ ops; } ;
struct TYPE_4__ {scalar_t__ media_port; int media_changed; } ;
struct TYPE_5__ {TYPE_1__ _82575; } ;
struct e1000_hw {TYPE_2__ dev_spec; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_5)
{
 struct e1000_phy_info *VAR_6 = &VAR_5->phy;
 s32 VAR_7;
 u16 VAR_8;
 u8 VAR_9 = 0;


 VAR_7 = VAR_6->ops.write_reg(VAR_5, VAR_0, 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_6->ops.read_reg(VAR_5, VAR_1, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 & VAR_2)
  VAR_9 = VAR_3;


 VAR_7 = VAR_6->ops.write_reg(VAR_5, VAR_0, 1);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_6->ops.read_reg(VAR_5, VAR_1, &VAR_8);
 if (VAR_7)
  return VAR_7;


 if (VAR_8 & VAR_2)
  VAR_9 = VAR_4;


 if (VAR_9 && (VAR_5->dev_spec._82575.media_port != VAR_9)) {
  VAR_5->dev_spec._82575.media_port = VAR_9;
  VAR_5->dev_spec._82575.media_changed = 1;
 }

 if (VAR_9 == VAR_3) {

  VAR_7 = VAR_6->ops.write_reg(VAR_5, VAR_0, 0);
  if (VAR_7)
   return VAR_7;
  FUNC_0(VAR_5);
 } else {
  FUNC_0(VAR_5);

  VAR_7 = VAR_6->ops.write_reg(VAR_5, VAR_0, 0);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
