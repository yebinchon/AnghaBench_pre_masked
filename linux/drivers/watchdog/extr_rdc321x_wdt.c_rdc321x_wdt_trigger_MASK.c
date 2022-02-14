
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int stop; int timer; scalar_t__ queue; int lock; int base_reg; int sb_pdev; scalar_t__ running; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;

 if (VAR_3.running)
  VAR_4--;


 FUNC_4(&VAR_3.lock, VAR_6);
 FUNC_2(VAR_3.sb_pdev,
     VAR_3.base_reg, &VAR_7);
 VAR_7 |= VAR_0;
 FUNC_3(VAR_3.sb_pdev,
     VAR_3.base_reg, VAR_7);
 FUNC_5(&VAR_3.lock, VAR_6);


 if (VAR_3.queue && VAR_4)
  FUNC_1(&VAR_3.timer,
    VAR_2 + VAR_1);
 else {

  FUNC_0(&VAR_3.stop);
 }

}
