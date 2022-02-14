
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int port_id; int nqsets; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int open_device_map; int tdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct net_device*) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (int ,int*) ;
 int FUNC_12 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_3)
{
 struct port_info *VAR_4 = FUNC_4(VAR_3);
 struct adapter *VAR_5 = VAR_4->adapter;
 int VAR_6 = VAR_5->open_device_map & VAR_1;
 int VAR_7;

 if (!VAR_5->open_device_map && (VAR_7 = FUNC_1(VAR_5)) < 0)
  return VAR_7;

 FUNC_11(VAR_4->port_id, &VAR_5->open_device_map);
 if (FUNC_2(VAR_5) && !VAR_2) {
  VAR_7 = FUNC_8(VAR_3);
  if (VAR_7)
   FUNC_9("Could not initialize offload capabilities\n");
 }

 FUNC_6(VAR_3, VAR_4->nqsets);
 VAR_7 = FUNC_5(VAR_3, VAR_4->nqsets);
 if (VAR_7)
  return VAR_7;
 FUNC_3(VAR_3);
 FUNC_12(VAR_5, VAR_4->port_id);
 FUNC_7(VAR_3);
 if (!VAR_6)
  FUNC_10(VAR_5);

 FUNC_0(&VAR_5->tdev, VAR_0, VAR_4->port_id);
 return 0;
}
