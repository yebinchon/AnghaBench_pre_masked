
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int sioaddr; int timer_val; scalar_t__ minutes_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_5 = 0;

 FUNC_0(&VAR_4.lock);
 VAR_5 = FUNC_3(VAR_4.sioaddr);
 if (VAR_5)
  goto exit_unlock;
 FUNC_6(VAR_4.sioaddr, VAR_3);

 if (VAR_4.minutes_mode)

  FUNC_7(VAR_4.sioaddr, VAR_1,
    VAR_0);
 else

  FUNC_2(VAR_4.sioaddr, VAR_1,
    VAR_0);


 FUNC_5(VAR_4.sioaddr, VAR_2,
      VAR_4.timer_val);

 FUNC_4(VAR_4.sioaddr);

exit_unlock:
 FUNC_1(&VAR_4.lock);
 return VAR_5;
}
