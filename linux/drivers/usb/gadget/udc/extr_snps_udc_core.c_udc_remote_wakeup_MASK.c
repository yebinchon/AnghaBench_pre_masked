
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct udc {int lock; TYPE_1__* regs; } ;
struct TYPE_2__ {int ctl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct udc*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct udc *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_2(VAR_1, "UDC initiates remote wakeup\n");

 FUNC_4(&VAR_1->lock, VAR_2);

 VAR_3 = FUNC_3(&VAR_1->regs->ctl);
 VAR_3 |= FUNC_0(VAR_0);
 FUNC_6(VAR_3, &VAR_1->regs->ctl);
 VAR_3 &= FUNC_1(VAR_0);
 FUNC_6(VAR_3, &VAR_1->regs->ctl);

 FUNC_5(&VAR_1->lock, VAR_2);
 return 0;
}
