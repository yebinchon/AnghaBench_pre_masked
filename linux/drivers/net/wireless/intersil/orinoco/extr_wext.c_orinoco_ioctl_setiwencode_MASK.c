
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orinoco_private {int tx_key; int encode_alg; int wep_restrict; TYPE_1__* keys; scalar_t__ has_wpa; int has_big_wep; int has_wep; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; scalar_t__ length; scalar_t__ pointer; } ;
typedef enum orinoco_alg { ____Placeholder_orinoco_alg } orinoco_alg ;
struct TYPE_2__ {scalar_t__ key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct orinoco_private*) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct orinoco_private*,int) ;
 scalar_t__ FUNC_4 (struct orinoco_private*,unsigned long*) ;
 int FUNC_5 (struct orinoco_private*,int,int,char*,scalar_t__,int *,int ) ;
 int FUNC_6 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_15,
         struct iw_request_info *VAR_16,
         struct iw_point *VAR_17,
         char *VAR_18)
{
 struct orinoco_private *VAR_19 = FUNC_1(VAR_15);
 int VAR_20 = (VAR_17->flags & VAR_6) - 1;
 int VAR_21 = VAR_19->tx_key;
 enum orinoco_alg VAR_22 = VAR_19->encode_alg;
 int VAR_23 = VAR_19->wep_restrict;
 int VAR_24 = -VAR_2;
 unsigned long VAR_25;

 if (!VAR_19->has_wep)
  return -VAR_4;

 if (VAR_17->pointer) {

  if (VAR_17->length > VAR_9)
   return -VAR_0;

  if ((VAR_17->length > VAR_14) && !VAR_19->has_big_wep)
   return -VAR_0;
 }

 if (FUNC_4(VAR_19, &VAR_25) != 0)
  return -VAR_1;


 if ((VAR_19->has_wpa) && (VAR_19->encode_alg == VAR_11))
  (void) FUNC_3(VAR_19, VAR_21);

 if (VAR_17->length > 0) {
  if ((VAR_20 < 0) || (VAR_20 >= VAR_13))
   VAR_20 = VAR_19->tx_key;


  if (VAR_22 != VAR_12) {
   VAR_21 = VAR_20;
   VAR_22 = VAR_12;
  }
 } else {



  if ((VAR_20 < 0) || (VAR_20 >= VAR_13)) {
   if ((VAR_20 != -1) || (VAR_17->flags == 0)) {
    VAR_24 = -VAR_3;
    goto out;
   }
  } else {

   if (VAR_19->keys[VAR_20].key_len == 0) {
    VAR_24 = -VAR_3;
    goto out;
   }
   VAR_21 = VAR_20;
  }
 }

 if (VAR_17->flags & VAR_5)
  VAR_22 = VAR_10;
 if (VAR_17->flags & VAR_7)
  VAR_23 = 0;
 if (VAR_17->flags & VAR_8)
  VAR_23 = 1;

 if (VAR_17->pointer && VAR_17->length > 0) {
  VAR_24 = FUNC_5(VAR_19, VAR_20, VAR_12, VAR_18,
          VAR_17->length, ((void*)0), 0);
 }
 VAR_19->tx_key = VAR_21;


 if ((VAR_19->encode_alg == VAR_22) &&
     (VAR_19->wep_restrict == VAR_23) &&
     FUNC_2(VAR_15)) {
  VAR_24 = FUNC_0(VAR_19);

  goto out;
 }

 VAR_19->encode_alg = VAR_22;
 VAR_19->wep_restrict = VAR_23;

 out:
 FUNC_6(VAR_19, &VAR_25);

 return VAR_24;
}
