
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int (* write_posted ) (struct ixgbe_hw*,scalar_t__*,int) ;int (* read_posted ) (struct ixgbe_hw*,scalar_t__*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mbx; } ;
struct ixgbevf_adapter {int mbx_lock; struct ixgbe_hw hw; } ;
typedef int msgbuf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ixgbe_hw*,scalar_t__*,int) ;
 int FUNC_4 (struct ixgbe_hw*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(struct ixgbevf_adapter *VAR_1, int VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;
 u32 VAR_4[2];
 int VAR_5;

 FUNC_0(VAR_4, 0, sizeof(VAR_4));
 VAR_4[0] = VAR_0;
 VAR_4[1] = (u32)VAR_2;

 FUNC_1(&VAR_1->mbx_lock);

 VAR_5 = VAR_3->mbx.ops.write_posted(VAR_3, VAR_4, 2);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_3->mbx.ops.read_posted(VAR_3, VAR_4, 2);
 if (VAR_5)
  goto out;

out:
 FUNC_2(&VAR_1->mbx_lock);
 return VAR_5;
}
