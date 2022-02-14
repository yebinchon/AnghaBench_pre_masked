
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sc16is7xx_one_config {int flags; int ier_clear; } ;
struct TYPE_3__ {int mctrl; int lock; } ;
struct sc16is7xx_one {TYPE_1__ port; struct sc16is7xx_one_config config; } ;
struct kthread_work {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sc16is7xx_one_config*,int ,int) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct sc16is7xx_one* FUNC_5 (struct kthread_work*,int ) ;

__attribute__((used)) static void FUNC_6(struct kthread_work *VAR_12)
{
 struct sc16is7xx_one *VAR_13 = FUNC_5(VAR_12, VAR_11);
 struct sc16is7xx_one_config VAR_14;
 unsigned long VAR_15;

 FUNC_3(&VAR_13->port.lock, VAR_15);
 VAR_14 = VAR_13->config;
 FUNC_0(&VAR_13->config, 0, sizeof(VAR_13->config));
 FUNC_4(&VAR_13->port.lock, VAR_15);

 if (VAR_14.flags & VAR_6) {
  FUNC_1(&VAR_13->port, VAR_3,
          VAR_2,
          (VAR_13->port.mctrl & VAR_9) ?
          VAR_2 : 0);
  FUNC_1(&VAR_13->port, VAR_3,
          VAR_4,
          (VAR_13->port.mctrl & VAR_10) ?
          VAR_4 : 0);
  FUNC_1(&VAR_13->port, VAR_3,
          VAR_1,
          (VAR_13->port.mctrl & VAR_8) ?
          VAR_1 : 0);
 }
 if (VAR_14.flags & VAR_5)
  FUNC_1(&VAR_13->port, VAR_0,
          VAR_14.ier_clear, 0);

 if (VAR_14.flags & VAR_7)
  FUNC_2(&VAR_13->port);
}
