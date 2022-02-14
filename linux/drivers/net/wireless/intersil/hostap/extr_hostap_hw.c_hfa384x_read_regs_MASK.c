
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hfa384x_regs {void* swsupport0; void* offset1; void* offset0; void* evstat; void* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5,
         struct hfa384x_regs *VAR_6)
{
 VAR_6->cmd = FUNC_0(VAR_0);
 VAR_6->evstat = FUNC_0(VAR_1);
 VAR_6->offset0 = FUNC_0(VAR_2);
 VAR_6->offset1 = FUNC_0(VAR_3);
 VAR_6->swsupport0 = FUNC_0(VAR_4);
}
