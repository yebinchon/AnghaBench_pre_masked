
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int reqs; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct ixgbe_hw {TYPE_2__ mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int,int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_2, u16 VAR_3)
{
 s32 VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5 = VAR_3 % 16;

 if (!FUNC_1(VAR_2, VAR_1 << VAR_5,
        VAR_4)) {
  VAR_2->mbx.stats.reqs++;
  return 0;
 }

 return VAR_0;
}
