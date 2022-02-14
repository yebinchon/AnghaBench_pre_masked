
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_point {int length; int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct libipw_security {scalar_t__* encode_alg; int * keys; scalar_t__* key_sizes; int enabled; } ;
struct TYPE_2__ {int tx_keyidx; } ;
struct libipw_device {scalar_t__ iw_mode; TYPE_1__ crypt_info; struct libipw_security sec; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int ext_flags; scalar_t__ alg; scalar_t__ key_len; int key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct iw_encode_ext*,int ,int) ;

int FUNC_2(struct libipw_device *VAR_15,
          struct iw_request_info *VAR_16,
          union iwreq_data *VAR_17, char *VAR_18)
{
 struct iw_point *VAR_19 = &VAR_17->encoding;
 struct iw_encode_ext *VAR_20 = (struct iw_encode_ext *)VAR_18;
 struct libipw_security *VAR_21 = &VAR_15->sec;
 int VAR_22, VAR_23;

 VAR_23 = VAR_19->length - sizeof(*VAR_20);
 if (VAR_23 < 0)
  return -VAR_0;

 VAR_22 = VAR_19->flags & VAR_9;
 if (VAR_22) {
  if (VAR_22 < 1 || VAR_22 > VAR_14)
   return -VAR_0;
  VAR_22--;
 } else
  VAR_22 = VAR_15->crypt_info.tx_keyidx;

 if (!(VAR_20->ext_flags & VAR_7) &&
     VAR_20->alg != VAR_4)
  if (VAR_22 != 0 || VAR_15->iw_mode != VAR_10)
   return -VAR_0;

 VAR_19->flags = VAR_22 + 1;
 FUNC_1(VAR_20, 0, sizeof(*VAR_20));

 if (!VAR_21->enabled) {
  VAR_20->alg = VAR_2;
  VAR_20->key_len = 0;
  VAR_19->flags |= VAR_5;
 } else {
  if (VAR_21->encode_alg[VAR_22] == VAR_13)
   VAR_20->alg = VAR_4;
  else if (VAR_21->encode_alg[VAR_22] == VAR_12)
   VAR_20->alg = VAR_3;
  else if (VAR_21->encode_alg[VAR_22] == VAR_11)
   VAR_20->alg = VAR_1;
  else
   return -VAR_0;

  VAR_20->key_len = VAR_21->key_sizes[VAR_22];
  FUNC_0(VAR_20->key, VAR_21->keys[VAR_22], VAR_20->key_len);
  VAR_19->flags |= VAR_6;
  if (VAR_20->key_len &&
      (VAR_20->alg == VAR_3 ||
       VAR_20->alg == VAR_1))
   VAR_20->ext_flags |= VAR_8;

 }

 return 0;
}
