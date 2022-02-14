
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_3__ {int msgs_tx; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct ixgbe_hw {TYPE_2__ mbx; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,size_t,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_3, u32 *VAR_4, u16 VAR_5)
{
 s32 VAR_6;
 u16 VAR_7;


 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6)
  goto out_no_write;


 FUNC_3(VAR_3);
 FUNC_2(VAR_3);


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  FUNC_1(VAR_3, VAR_2, VAR_7, VAR_4[VAR_7]);


 VAR_3->mbx.stats.msgs_tx++;


 FUNC_0(VAR_3, VAR_0, VAR_1);

out_no_write:
 return VAR_6;
}
