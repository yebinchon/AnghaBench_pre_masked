
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct libipw_device {scalar_t__ wpa_ie_len; int * wpa_ie; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {struct libipw_device* ieee; } ;


 int VAR_0 ;
 struct ipw2100_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct iw_request_info *VAR_2,
    union iwreq_data *VAR_3, char *VAR_4)
{
 struct ipw2100_priv *VAR_5 = FUNC_0(VAR_1);
 struct libipw_device *VAR_6 = VAR_5->ieee;

 if (VAR_6->wpa_ie_len == 0 || VAR_6->wpa_ie == ((void*)0)) {
  VAR_3->data.length = 0;
  return 0;
 }

 if (VAR_3->data.length < VAR_6->wpa_ie_len)
  return -VAR_0;

 VAR_3->data.length = VAR_6->wpa_ie_len;
 FUNC_1(VAR_4, VAR_6->wpa_ie, VAR_6->wpa_ie_len);

 return 0;
}
