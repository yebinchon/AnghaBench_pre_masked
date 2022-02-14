
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct atmel_private {int connect_to_any_BSS; int new_SSID_size; int new_SSID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 struct atmel_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
      struct iw_request_info *VAR_6,
      struct iw_point *VAR_7,
      char *VAR_8)
{
 struct atmel_private *VAR_9 = FUNC_1(VAR_5);


 if (VAR_7->flags == 0) {
  VAR_9->connect_to_any_BSS = 1;
 } else {
  int VAR_10 = (VAR_7->flags & VAR_3) - 1;

  VAR_9->connect_to_any_BSS = 0;


  if (VAR_7->length > VAR_4)
    return -VAR_0;
  if (VAR_10 != 0)
   return -VAR_2;

  FUNC_0(VAR_9->new_SSID, VAR_8, VAR_7->length);
  VAR_9->new_SSID_size = VAR_7->length;
 }

 return -VAR_1;
}
