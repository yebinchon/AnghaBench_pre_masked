
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_domain {TYPE_1__* rpl; } ;
struct powercap_zone {int dummy; } ;
struct TYPE_2__ {char const* name; } ;


 int FUNC_0 (struct rapl_domain*,int) ;
 struct rapl_domain* FUNC_1 (struct powercap_zone*) ;

__attribute__((used)) static const char *FUNC_2(struct powercap_zone *VAR_0,
           int VAR_1)
{
 struct rapl_domain *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 >= 0)
  return VAR_2->rpl[VAR_3].name;

 return ((void*)0);
}
