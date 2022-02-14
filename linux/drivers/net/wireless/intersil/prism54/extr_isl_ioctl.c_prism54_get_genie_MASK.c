
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct TYPE_3__ {int wpa_ie_len; int wpa_ie; } ;
typedef TYPE_1__ islpci_private ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
        struct iw_request_info *VAR_2,
        struct iw_point *VAR_3, char *VAR_4)
{
 islpci_private *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = VAR_5->wpa_ie_len;

 if (VAR_6 <= 0) {
  VAR_3->length = 0;
  return 0;
 }

 if (VAR_3->length < VAR_6)
  return -VAR_0;

 VAR_3->length = VAR_6;
 FUNC_0(VAR_4, VAR_5->wpa_ie, VAR_6);

 return 0;
}
