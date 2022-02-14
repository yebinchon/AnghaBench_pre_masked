
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {int u; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int islpci_private ;


 int VAR_0 ;



 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int *,union oid_res_t*) ;
 int * FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, struct iw_request_info *VAR_4,
   char *VAR_5, char *VAR_6)
{
 islpci_private *VAR_7 = FUNC_2(VAR_3);
 char *VAR_8;
 union oid_res_t VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_7) < VAR_2) {
  FUNC_3(VAR_5, "NOT READY!", VAR_0);
  return 0;
 }
 VAR_10 = FUNC_1(VAR_7, VAR_1, 0, ((void*)0), &VAR_9);

 switch (VAR_9.u) {
 case 129:
  VAR_8 = "IEEE 802.11a/b/g";
  break;
 case 128:
  VAR_8 = "IEEE 802.11b/g - FAA Support";
  break;
 case 130:
 default:
  VAR_8 = "IEEE 802.11b/g";
  break;
 }
 FUNC_3(VAR_5, VAR_8, VAR_0);
 return VAR_10;
}
