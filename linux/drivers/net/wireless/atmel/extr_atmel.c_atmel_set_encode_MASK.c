
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int flags; } ;
struct atmel_private {int default_key; int* wep_key_len; int wep_is_on; int exclude_unencrypted; int encryption_level; void* pairwise_cipher_suite; int * wep_keys; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct atmel_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_11,
       struct iw_request_info *VAR_12,
       struct iw_point *VAR_13,
       char *VAR_14)
{
 struct atmel_private *VAR_15 = FUNC_2(VAR_11);







 if (VAR_13->length > 0) {
  int VAR_16 = (VAR_13->flags & VAR_6) - 1;
  int VAR_17 = VAR_15->default_key;

  if (VAR_13->length > 13) {
   return -VAR_4;
  }

  if (VAR_16 < 0 || VAR_16 >= 4)
   VAR_16 = VAR_17;
  else
   VAR_15->default_key = VAR_16;

  if (VAR_13->length > 5)
   VAR_15->wep_key_len[VAR_16] = 13;
  else
   if (VAR_13->length > 0)
    VAR_15->wep_key_len[VAR_16] = 5;
   else

    VAR_15->wep_key_len[VAR_16] = 0;

  if (!(VAR_13->flags & VAR_8)) {

   FUNC_1(VAR_15->wep_keys[VAR_16], 0, 13);

   FUNC_0(VAR_15->wep_keys[VAR_16], VAR_14, VAR_13->length);
  }



  if (VAR_16 == VAR_17 &&
      VAR_15->wep_key_len[VAR_16] > 0) {
   VAR_15->wep_is_on = 1;
   VAR_15->exclude_unencrypted = 1;
   if (VAR_15->wep_key_len[VAR_16] > 5) {
    VAR_15->pairwise_cipher_suite = VAR_1;
    VAR_15->encryption_level = 2;
   } else {
    VAR_15->pairwise_cipher_suite = VAR_2;
    VAR_15->encryption_level = 1;
   }
  }
 } else {

  int VAR_18 = (VAR_13->flags & VAR_6) - 1;
  if (VAR_18 >= 0 && VAR_18 < 4) {
   VAR_15->default_key = VAR_18;
  } else

   if (!(VAR_13->flags & VAR_7))
    return -VAR_4;
 }

 if (VAR_13->flags & VAR_5) {
  VAR_15->wep_is_on = 0;
  VAR_15->encryption_level = 0;
  VAR_15->pairwise_cipher_suite = VAR_0;
 } else {
  VAR_15->wep_is_on = 1;
  if (VAR_15->wep_key_len[VAR_15->default_key] > 5) {
   VAR_15->pairwise_cipher_suite = VAR_1;
   VAR_15->encryption_level = 2;
  } else {
   VAR_15->pairwise_cipher_suite = VAR_2;
   VAR_15->encryption_level = 1;
  }
 }
 if (VAR_13->flags & VAR_10)
  VAR_15->exclude_unencrypted = 1;
 if (VAR_13->flags & VAR_9)
  VAR_15->exclude_unencrypted = 0;

 return -VAR_3;
}
