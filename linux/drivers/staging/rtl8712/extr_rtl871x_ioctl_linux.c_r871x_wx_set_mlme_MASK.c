
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_mlme {int cmd; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;


 struct _adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct _adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
        struct iw_request_info *VAR_2,
        union iwreq_data *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;
 struct _adapter *VAR_6 = FUNC_0(VAR_1);
 struct iw_mlme *VAR_7 = (struct iw_mlme *) VAR_4;

 if (VAR_7 == ((void*)0))
  return -1;
 switch (VAR_7->cmd) {
 case 129:
  if (!FUNC_1(VAR_6))
   VAR_5 = -1;
  break;
 case 128:
  if (!FUNC_1(VAR_6))
   VAR_5 = -1;
  break;
 default:
  return -VAR_0;
 }
 return VAR_5;
}
