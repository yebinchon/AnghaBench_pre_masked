
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {int prtad; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ ops; int id; TYPE_3__ mdio; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static bool FUNC_4(struct ixgbe_hw *VAR_7, u16 VAR_8)
{
 u16 VAR_9 = 0;

 VAR_7->phy.mdio.prtad = VAR_8;
 if (FUNC_2(&VAR_7->phy.mdio, VAR_8) != 0)
  return 0;

 if (FUNC_0(VAR_7))
  return 0;

 VAR_7->phy.type = FUNC_1(VAR_7->phy.id);

 if (VAR_7->phy.type == VAR_6) {
  VAR_7->phy.ops.read_reg(VAR_7,
         VAR_1,
         VAR_0,
         &VAR_9);
  if (VAR_9 &
      (VAR_3 |
       VAR_2))
   VAR_7->phy.type = VAR_4;
  else
   VAR_7->phy.type = VAR_5;
 }

 return 1;
}
