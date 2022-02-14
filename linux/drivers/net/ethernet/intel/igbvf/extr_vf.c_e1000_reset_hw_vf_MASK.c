
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int (* read_posted ) (struct e1000_hw*,int*,int) ;int (* write_posted ) (struct e1000_hw*,int*,int) ;int (* check_for_rst ) (struct e1000_hw*) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; int timeout; } ;
struct TYPE_4__ {int perm_addr; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int*,int) ;
 int FUNC_6 (struct e1000_hw*,int*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_8)
{
 struct e1000_mbx_info *VAR_9 = &VAR_8->mbx;
 u32 VAR_10 = VAR_3;
 u32 VAR_11 = -VAR_2;
 u32 VAR_12[3];
 u8 *VAR_13 = (u8 *)(&VAR_12[1]);
 u32 VAR_14;


 VAR_14 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_14 | VAR_1);


 while (!VAR_9->ops.check_for_rst(VAR_8) && VAR_10) {
  VAR_10--;
  FUNC_7(5);
 }

 if (VAR_10) {

  VAR_9->timeout = VAR_4;


  VAR_12[0] = VAR_5;
  VAR_9->ops.write_posted(VAR_8, VAR_12, 1);

  FUNC_2(10);


  VAR_11 = VAR_9->ops.read_posted(VAR_8, VAR_12, 3);
  if (!VAR_11) {
   if (VAR_12[0] == (VAR_5 |
       VAR_6))
    FUNC_3(VAR_8->mac.perm_addr, VAR_13, VAR_7);
   else
    VAR_11 = -VAR_2;
  }
 }

 return VAR_11;
}
