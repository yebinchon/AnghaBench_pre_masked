
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int (* write_posted ) (struct ixgbe_hw*,int*,int) ;int (* read_posted ) (struct ixgbe_hw*,int*,int) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct TYPE_6__ {int type; } ;
struct ixgbe_hw {int api_version; TYPE_2__ mbx; TYPE_3__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int*,int) ;
 int FUNC_2 (struct ixgbe_hw*,int*,int) ;

int FUNC_3(struct ixgbe_hw *VAR_10, u8 *VAR_11)
{
 int VAR_12;
 u32 VAR_13[VAR_4];







 switch (VAR_10->api_version) {
 case 128:
 case 129:
 case 130:
  if (VAR_10->mac.type < VAR_9)
   break;

 default:
  return -VAR_0;
 }

 VAR_13[0] = VAR_5;
 VAR_12 = VAR_10->mbx.ops.write_posted(VAR_10, VAR_13, 1);

 if (VAR_12)
  return VAR_12;

 VAR_12 = VAR_10->mbx.ops.read_posted(VAR_10, VAR_13, 11);

 if (VAR_12)
  return VAR_12;

 VAR_13[0] &= ~VAR_7;


 if (VAR_13[0] == (VAR_5 | VAR_8))
  return -VAR_1;





 if (VAR_13[0] != (VAR_5 | VAR_6))
  return VAR_3;

 FUNC_0(VAR_11, VAR_13 + 1, VAR_2);

 return 0;
}
