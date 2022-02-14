
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; int flags; } ;
struct atmel_private {scalar_t__ new_SSID_size; scalar_t__ SSID_size; int connect_to_any_BSS; int SSID; int new_SSID; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 struct atmel_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
      struct iw_request_info *VAR_1,
      struct iw_point *VAR_2,
      char *VAR_3)
{
 struct atmel_private *VAR_4 = FUNC_1(VAR_0);


 if (VAR_4->new_SSID_size != 0) {
  FUNC_0(VAR_3, VAR_4->new_SSID, VAR_4->new_SSID_size);
  VAR_2->length = VAR_4->new_SSID_size;
 } else {
  FUNC_0(VAR_3, VAR_4->SSID, VAR_4->SSID_size);
  VAR_2->length = VAR_4->SSID_size;
 }

 VAR_2->flags = !VAR_4->connect_to_any_BSS;

 return 0;
}
