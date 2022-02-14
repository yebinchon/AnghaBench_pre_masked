
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct rtllib_device {scalar_t__ wpa_ie_len; int * wpa_ie; } ;
struct r8192_priv {struct rtllib_device* rtllib; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,scalar_t__) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
     struct iw_request_info *VAR_2,
     union iwreq_data *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;
 struct r8192_priv *VAR_6 = FUNC_1(VAR_1);
 struct rtllib_device *VAR_7 = VAR_6->rtllib;

 if (VAR_7->wpa_ie_len == 0 || VAR_7->wpa_ie == ((void*)0)) {
  VAR_3->data.length = 0;
  return 0;
 }

 if (VAR_3->data.length < VAR_7->wpa_ie_len)
  return -VAR_0;

 VAR_3->data.length = VAR_7->wpa_ie_len;
 FUNC_0(VAR_4, VAR_7->wpa_ie, VAR_7->wpa_ie_len);
 return VAR_5;
}
