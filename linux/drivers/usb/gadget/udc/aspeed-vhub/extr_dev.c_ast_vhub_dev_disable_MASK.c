
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int speed; } ;
struct ast_vhub_dev {int enabled; int index; TYPE_1__ gadget; scalar_t__ regs; TYPE_2__* vhub; } ;
struct TYPE_4__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ast_vhub_dev *VAR_4)
{
 u32 VAR_5, VAR_6;

 if (!VAR_4->enabled)
  return;


 VAR_6 = VAR_3 << VAR_4->index;
 VAR_5 = FUNC_0(VAR_4->vhub->regs + VAR_1);
 VAR_5 &= ~VAR_6;
 FUNC_1(VAR_5, VAR_4->vhub->regs + VAR_1);


 FUNC_1(0, VAR_4->regs + VAR_0);
 VAR_4->gadget.speed = VAR_2;
 VAR_4->enabled = 0;
}
