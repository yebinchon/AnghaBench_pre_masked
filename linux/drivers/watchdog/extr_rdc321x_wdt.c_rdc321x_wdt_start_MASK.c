
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; int running; int timer; int lock; int base_reg; int sb_pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_6;

 if (!VAR_5.queue) {
  VAR_5.queue = 1;


  FUNC_2(&VAR_5.lock, VAR_6);
  FUNC_1(VAR_5.sb_pdev,
    VAR_5.base_reg, VAR_0);


  FUNC_1(VAR_5.sb_pdev,
     VAR_5.base_reg,
     VAR_2 | VAR_1);
  FUNC_3(&VAR_5.lock, VAR_6);

  FUNC_0(&VAR_5.timer,
    VAR_4 + VAR_3);
 }


 VAR_5.running++;
}
