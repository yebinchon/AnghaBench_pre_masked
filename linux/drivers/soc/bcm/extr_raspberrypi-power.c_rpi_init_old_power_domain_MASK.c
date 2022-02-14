
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_power_domains {struct rpi_power_domain* domains; } ;
struct rpi_power_domain {int old_interface; int domain; } ;


 int FUNC_0 (struct rpi_power_domains*,int,char const*) ;

__attribute__((used)) static void FUNC_1(struct rpi_power_domains *VAR_0,
          int VAR_1, int VAR_2,
          const char *VAR_3)
{
 struct rpi_power_domain *VAR_4 = &VAR_0->domains[VAR_1];

 VAR_4->old_interface = 1;
 VAR_4->domain = VAR_2;

 FUNC_0(VAR_0, VAR_1, VAR_3);
}
