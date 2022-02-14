
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int hw; } ;
struct rtl_priv {TYPE_3__ mac80211; TYPE_2__* cfg; } ;
struct btc_coexist {int bt_mp_comp; struct rtl_priv* adapter; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* fill_h2c_cmd ) (int ,int,int ,int*) ;} ;
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_1 (struct btc_coexist*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ,int*) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static
bool FUNC_7(struct btc_coexist *VAR_15, u8 VAR_16,
     u8 *VAR_17, u32 VAR_18, unsigned long VAR_19)
{
 struct rtl_priv *VAR_20;
 const u8 VAR_21 = 0;
 u8 VAR_22;

 if (!FUNC_1(VAR_15))
  return 0;

 if (VAR_19)
  FUNC_4(&VAR_15->bt_mp_comp);

 VAR_20 = VAR_15->adapter;




 switch (VAR_16) {
 case 131:
  VAR_22 = VAR_11;
  break;
 case 140:
  VAR_22 = VAR_2;
  break;
 case 139:
  VAR_22 = VAR_3;
  break;
 case 141:
  VAR_22 = VAR_1;
  break;
 case 135:
  VAR_22 = VAR_7;
  break;
 case 134:
  VAR_22 = VAR_8;
  break;
 case 138:
  VAR_22 = VAR_4;
  break;
 case 137:
  VAR_22 = VAR_5;
  break;
 case 136:
  VAR_22 = VAR_6;
  break;
 case 133:
  VAR_22 = VAR_9;
  break;
 case 132:
  VAR_22 = VAR_10;
  break;
 case 129:
 case 128:
 case 130:
 default:
  VAR_22 = VAR_0;
  break;
 }

 VAR_17[0] |= (VAR_21 & 0x0f);
 VAR_17[0] |= ((VAR_22 << 4) & 0xf0);
 VAR_17[1] = VAR_16;
 VAR_20->cfg->ops->fill_h2c_cmd(VAR_20->mac80211.hw, 0x67, VAR_18, VAR_17);


 if (!VAR_19)
  return 1;

 FUNC_0(VAR_20, VAR_12, VAR_14,
   "btmpinfo wait req_num=%d wait=%ld\n", VAR_22, VAR_19);

 if (FUNC_2())
  return 0;

 if (FUNC_6(&VAR_15->bt_mp_comp,
     FUNC_3(VAR_19)) == 0) {
  FUNC_0(VAR_20, VAR_12, VAR_13,
    "btmpinfo wait (req_num=%d) timeout\n", VAR_22);

  return 0;
 }

 return 1;
}
