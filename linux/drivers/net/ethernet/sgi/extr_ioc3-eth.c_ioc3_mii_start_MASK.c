
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct ioc3_private {TYPE_1__ ioc3_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ioc3_private *VAR_2)
{
 VAR_2->ioc3_timer.expires = VAR_1 + (12 * VAR_0) / 10;
 FUNC_0(&VAR_2->ioc3_timer);
}
