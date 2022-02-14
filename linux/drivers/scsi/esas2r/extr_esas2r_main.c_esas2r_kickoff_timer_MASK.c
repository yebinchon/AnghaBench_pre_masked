
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct esas2r_adapter {TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

void FUNC_3(struct esas2r_adapter *VAR_2)
{
 FUNC_2(&VAR_2->timer, VAR_0, 0);

 VAR_2->timer.expires = VAR_1 +
      FUNC_1(100);

 FUNC_0(&VAR_2->timer);
}
