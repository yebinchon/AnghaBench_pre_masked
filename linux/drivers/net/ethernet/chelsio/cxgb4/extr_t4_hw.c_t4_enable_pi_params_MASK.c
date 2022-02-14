
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_ok; } ;
struct port_info {TYPE_1__ link_cfg; int port_id; int viid; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,unsigned int,int ,int,int,int) ;
 int FUNC_1 (struct adapter*,int ,int) ;

int FUNC_2(struct adapter *VAR_0, unsigned int VAR_1,
   struct port_info *VAR_2,
   bool VAR_3, bool VAR_4, bool VAR_5)
{
 int VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2->viid,
          VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;
 FUNC_1(VAR_0, VAR_2->port_id,
      VAR_3 && VAR_4 && VAR_2->link_cfg.link_ok);
 return 0;
}
