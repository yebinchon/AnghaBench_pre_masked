
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {size_t if_port; int features; struct adapter* ml_priv; } ;
struct TYPE_2__ {scalar_t__ stats_update_period; } ;
struct adapter {int open_device_map; TYPE_1__ params; int * port; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct adapter*,scalar_t__) ;
 int FUNC_7 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 int VAR_2;
 struct adapter *VAR_3 = VAR_1->ml_priv;
 int VAR_4 = VAR_3->open_device_map & VAR_0;

 FUNC_4(&VAR_3->napi);
 if (!VAR_3->open_device_map && (VAR_2 = FUNC_1(VAR_3)) < 0) {
  FUNC_3(&VAR_3->napi);
  return VAR_2;
 }

 FUNC_0(VAR_1->if_port, &VAR_3->open_device_map);
 FUNC_2(&VAR_3->port[VAR_1->if_port]);
 FUNC_5(VAR_1);
 if (!VAR_4 && VAR_3->params.stats_update_period)
  FUNC_6(VAR_3,
       VAR_3->params.stats_update_period);

 FUNC_7(VAR_3, VAR_1->features);
 return 0;
}
