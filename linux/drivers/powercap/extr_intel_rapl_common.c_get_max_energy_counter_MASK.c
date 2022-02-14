
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rapl_domain {int dummy; } ;
struct powercap_zone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rapl_domain* FUNC_0 (struct powercap_zone*) ;
 int FUNC_1 (struct rapl_domain*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct powercap_zone *VAR_2, u64 *VAR_3)
{
 struct rapl_domain *VAR_4 = FUNC_0(VAR_2);

 *VAR_3 = FUNC_1(VAR_4, VAR_1, VAR_0, 0);
 return 0;
}
