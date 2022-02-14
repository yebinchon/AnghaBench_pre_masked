
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int mode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct _adapter {int dummy; } ;
typedef enum NDIS_802_11_NETWORK_INFRASTRUCTURE { ____Placeholder_NDIS_802_11_NETWORK_INFRASTRUCTURE } NDIS_802_11_NETWORK_INFRASTRUCTURE ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct _adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct _adapter*,int) ;
 int FUNC_2 (struct _adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
        struct iw_request_info *VAR_6,
        union iwreq_data *VAR_7, char *VAR_8)
{
 struct _adapter *VAR_9 = FUNC_0(VAR_5);
 enum NDIS_802_11_NETWORK_INFRASTRUCTURE VAR_10;

 switch (VAR_7->mode) {
 case 130:
  VAR_10 = VAR_2;
  break;
 case 131:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_1;
  break;
 case 129:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_0;
 }
 if (VAR_1 == VAR_10)
  FUNC_2(VAR_9, VAR_10);
 else
  FUNC_2(VAR_9, VAR_2);

 FUNC_1(VAR_9, VAR_10);
 return 0;
}
