
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rapl_package {int dummy; } ;
struct rapl_domain {int state; TYPE_1__* rpl; int name; struct rapl_package* rp; } ;
struct powercap_zone {int dev; } ;
struct TYPE_2__ {int prim_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rapl_domain*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct rapl_package*) ;
 struct rapl_domain* FUNC_4 (struct powercap_zone*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct rapl_domain*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct powercap_zone *VAR_5, int VAR_6,
      u64 VAR_7)
{
 struct rapl_domain *VAR_8;
 struct rapl_package *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 FUNC_2();
 VAR_8 = FUNC_4(VAR_5);
 VAR_11 = FUNC_0(VAR_8, VAR_6);
 if (VAR_11 < 0) {
  VAR_10 = VAR_11;
  goto set_exit;
 }

 VAR_9 = VAR_8->rp;

 if (VAR_8->state & VAR_0) {
  FUNC_1(&VAR_5->dev,
    "%s locked by BIOS, monitoring only\n", VAR_8->name);
  VAR_10 = -VAR_1;
  goto set_exit;
 }

 switch (VAR_8->rpl[VAR_11].prim_id) {
 case 129:
  FUNC_6(VAR_8, VAR_3, VAR_7);
  break;
 case 128:
  FUNC_6(VAR_8, VAR_4, VAR_7);
  break;
 default:
  VAR_10 = -VAR_2;
 }
 if (!VAR_10)
  FUNC_3(VAR_9);
set_exit:
 FUNC_5();
 return VAR_10;
}
