
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int qdio; int gs; int ns_up_work; int stat_work; int scan_work; struct ccw_device* ccw_device; } ;
struct TYPE_2__ {int kobj; } ;
struct ccw_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct zfcp_adapter*) ;
 int FUNC_4 (struct zfcp_adapter*) ;
 int FUNC_5 (struct zfcp_adapter*) ;
 int FUNC_6 (struct zfcp_adapter*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct zfcp_adapter*) ;
 int VAR_0 ;

void FUNC_10(struct zfcp_adapter *VAR_1)
{
 struct ccw_device *VAR_2 = VAR_1->ccw_device;

 FUNC_0(&VAR_1->scan_work);
 FUNC_1(&VAR_1->stat_work);
 FUNC_1(&VAR_1->ns_up_work);
 FUNC_5(VAR_1);

 FUNC_7(VAR_1->gs);
 FUNC_9(VAR_1);
 FUNC_2(&VAR_2->dev.kobj, &VAR_0);

 FUNC_6(VAR_1);
 FUNC_4(VAR_1);
 FUNC_8(VAR_1->qdio);

 FUNC_3(VAR_1);
}
