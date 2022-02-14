
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_domain {int state; } ;
struct powercap_zone {int dummy; } ;
struct TYPE_2__ {int (* set_floor_freq ) (struct rapl_domain*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct rapl_domain* FUNC_1 (struct powercap_zone*) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct rapl_domain*,int ,int) ;
 int FUNC_4 (struct rapl_domain*,int) ;

__attribute__((used)) static int FUNC_5(struct powercap_zone *VAR_4, bool VAR_5)
{
 struct rapl_domain *VAR_6 = FUNC_1(VAR_4);

 if (VAR_6->state & VAR_0)
  return -VAR_1;

 FUNC_0();
 FUNC_3(VAR_6, VAR_2, VAR_5);
 if (VAR_3->set_floor_freq)
  VAR_3->set_floor_freq(VAR_6, VAR_5);
 FUNC_2();

 return 0;
}
