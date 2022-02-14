
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_2, u32 VAR_3,
       u16 *VAR_4)
{
 s32 VAR_5 = -VAR_0;

 if (VAR_3 > VAR_1) {
  FUNC_0("PHY Address %u is out of range\n", VAR_3);
  goto out;
 }

 VAR_5 = VAR_2->phy.ops.acquire(VAR_2);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

 VAR_2->phy.ops.release(VAR_2);

out:
 return VAR_5;
}
