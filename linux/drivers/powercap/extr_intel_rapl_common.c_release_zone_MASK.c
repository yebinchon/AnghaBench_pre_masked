
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rapl_package {int * domains; } ;
struct rapl_domain {scalar_t__ id; struct rapl_package* rp; } ;
struct powercap_zone {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rapl_domain*) ;
 struct rapl_domain* FUNC_1 (struct powercap_zone*) ;

__attribute__((used)) static int FUNC_2(struct powercap_zone *VAR_1)
{
 struct rapl_domain *VAR_2 = FUNC_1(VAR_1);
 struct rapl_package *VAR_3 = VAR_2->rp;




 if (VAR_2->id == VAR_0) {
  FUNC_0(VAR_2);
  VAR_3->domains = ((void*)0);
 }

 return 0;

}
