
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rapl_domain {TYPE_1__* rpl; } ;
struct powercap_zone {int dummy; } ;
struct TYPE_2__ {int prim_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 () ;
 struct rapl_domain* FUNC_1 (struct powercap_zone*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct rapl_domain*,int,int,int *) ;

__attribute__((used)) static int FUNC_4(struct powercap_zone *VAR_4, int VAR_5, u64 *VAR_6)
{
 struct rapl_domain *VAR_7;
 u64 VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 FUNC_0();
 VAR_7 = FUNC_1(VAR_4);
 switch (VAR_7->rpl[VAR_5].prim_id) {
 case 129:
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_9 = VAR_2;
  break;
 default:
  FUNC_2();
  return -VAR_0;
 }
 if (FUNC_3(VAR_7, VAR_9, 1, &VAR_8))
  VAR_10 = -VAR_1;
 else
  *VAR_6 = VAR_8;

 FUNC_2();

 return VAR_10;
}
