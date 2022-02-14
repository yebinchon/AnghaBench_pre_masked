
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtu3 {int delayed_status; int test_mode; scalar_t__ u2_enable; scalar_t__ u1_enable; scalar_t__ may_wakeup; int ep0_state; scalar_t__ address; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mtu3 *VAR_1)
{
 VAR_1->address = 0;
 VAR_1->ep0_state = VAR_0;
 VAR_1->may_wakeup = 0;
 VAR_1->u1_enable = 0;
 VAR_1->u2_enable = 0;
 VAR_1->delayed_status = 0;
 VAR_1->test_mode = 0;
}
