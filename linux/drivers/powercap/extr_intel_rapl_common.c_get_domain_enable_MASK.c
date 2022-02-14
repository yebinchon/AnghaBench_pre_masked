
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rapl_domain {int state; } ;
struct powercap_zone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct rapl_domain* FUNC_1 (struct powercap_zone*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct rapl_domain*,int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct powercap_zone *VAR_3, bool *VAR_4)
{
 struct rapl_domain *VAR_5 = FUNC_1(VAR_3);
 u64 VAR_6;

 if (VAR_5->state & VAR_0) {
  *VAR_4 = 0;
  return 0;
 }
 FUNC_0();
 if (FUNC_3(VAR_5, VAR_2, 1, &VAR_6)) {
  FUNC_2();
  return -VAR_1;
 }
 *VAR_4 = VAR_6;
 FUNC_2();

 return 0;
}
