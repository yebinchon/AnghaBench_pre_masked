
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {struct musb* private; } ;
struct musb {int controller; int mregs; TYPE_2__* xceiv; } ;
struct TYPE_4__ {TYPE_1__* otg; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_2, void *VAR_3)
{
 struct musb *VAR_4 = VAR_2->private;
 u8 VAR_5;
 int VAR_6;

 switch (VAR_4->xceiv->otg->state) {
 case 129:
 case 128:
  FUNC_1(VAR_4->controller);

  VAR_5 = FUNC_0(VAR_4->mregs, VAR_0);
  VAR_6 = VAR_5 & VAR_1 ? 1 : 0;

  FUNC_2(VAR_4->controller);
  FUNC_3(VAR_4->controller);
  break;
 default:
  VAR_6 = -1;
 }

 FUNC_4(VAR_2, "%d\n", VAR_6);

 return 0;
}
