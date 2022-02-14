
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = 0;

 if (VAR_3->mac.type != VAR_2)
  return 0;


 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_3->phy.ops.acquire(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, 0x0034);
 if (VAR_4)
  goto release;

 VAR_4 = FUNC_1(VAR_3, VAR_0, 0x0005);
release:
 VAR_3->phy.ops.release(VAR_3);

 return VAR_4;
}
