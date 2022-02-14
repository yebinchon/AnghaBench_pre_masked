
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {TYPE_3__* btc_ops; } ;
struct rtl_priv {TYPE_4__ btcoexist; TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct c2h_evt_hdr {int cmd_id; int cmd_len; int cmd_seq; } ;
typedef int c2h_event ;
struct TYPE_7__ {int (* btc_periodical ) (struct rtl_priv*) ;} ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* get_btc_status ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (struct c2h_evt_hdr*,int ,int) ;
 int FUNC_4 (struct ieee80211_hw*,int*,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 void* FUNC_6 (struct rtl_priv*,int) ;
 int FUNC_7 (struct rtl_priv*,int,int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct rtl_priv*) ;

void FUNC_10(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_5(VAR_7);
 struct c2h_evt_hdr VAR_9;
 u8 *VAR_10 = ((void*)0);
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_12 = FUNC_6(VAR_8, VAR_6);
 FUNC_0(VAR_8, VAR_2, VAR_3,
  "&&&&&&: REG_C2HEVT_MSG_NORMAL is 0x%x\n", VAR_12);
 VAR_9.cmd_id = VAR_12 & 0xF;
 VAR_9.cmd_len = (VAR_12 & 0xF0) >> 4;
 VAR_9.cmd_seq = FUNC_6(VAR_8, VAR_6 + 1);
 FUNC_0(VAR_8, VAR_2, VAR_3,
   "cmd_id: %d, cmd_len: %d, cmd_seq: %d\n",
   VAR_9.cmd_id , VAR_9.cmd_len, VAR_9.cmd_seq);
 VAR_12 = FUNC_6(VAR_8, 0x01AF);
 if (VAR_12 == VAR_1) {
  return;
 } else if (VAR_12 != VAR_0) {
  FUNC_7(VAR_8, 0x1AF, 0x00);
  return;
 }
 VAR_10 = FUNC_2(VAR_9.cmd_len, VAR_5);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_8, VAR_2, VAR_4,
    "malloc cmd buf failed\n");
  return;
 }


 for (VAR_11 = 0; VAR_11 < VAR_9.cmd_len; VAR_11++)
  VAR_10[VAR_11] = FUNC_6(VAR_8,
     VAR_6 + 2 + VAR_11);


 switch (VAR_9.cmd_id) {
 case 128:
   break;

 case 129:
   break;

 case 130:
  FUNC_0(VAR_8, VAR_2, VAR_4,
   "BT info Byte[0] (ID) is 0x%x\n",
   VAR_9.cmd_id);
  FUNC_0(VAR_8, VAR_2, VAR_4,
   "BT info Byte[1] (Seq) is 0x%x\n",
   VAR_9.cmd_seq);
  FUNC_0(VAR_8, VAR_2, VAR_4,
   "BT info Byte[2] (Data)= 0x%x\n", VAR_10[0]);

  FUNC_4(VAR_7, VAR_10, VAR_9.cmd_len);

  if (VAR_8->cfg->ops->get_btc_status())
   VAR_8->btcoexist.btc_ops->btc_periodical(VAR_8);

  break;
 default:
  break;
 }
 FUNC_1(VAR_10);

 FUNC_7(VAR_8, 0x01AF, VAR_1);
}
