
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct axs10x_rst {int lock; int regs_rst; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct axs10x_rst* FUNC_3 (struct reset_controller_dev*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_0,
         unsigned long VAR_1)
{
 struct axs10x_rst *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_4(FUNC_0(VAR_1), VAR_2->regs_rst);
 FUNC_2(&VAR_2->lock, VAR_3);

 return 0;
}
