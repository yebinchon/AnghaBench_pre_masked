
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
 int FUNC_0 (struct rapl_domain*,int) ;
 int FUNC_1 () ;
 struct rapl_domain* FUNC_2 (struct powercap_zone*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct rapl_domain*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct powercap_zone *VAR_3, int VAR_4,
      u64 VAR_5)
{
 struct rapl_domain *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_1();
 VAR_6 = FUNC_2(VAR_3);
 VAR_8 = FUNC_0(VAR_6, VAR_4);
 if (VAR_8 < 0) {
  VAR_7 = VAR_8;
  goto set_time_exit;
 }

 switch (VAR_6->rpl[VAR_8].prim_id) {
 case 129:
  FUNC_4(VAR_6, VAR_1, VAR_5);
  break;
 case 128:
  FUNC_4(VAR_6, VAR_2, VAR_5);
  break;
 default:
  VAR_7 = -VAR_0;
 }

set_time_exit:
 FUNC_3();
 return VAR_7;
}
