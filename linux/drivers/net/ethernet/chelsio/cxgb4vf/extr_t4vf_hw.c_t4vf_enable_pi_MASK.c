
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_ok; } ;
struct port_info {TYPE_1__ link_cfg; int pidx; int viid; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int ,int,int) ;
 int FUNC_1 (struct adapter*,int ,int) ;

int FUNC_2(struct adapter *VAR_0, struct port_info *VAR_1,
     bool VAR_2, bool VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1->viid, VAR_2, VAR_3);

 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_0, VAR_1->pidx,
        VAR_2 && VAR_3 && VAR_1->link_cfg.link_ok);
 return 0;
}
