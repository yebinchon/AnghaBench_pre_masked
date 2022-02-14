
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct AdapterControlBlock {TYPE_1__ refresh_timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_2)
{
 FUNC_2(&VAR_2->refresh_timer, VAR_0, 0);
 VAR_2->refresh_timer.expires = VAR_1 + FUNC_1(60 * 1000);
 FUNC_0(&VAR_2->refresh_timer);
}
