
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct libipw_device {scalar_t__ wpa_ie_len; int * wpa_ie; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {struct libipw_device* ieee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ipw_priv*,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,scalar_t__,int ) ;
 struct ipw_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
       struct iw_request_info *VAR_5,
       union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw_priv *VAR_8 = FUNC_3(VAR_4);
 struct libipw_device *VAR_9 = VAR_8->ieee;
 u8 *VAR_10;
 int VAR_11 = 0;

 if (VAR_6->data.length > VAR_3 ||
     (VAR_6->data.length && VAR_7 == ((void*)0)))
  return -VAR_0;

 if (VAR_6->data.length) {
  VAR_10 = FUNC_2(VAR_7, VAR_6->data.length, VAR_2);
  if (VAR_10 == ((void*)0)) {
   VAR_11 = -VAR_1;
   goto out;
  }

  FUNC_1(VAR_9->wpa_ie);
  VAR_9->wpa_ie = VAR_10;
  VAR_9->wpa_ie_len = VAR_6->data.length;
 } else {
  FUNC_1(VAR_9->wpa_ie);
  VAR_9->wpa_ie = ((void*)0);
  VAR_9->wpa_ie_len = 0;
 }

 FUNC_0(VAR_8, VAR_9->wpa_ie, VAR_9->wpa_ie_len);
      out:
 return VAR_11;
}
