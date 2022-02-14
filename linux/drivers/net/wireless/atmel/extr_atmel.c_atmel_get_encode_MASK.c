
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct atmel_private {int default_key; int* wep_key_len; int * wep_keys; scalar_t__ exclude_unencrypted; int wep_is_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,int) ;
 struct atmel_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
       struct iw_request_info *VAR_5,
       struct iw_point *VAR_6,
       char *VAR_7)
{
 struct atmel_private *VAR_8 = FUNC_2(VAR_4);
 int VAR_9 = (VAR_6->flags & VAR_1) - 1;

 if (!VAR_8->wep_is_on)
  VAR_6->flags = VAR_0;
 else {
  if (VAR_8->exclude_unencrypted)
   VAR_6->flags = VAR_3;
  else
   VAR_6->flags = VAR_2;
 }

 if (VAR_9 < 0 || VAR_9 >= 4)
  VAR_9 = VAR_8->default_key;
 VAR_6->flags |= VAR_9 + 1;

 VAR_6->length = VAR_8->wep_key_len[VAR_9];
 if (VAR_6->length > 16) {
  VAR_6->length = 0;
 } else {
  FUNC_1(VAR_7, 0, 16);
  FUNC_0(VAR_7, VAR_8->wep_keys[VAR_9], VAR_6->length);
 }

 return 0;
}
