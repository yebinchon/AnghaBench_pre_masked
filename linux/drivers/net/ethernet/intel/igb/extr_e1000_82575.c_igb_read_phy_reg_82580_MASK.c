
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;

s32 FUNC_3(struct e1000_hw *VAR_0, u32 VAR_1, u16 *VAR_2)
{
 s32 VAR_3;

 VAR_3 = VAR_0->phy.ops.acquire(VAR_0);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->phy.ops.release(VAR_0);

out:
 return VAR_3;
}
