
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
struct iw_encode_ext {int alg; int key_len; int ext_flags; struct iw_encode_ext* rx_seq; } ;
struct TYPE_3__ {int set_tx; int idx; int key_len; struct ieee_param* seq; scalar_t__ alg; } ;
struct TYPE_4__ {TYPE_1__ crypt; } ;
struct ieee_param {TYPE_2__ u; int sta_addr; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee_param*) ;
 struct ieee_param* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee_param*,struct iw_encode_ext*,int) ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (struct net_device*,struct ieee_param*,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8,
        struct iw_request_info *VAR_9,
        union iwreq_data *VAR_10, char *VAR_11)
{
 struct iw_point *VAR_12 = &VAR_10->encoding;
 struct iw_encode_ext *VAR_13 = (struct iw_encode_ext *)VAR_11;
 struct ieee_param *VAR_14 = ((void*)0);
 char *VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;

 switch (VAR_13->alg) {
 case 130:
  VAR_15 = "none";
  break;
 case 128:
  VAR_15 = "WEP";
  break;
 case 129:
  VAR_15 = "TKIP";
  break;
 case 131:
  VAR_15 = "CCMP";
  break;
 default:
  return -VAR_0;
 }

 VAR_16 = sizeof(struct ieee_param) + VAR_13->key_len;
 VAR_14 = FUNC_2(VAR_16, VAR_2);
 if (!VAR_14)
  return -VAR_1;
 VAR_14->cmd = VAR_3;
 FUNC_0(VAR_14->sta_addr);
 FUNC_4((char *)VAR_14->u.crypt.alg, VAR_15, VAR_4);
 if (VAR_13->ext_flags & VAR_5)
  VAR_14->u.crypt.set_tx = 0;
 if (VAR_13->ext_flags & VAR_7)
  VAR_14->u.crypt.set_tx = 1;
 VAR_14->u.crypt.idx = (VAR_12->flags & 0x00FF) - 1;
 if (VAR_13->ext_flags & VAR_6)
  FUNC_3(VAR_14->u.crypt.seq, VAR_13->rx_seq, 8);
 if (VAR_13->key_len) {
  VAR_14->u.crypt.key_len = VAR_13->key_len;
  FUNC_3(VAR_14 + 1, VAR_13 + 1, VAR_13->key_len);
 }
 VAR_17 = FUNC_5(VAR_8, VAR_14, VAR_16);
 FUNC_1(VAR_14);
 return VAR_17;
}
