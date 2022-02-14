
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iw_point {int flags; scalar_t__ length; int pointer; } ;
union iwreq_data {struct iw_point encoding; } ;
struct wep_key {scalar_t__ len; int * key; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int wep_index; int privacy_invoked; scalar_t__ authenticate_type; TYPE_1__* wep_key; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_2__ reg; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ size; int * val; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (struct ks_wlan_private*,int) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 struct ks_wlan_private* FUNC_4 (struct net_device*) ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_22,
         struct iw_request_info *VAR_23,
         union iwreq_data *VAR_24, char *VAR_25)
{
 struct ks_wlan_private *VAR_26 = FUNC_4(VAR_22);
 struct iw_point *VAR_27 = &VAR_24->encoding;
 struct wep_key VAR_28;
 int VAR_29 = (VAR_27->flags & VAR_6);

 if (VAR_26->sleep_mode == VAR_13)
  return -VAR_4;

 if (VAR_27->length > VAR_11)
  return -VAR_3;


 if ((VAR_29 < 0) || (VAR_29 > 4))
  return -VAR_3;

 VAR_29 = (VAR_29 == 0) ? VAR_26->reg.wep_index : (VAR_29 - 1);



 if (VAR_27->length > 0) {
  VAR_28.len = (VAR_27->length > VAR_12) ?
      VAR_11 : VAR_12;
  VAR_26->reg.privacy_invoked = 0x01;
  VAR_26->need_commit |= VAR_15;
  VAR_21 = (VAR_27->length > VAR_12) ?
         VAR_19 : VAR_20;

  if (VAR_27->flags & VAR_8)
   return 0;


  FUNC_3(VAR_28.key, 0, VAR_11);

  if (FUNC_0(VAR_28.key, VAR_27->pointer, VAR_27->length)) {
   VAR_28.len = 0;
   return -VAR_2;
  }

  VAR_26->reg.wep_key[VAR_29].size = VAR_28.len;
  FUNC_2(&VAR_26->reg.wep_key[VAR_29].val[0], &VAR_28.key[0],
         VAR_26->reg.wep_key[VAR_29].size);
  VAR_26->need_commit |= (VAR_17 << VAR_29);
  VAR_26->reg.wep_index = VAR_29;
  VAR_26->need_commit |= VAR_16;
 } else {
  if (VAR_27->flags & VAR_5) {
   VAR_26->reg.wep_key[0].size = 0;
   VAR_26->reg.wep_key[1].size = 0;
   VAR_26->reg.wep_key[2].size = 0;
   VAR_26->reg.wep_key[3].size = 0;
   VAR_26->reg.privacy_invoked = 0x00;
   if (VAR_26->reg.authenticate_type == VAR_1)
    VAR_26->need_commit |= VAR_14;

   VAR_26->reg.authenticate_type = VAR_0;
   VAR_21 = VAR_18;
   VAR_26->need_commit |= VAR_15;
  } else {

   if (VAR_26->reg.wep_key[VAR_29].size == 0)
    return -VAR_3;
   VAR_26->reg.wep_index = VAR_29;
   VAR_26->need_commit |= VAR_16;
  }
 }


 if (VAR_27->flags & VAR_7)
  VAR_26->need_commit |= VAR_15;

 if (VAR_27->flags & VAR_9) {
  if (VAR_26->reg.authenticate_type == VAR_1)
   VAR_26->need_commit |= VAR_14;

  VAR_26->reg.authenticate_type = VAR_0;
 } else if (VAR_27->flags & VAR_10) {
  if (VAR_26->reg.authenticate_type == VAR_0)
   VAR_26->need_commit |= VAR_14;

  VAR_26->reg.authenticate_type = VAR_1;
 }
 if (VAR_26->need_commit) {
  FUNC_1(VAR_26, VAR_26->need_commit);
  VAR_26->need_commit = 0;
 }
 return 0;
}
