
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int key_len; int alg; int ext_flags; struct iw_encode_ext* rx_seq; } ;
struct TYPE_3__ {int set_tx; int idx; int key_len; int key; int seq; scalar_t__ alg; } ;
struct TYPE_4__ {TYPE_1__ crypt; } ;
struct ieee_param {TYPE_2__ u; int sta_addr; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee_param*) ;
 int FUNC_2 (int ,struct iw_encode_ext*,int) ;
 int FUNC_3 (struct ieee_param*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (struct net_device*,struct ieee_param*,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5,
        struct iw_request_info *VAR_6,
        union iwreq_data *VAR_7, char *VAR_8)
{
 char *VAR_9;
 u32 VAR_10;
 struct ieee_param *VAR_11 = ((void*)0);
 struct iw_point *VAR_12 = &VAR_7->encoding;
 struct iw_encode_ext *VAR_13 = (struct iw_encode_ext *)VAR_8;
 int VAR_14 = 0;

 VAR_10 = sizeof(struct ieee_param) + VAR_13->key_len;
 VAR_11 = (struct ieee_param *)FUNC_4(VAR_10);
 if (!VAR_11)
  return -1;

 FUNC_3(VAR_11, 0, VAR_10);

 VAR_11->cmd = VAR_0;
 FUNC_0(VAR_11->sta_addr);

 switch (VAR_13->alg) {
 case 130:


  VAR_9 = "none";
  break;
 case 128:
  VAR_9 = "WEP";
  break;
 case 129:
  VAR_9 = "TKIP";
  break;
 case 131:
  VAR_9 = "CCMP";
  break;
 default:
  VAR_14 = -1;
  goto exit;
 }

 FUNC_5((char *)VAR_11->u.crypt.alg, VAR_9, VAR_1);

 if (VAR_13->ext_flags & VAR_4)
  VAR_11->u.crypt.set_tx = 1;




 if ((VAR_13->alg != 128) &&
     (VAR_13->ext_flags & VAR_2))
  VAR_11->u.crypt.set_tx = 0;

 VAR_11->u.crypt.idx = (VAR_12->flags&0x00FF) - 1;

 if (VAR_13->ext_flags & VAR_3)
  FUNC_2(VAR_11->u.crypt.seq, VAR_13->rx_seq, 8);

 if (VAR_13->key_len) {
  VAR_11->u.crypt.key_len = VAR_13->key_len;
  FUNC_2(VAR_11->u.crypt.key, VAR_13 + 1, VAR_13->key_len);
 }

 VAR_14 = FUNC_6(VAR_5, VAR_11, VAR_10);

exit:
 FUNC_1(VAR_11);
 return VAR_14;
}
