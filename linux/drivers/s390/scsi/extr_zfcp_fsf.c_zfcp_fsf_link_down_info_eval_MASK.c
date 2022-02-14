
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {TYPE_1__* ccw_device; int status; } ;
struct fsf_link_down_info {int error_code; } ;
struct TYPE_2__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct zfcp_adapter*,int ) ;
 int FUNC_4 (struct zfcp_adapter*) ;

__attribute__((used)) static void FUNC_5(struct zfcp_fsf_req *VAR_2,
      struct fsf_link_down_info *VAR_3)
{
 struct zfcp_adapter *VAR_4 = VAR_2->adapter;

 if (FUNC_1(&VAR_4->status) & VAR_0)
  return;

 FUNC_0(VAR_0, &VAR_4->status);

 FUNC_4(VAR_4);

 if (!VAR_3)
  goto out;

 switch (VAR_3->error_code) {
 case 132:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "There is no light signal from the local "
    "fibre channel cable\n");
  break;
 case 129:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "There is a wrap plug instead of a fibre "
    "channel cable\n");
  break;
 case 134:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The adjacent fibre channel node does not "
    "support FCP\n");
  break;
 case 138:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The FCP device is suspended because of a "
    "firmware update\n");
  break;
 case 137:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The FCP device detected a WWPN that is "
    "duplicate or not valid\n");
  break;
 case 131:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The fibre channel fabric does not support NPIV\n");
  break;
 case 133:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The FCP adapter cannot support more NPIV ports\n");
  break;
 case 135:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The adjacent switch cannot support "
    "more NPIV ports\n");
  break;
 case 139:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The FCP adapter could not log in to the "
    "fibre channel fabric\n");
  break;
 case 128:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The WWPN assignment file on the FCP adapter "
    "has been damaged\n");
  break;
 case 136:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The mode table on the FCP adapter "
    "has been damaged\n");
  break;
 case 130:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "All NPIV ports on the FCP adapter have "
    "been assigned\n");
  break;
 default:
  FUNC_2(&VAR_2->adapter->ccw_device->dev,
    "The link between the FCP adapter and "
    "the FC fabric is down\n");
 }
out:
 FUNC_3(VAR_4, VAR_1);
}
