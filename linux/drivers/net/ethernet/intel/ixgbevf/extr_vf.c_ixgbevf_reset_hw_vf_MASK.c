
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {scalar_t__ (* read_posted ) (struct ixgbe_hw*,int*,int) ;int (* write_posted ) (struct ixgbe_hw*,int*,int) ;int (* check_for_rst ) (struct ixgbe_hw*) ;} ;
struct ixgbe_mbx_info {TYPE_2__ ops; int timeout; } ;
struct TYPE_4__ {int (* stop_adapter ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int mc_filter_type; int perm_addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; int api_version; struct ixgbe_mbx_info mbx; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int*,int) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static s32 FUNC_9(struct ixgbe_hw *VAR_12)
{
 struct ixgbe_mbx_info *VAR_13 = &VAR_12->mbx;
 u32 VAR_14 = VAR_4;
 s32 VAR_15 = VAR_1;
 u32 VAR_16[VAR_7];
 u8 *VAR_17 = (u8 *)(&VAR_16[1]);


 VAR_12->mac.ops.stop_adapter(VAR_12);


 VAR_12->api_version = VAR_11;

 FUNC_1(VAR_12, VAR_3, VAR_0);
 FUNC_0(VAR_12);


 while (!VAR_13->ops.check_for_rst(VAR_12) && VAR_14) {
  VAR_14--;
  FUNC_8(5);
 }

 if (!VAR_14)
  return VAR_2;


 VAR_13->timeout = VAR_5;

 VAR_16[0] = VAR_8;
 VAR_13->ops.write_posted(VAR_12, VAR_16, 1);

 FUNC_3(10);





 VAR_15 = VAR_13->ops.read_posted(VAR_12, VAR_16, VAR_7);
 if (VAR_15)
  return VAR_15;





 if (VAR_16[0] != (VAR_8 | VAR_9) &&
     VAR_16[0] != (VAR_8 | VAR_10))
  return VAR_1;

 if (VAR_16[0] == (VAR_8 | VAR_9))
  FUNC_2(VAR_12->mac.perm_addr, VAR_17);

 VAR_12->mac.mc_filter_type = VAR_16[VAR_6];

 return 0;
}
