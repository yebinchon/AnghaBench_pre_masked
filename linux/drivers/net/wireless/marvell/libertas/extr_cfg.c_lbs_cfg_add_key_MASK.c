
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {int * wep_key; int * wep_key_len; struct net_device* mesh_dev; } ;
struct key_params {int cipher; int key_len; int key; int seq_len; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct lbs_private*,int,int,int ,int ) ;
 int FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct wiphy*,char*,int const) ;
 struct lbs_private* FUNC_7 (struct wiphy*) ;

__attribute__((used)) static int FUNC_8(struct wiphy *VAR_8, struct net_device *VAR_9,
      u8 VAR_10, bool VAR_11, const u8 *VAR_12,
      struct key_params *VAR_13)
{
 struct lbs_private *VAR_14 = FUNC_7(VAR_8);
 u16 VAR_15;
 u16 VAR_16;
 int VAR_17 = 0;

 if (VAR_9 == VAR_14->mesh_dev)
  return -VAR_1;

 FUNC_0("add_key: cipher 0x%x, mac_addr %pM\n",
        VAR_13->cipher, VAR_12);
 FUNC_0("add_key: key index %d, key len %d\n",
        VAR_10, VAR_13->key_len);
 if (VAR_13->key_len)
  FUNC_1(VAR_7, "KEY",
       VAR_13->key, VAR_13->key_len);

 FUNC_0("add_key: seq len %d\n", VAR_13->seq_len);
 if (VAR_13->seq_len)
  FUNC_1(VAR_7, "SEQ",
       VAR_13->seq, VAR_13->seq_len);

 switch (VAR_13->cipher) {
 case 128:
 case 129:

  if ((VAR_14->wep_key_len[VAR_10] != VAR_13->key_len) ||
   FUNC_4(VAR_14->wep_key[VAR_10],
          VAR_13->key, VAR_13->key_len) != 0) {
   VAR_14->wep_key_len[VAR_10] = VAR_13->key_len;
   FUNC_5(VAR_14->wep_key[VAR_10],
          VAR_13->key, VAR_13->key_len);
   FUNC_3(VAR_14);
  }
  break;
 case 130:
 case 131:
  VAR_15 = VAR_2 | ((VAR_10 == 0)
         ? VAR_4
         : VAR_3);
  VAR_16 = (VAR_13->cipher == 130)
   ? VAR_6
   : VAR_5;
  FUNC_2(VAR_14,
         VAR_16,
         VAR_15,
         VAR_13->key, VAR_13->key_len);
  break;
 default:
  FUNC_6(VAR_8, "unhandled cipher 0x%x\n", VAR_13->cipher);
  VAR_17 = -VAR_0;
  break;
 }

 return VAR_17;
}
