
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* key; int txkey; } ;
struct TYPE_4__ {int privacy_invoked; } ;
struct ks_wlan_private {TYPE_3__ wpa; TYPE_1__ reg; } ;
struct TYPE_5__ {int * rx_seq; int key_len; int * key_val; } ;


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
 int FUNC_0 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_1 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_2 (struct ks_wlan_private*,int ,int *,int ) ;

__attribute__((used)) static
void FUNC_3(struct ks_wlan_private *VAR_10, int VAR_11)
{
 switch (VAR_11) {
 case 136:
  FUNC_0(VAR_10, VAR_3,
         VAR_10->reg.privacy_invoked);
  break;
 case 128:
  FUNC_1(VAR_10, VAR_4,
        VAR_10->wpa.txkey);
  break;
 case 133:
  FUNC_2(VAR_10,
            VAR_5,
            &VAR_10->wpa.key[0].key_val[0],
            VAR_10->wpa.key[0].key_len);
  break;
 case 132:
  FUNC_2(VAR_10,
            VAR_6,
            &VAR_10->wpa.key[1].key_val[0],
            VAR_10->wpa.key[1].key_len);
  break;
 case 131:
  FUNC_2(VAR_10,
            VAR_7,
            &VAR_10->wpa.key[2].key_val[0],
            VAR_10->wpa.key[2].key_len);
  break;
 case 130:
  FUNC_2(VAR_10,
            VAR_8,
            &VAR_10->wpa.key[3].key_val[0],
            VAR_10->wpa.key[3].key_len);
  break;
 case 129:
  FUNC_2(VAR_10, VAR_2,
            &VAR_10->wpa.key[0].rx_seq[0],
            VAR_9);
  break;
 case 135:
  FUNC_2(VAR_10, VAR_0,
            &VAR_10->wpa.key[1].rx_seq[0],
            VAR_9);
  break;
 case 134:
  FUNC_2(VAR_10, VAR_1,
            &VAR_10->wpa.key[2].rx_seq[0],
            VAR_9);
  break;
 }
}
