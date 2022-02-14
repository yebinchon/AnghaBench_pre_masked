
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct mv_u3d {TYPE_1__* op_regs; } ;
struct TYPE_2__ {int usbcmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct mv_u3d* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_1)
{
 struct mv_u3d *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_0(&VAR_2->op_regs->usbcmd);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, &VAR_2->op_regs->usbcmd);
}
