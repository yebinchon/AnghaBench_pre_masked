
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct orinoco_private {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {int sa_data; } ;
struct iw_mlme {int cmd; int reason_code; TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct orinoco_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct orinoco_private*,int ,int ) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
      struct iw_request_info *VAR_3,
      union iwreq_data *VAR_4, char *VAR_5)
{
 struct orinoco_private *VAR_6 = FUNC_0(VAR_2);
 struct iw_mlme *VAR_7 = (struct iw_mlme *)VAR_5;
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (FUNC_2(VAR_6, &VAR_8) != 0)
  return -VAR_0;

 switch (VAR_7->cmd) {
 case 129:

  break;

 case 128:

  VAR_9 = FUNC_1(VAR_6, VAR_7->addr.sa_data,
           VAR_7->reason_code);
  break;

 default:
  VAR_9 = -VAR_1;
 }

 FUNC_3(VAR_6, &VAR_8);
 return VAR_9;
}
