
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_smc {int dummy; } ;
struct TYPE_2__ {scalar_t__ tm_active; } ;
struct s_phy {TYPE_1__ pcm_timer0; } ;


 int FUNC_0 (struct s_smc*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_0, struct s_phy *VAR_1)
{
 if (VAR_1->pcm_timer0.tm_active)
  FUNC_0(VAR_0,&VAR_1->pcm_timer0) ;
}
