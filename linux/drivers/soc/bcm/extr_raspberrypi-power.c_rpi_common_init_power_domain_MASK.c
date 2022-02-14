
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__** domains; } ;
struct rpi_power_domains {TYPE_1__ xlate; int fw; struct rpi_power_domain* domains; } ;
struct TYPE_4__ {char const* name; int power_off; int power_on; } ;
struct rpi_power_domain {TYPE_2__ base; int fw; } ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct rpi_power_domains *VAR_2,
      int VAR_3, const char *VAR_4)
{
 struct rpi_power_domain *VAR_5 = &VAR_2->domains[VAR_3];

 VAR_5->fw = VAR_2->fw;

 VAR_5->base.name = VAR_4;
 VAR_5->base.power_on = VAR_1;
 VAR_5->base.power_off = VAR_0;
 FUNC_0(&VAR_5->base, ((void*)0), 1);

 VAR_2->xlate.domains[VAR_3] = &VAR_5->base;
}
