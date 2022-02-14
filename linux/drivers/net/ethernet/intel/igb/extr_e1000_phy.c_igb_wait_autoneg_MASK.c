
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = 0;
 u16 VAR_5, VAR_6;


 for (VAR_5 = VAR_1; VAR_5 > 0; VAR_5--) {
  VAR_4 = VAR_3->phy.ops.read_reg(VAR_3, VAR_2, &VAR_6);
  if (VAR_4)
   break;
  VAR_4 = VAR_3->phy.ops.read_reg(VAR_3, VAR_2, &VAR_6);
  if (VAR_4)
   break;
  if (VAR_6 & VAR_0)
   break;
  FUNC_0(100);
 }




 return VAR_4;
}
