
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_power_domains {int has_new_interface; struct rpi_power_domain* domains; } ;
struct rpi_power_domain {int domain; } ;


 int FUNC_0 (struct rpi_power_domains*,int,char const*) ;

__attribute__((used)) static void FUNC_1(struct rpi_power_domains *VAR_0,
      int VAR_1, const char *VAR_2)
{
 struct rpi_power_domain *VAR_3 = &VAR_0->domains[VAR_1];

 if (!VAR_0->has_new_interface)
  return;


 VAR_3->domain = VAR_1 + 1;

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
