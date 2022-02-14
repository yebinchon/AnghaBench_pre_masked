
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ionic_dev {TYPE_3__* dev_cmd_regs; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ comp; } ;
struct TYPE_6__ {TYPE_2__ comp; } ;


 int FUNC_0 (int *) ;

u8 FUNC_1(struct ionic_dev *VAR_0)
{
 return FUNC_0(&VAR_0->dev_cmd_regs->comp.comp.status);
}
