
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct controller {TYPE_1__ poll_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct controller *VAR_2, int VAR_3)
{

 if ((VAR_3 <= 0) || (VAR_3 > 60))
  VAR_3 = 2;

 VAR_2->poll_timer.expires = VAR_1 + VAR_3 * VAR_0;
 FUNC_0(&VAR_2->poll_timer);
}
