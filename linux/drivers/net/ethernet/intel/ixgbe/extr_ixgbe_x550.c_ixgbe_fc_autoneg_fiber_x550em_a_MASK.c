
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fc_was_autonegged; int requested_mode; int current_mode; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;



__attribute__((used)) static void FUNC_0(struct ixgbe_hw *VAR_0)
{
 VAR_0->fc.fc_was_autonegged = 0;
 VAR_0->fc.current_mode = VAR_0->fc.requested_mode;
}
