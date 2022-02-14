
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_point {int length; int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct orinoco_private {int tx_key; int encode_alg; TYPE_1__* keys; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {void* key_len; int key; int alg; } ;
struct TYPE_2__ {int key; int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (int ,int ,void*) ;
 int FUNC_1 (struct iw_encode_ext*,int ,int) ;
 void* FUNC_2 (int ,int) ;
 struct orinoco_private* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct orinoco_private*,unsigned long*) ;
 int FUNC_5 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8,
           struct iw_request_info *VAR_9,
           union iwreq_data *VAR_10,
           char *VAR_11)
{
 struct orinoco_private *VAR_12 = FUNC_3(VAR_8);
 struct iw_point *VAR_13 = &VAR_10->encoding;
 struct iw_encode_ext *VAR_14 = (struct iw_encode_ext *)VAR_11;
 int VAR_15, VAR_16;
 unsigned long VAR_17;
 int VAR_18;

 if (FUNC_4(VAR_12, &VAR_17) != 0)
  return -VAR_0;

 VAR_18 = -VAR_1;
 VAR_16 = VAR_13->length - sizeof(*VAR_14);
 if (VAR_16 < 0)
  goto out;

 VAR_15 = VAR_13->flags & VAR_7;
 if (VAR_15) {
  if ((VAR_15 < 1) || (VAR_15 > 4))
   goto out;
  VAR_15--;
 } else
  VAR_15 = VAR_12->tx_key;

 VAR_13->flags = VAR_15 + 1;
 FUNC_1(VAR_14, 0, sizeof(*VAR_14));

 switch (VAR_12->encode_alg) {
 case 130:
  VAR_14->alg = VAR_2;
  VAR_14->key_len = 0;
  VAR_13->flags |= VAR_5;
  break;
 case 128:
  VAR_14->alg = VAR_4;
  VAR_14->key_len = FUNC_2(VAR_12->keys[VAR_15].key_len, VAR_16);
  FUNC_0(VAR_14->key, VAR_12->keys[VAR_15].key, VAR_14->key_len);
  VAR_13->flags |= VAR_6;
  break;
 case 129:
  VAR_14->alg = VAR_3;
  VAR_14->key_len = FUNC_2(VAR_12->keys[VAR_15].key_len, VAR_16);
  FUNC_0(VAR_14->key, VAR_12->keys[VAR_15].key, VAR_14->key_len);
  VAR_13->flags |= VAR_6;
  break;
 }

 VAR_18 = 0;
 out:
 FUNC_5(VAR_12, &VAR_17);

 return VAR_18;
}
