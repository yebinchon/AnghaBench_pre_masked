
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


union oid_res_t {int u; struct obj_key* ptr; } ;
struct iw_point {int length; int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct obj_key {int length; int type; int key; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int key_len; int alg; int key; } ;
struct TYPE_5__ {int wpa; int mib_sem; } ;
typedef TYPE_1__ islpci_private ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct iw_encode_ext*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int *,union oid_res_t*) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_16,
     struct iw_request_info *VAR_17,
     union iwreq_data *VAR_18,
     char *VAR_19)
{
 islpci_private *VAR_20 = FUNC_5(VAR_16);
 struct iw_point *VAR_21 = &VAR_18->encoding;
 struct iw_encode_ext *VAR_22 = (struct iw_encode_ext *)VAR_19;
 int VAR_23, VAR_24;
 union oid_res_t VAR_25;
 int VAR_26 = 131, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;
 int VAR_30 = 0;

 if (FUNC_1(VAR_20) < VAR_15)
  return 0;


 VAR_30 = FUNC_4(VAR_20, VAR_0, 0, ((void*)0), &VAR_25);
 VAR_26 = VAR_25.u;
 VAR_30 = FUNC_4(VAR_20, VAR_4, 0, ((void*)0), &VAR_25);
 VAR_27 = VAR_25.u;
 VAR_30 = FUNC_4(VAR_20, VAR_3, 0, ((void*)0), &VAR_25);
 VAR_28 = VAR_25.u;
 if (VAR_30 < 0)
  goto out;

 VAR_24 = VAR_21->length - sizeof(*VAR_22);
 if (VAR_24 < 0)
  return -VAR_6;

 VAR_23 = (VAR_21->flags & VAR_12) - 1;
 if (VAR_23) {
  if (VAR_23 < 0 || VAR_23 > 3)
   return -VAR_6;
 } else {
  VAR_30 = FUNC_4(VAR_20, VAR_1, 0, ((void*)0), &VAR_25);
  if (VAR_30 < 0)
   goto out;
  VAR_23 = VAR_25.u;
 }

 VAR_21->flags = VAR_23 + 1;
 FUNC_3(VAR_22, 0, sizeof(*VAR_22));

 switch (VAR_26) {
 case 132:
 case 130:
  VAR_18->encoding.flags |= VAR_14;

 case 131:
 default:
  VAR_18->encoding.flags |= VAR_13;
  break;
 }

 FUNC_0(&VAR_20->mib_sem);
 VAR_29 = VAR_20->wpa;
 FUNC_6(&VAR_20->mib_sem);

 if (VAR_26 == 131 && !VAR_28 && !VAR_27 && !VAR_29) {

  VAR_22->alg = VAR_7;
  VAR_22->key_len = 0;
  VAR_18->encoding.flags |= VAR_10;
 } else {
  struct obj_key *VAR_31;

  VAR_30 = FUNC_4(VAR_20, VAR_2, VAR_23, ((void*)0), &VAR_25);
  if (VAR_30 < 0)
   goto out;
  VAR_31 = VAR_25.ptr;
  if (VAR_24 < VAR_31->length) {
   VAR_30 = -VAR_5;
   goto out;
  }
  FUNC_2(VAR_22->key, VAR_31->key, VAR_31->length);
  VAR_22->key_len = VAR_31->length;

  switch (VAR_31->type) {
  case 129:
   VAR_22->alg = VAR_8;
   break;
  default:
  case 128:
   VAR_22->alg = VAR_9;
   break;
  }
  VAR_18->encoding.flags |= VAR_11;
 }

out:
 return VAR_30;
}
