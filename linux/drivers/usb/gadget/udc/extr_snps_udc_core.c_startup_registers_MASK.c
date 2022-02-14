
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct udc {TYPE_1__* regs; } ;
struct TYPE_2__ {int cfg; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct udc*) ;
 int FUNC_3 (struct udc*) ;
 int FUNC_4 (struct udc*) ;
 int FUNC_5 (struct udc*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct udc *VAR_4)
{
 u32 VAR_5;


 FUNC_5(VAR_4);


 FUNC_3(VAR_4);


 FUNC_2(VAR_4);

 FUNC_4(VAR_4);


 VAR_5 = FUNC_1(&VAR_4->regs->cfg);
 if (VAR_3)
  VAR_5 = FUNC_0(VAR_5, VAR_1, VAR_0);
 else
  VAR_5 = FUNC_0(VAR_5, VAR_2, VAR_0);
 FUNC_6(VAR_5, &VAR_4->regs->cfg);

 return 0;
}
