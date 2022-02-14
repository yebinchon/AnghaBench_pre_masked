
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef int u8 ;
struct orinoco_private {scalar_t__ wpa_ie_len; int * wpa_ie; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,scalar_t__,int ) ;
 struct orinoco_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct orinoco_private*,unsigned long*) ;
 int FUNC_4 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 struct orinoco_private *VAR_9 = FUNC_2(VAR_5);
 u8 *VAR_10;
 unsigned long VAR_11;


 if ((VAR_7->data.length > VAR_4) ||
     (VAR_7->data.length && (VAR_8 == ((void*)0))))
  return -VAR_1;

 if (VAR_7->data.length) {
  VAR_10 = FUNC_1(VAR_8, VAR_7->data.length, VAR_3);
  if (VAR_10 == ((void*)0))
   return -VAR_2;
 } else
  VAR_10 = ((void*)0);

 if (FUNC_3(VAR_9, &VAR_11) != 0) {
  FUNC_0(VAR_10);
  return -VAR_0;
 }

 FUNC_0(VAR_9->wpa_ie);
 VAR_9->wpa_ie = VAR_10;
 VAR_9->wpa_ie_len = VAR_7->data.length;

 if (VAR_9->wpa_ie) {





 }

 FUNC_4(VAR_9, &VAR_11);
 return 0;
}
