
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* check_for_ack ) (struct e1000_hw*) ;} ;
struct e1000_mbx_info {int timeout; int usec_delay; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_2)
{
 struct e1000_mbx_info *VAR_3 = &VAR_2->mbx;
 int VAR_4 = VAR_3->timeout;

 if (!VAR_3->ops.check_for_ack)
  goto out;

 while (VAR_4 && VAR_3->ops.check_for_ack(VAR_2)) {
  VAR_4--;
  FUNC_1(VAR_3->usec_delay);
 }


 if (!VAR_4)
  VAR_3->timeout = 0;
out:
 return VAR_4 ? VAR_1 : -VAR_0;
}
