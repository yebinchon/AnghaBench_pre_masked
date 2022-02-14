
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ expires; } ;
struct TYPE_5__ {int config2; } ;
struct TYPE_6__ {TYPE_1__ regs; TYPE_3__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_3 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_4)
{
 FUNC_1(&FUNC_3(VAR_4)->timer);
 FUNC_3(VAR_4)->timer.expires = VAR_3 + VAR_1 / 50;
 FUNC_0(&FUNC_3(VAR_4)->timer);
 if (FUNC_3(VAR_4)->regs.config2 & VAR_0)
  FUNC_2(FUNC_3(VAR_4)->regs.config2 &= ~VAR_0, VAR_2);
}
