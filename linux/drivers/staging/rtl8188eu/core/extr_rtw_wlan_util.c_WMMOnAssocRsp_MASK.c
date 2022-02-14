
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xmit_priv {int* wmm_para_seq; } ;
struct registry_priv {int acm_method; int wifi_spec; } ;
struct TYPE_5__ {TYPE_1__* ac_param; } ;
struct mlme_ext_info {scalar_t__ WMM_enable; int slotTime; TYPE_2__ WMM_param; } ;
struct mlme_ext_priv {scalar_t__ cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct TYPE_6__ {int acm_mask; } ;
struct adapter {TYPE_3__ mlmepriv; struct registry_priv registrypriv; struct xmit_priv xmitpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_4__ {int ACI_AIFSN; int CW; int TXOP_limit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,int ,int*) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct adapter *VAR_10)
{
 u8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17;
 u16 VAR_18;
 u32 VAR_19, VAR_20;
 u32 VAR_21[4], VAR_22[4];
 struct mlme_ext_priv *VAR_23 = &VAR_10->mlmeextpriv;
 struct mlme_ext_info *VAR_24 = &VAR_23->mlmext_info;
 struct xmit_priv *VAR_25 = &VAR_10->xmitpriv;
 struct registry_priv *VAR_26 = &VAR_10->registrypriv;

 if (VAR_24->WMM_enable == 0) {
  VAR_10->mlmepriv.acm_mask = 0;
  return;
 }

 VAR_17 = 0;

 if (VAR_23->cur_wireless_mode == VAR_5)
  VAR_16 = 10;
 else
  VAR_16 = 16;

 for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
  VAR_11 = (VAR_24->WMM_param.ac_param[VAR_20].ACI_AIFSN >> 5) & 0x03;
  VAR_12 = (VAR_24->WMM_param.ac_param[VAR_20].ACI_AIFSN >> 4) & 0x01;


  VAR_13 = (VAR_24->WMM_param.ac_param[VAR_20].ACI_AIFSN & 0x0f) * VAR_24->slotTime + VAR_16;

  VAR_14 = VAR_24->WMM_param.ac_param[VAR_20].CW & 0x0f;
  VAR_15 = (VAR_24->WMM_param.ac_param[VAR_20].CW & 0xf0) >> 4;
  VAR_18 = FUNC_2(VAR_24->WMM_param.ac_param[VAR_20].TXOP_limit);

  VAR_19 = VAR_13 | (VAR_14 << 8) | (VAR_15 << 12) | (VAR_18 << 16);

  switch (VAR_11) {
  case 0x0:
   FUNC_3(VAR_10, VAR_1, (u8 *)(&VAR_19));
   VAR_17 |= (VAR_12 ? FUNC_0(1) : 0);
   VAR_21[VAR_6] = VAR_19;
   break;
  case 0x1:
   FUNC_3(VAR_10, VAR_2, (u8 *)(&VAR_19));
   VAR_21[VAR_7] = VAR_19;
   break;
  case 0x2:
   FUNC_3(VAR_10, VAR_3, (u8 *)(&VAR_19));
   VAR_17 |= (VAR_12 ? FUNC_0(2) : 0);
   VAR_21[VAR_8] = VAR_19;
   break;
  case 0x3:
   FUNC_3(VAR_10, VAR_4, (u8 *)(&VAR_19));
   VAR_17 |= (VAR_12 ? FUNC_0(3) : 0);
   VAR_21[VAR_9] = VAR_19;
   break;
  }

  FUNC_1("WMM(%x): %x, %x\n", VAR_11, VAR_12, VAR_19);
 }

 if (VAR_10->registrypriv.acm_method == 1)
  FUNC_3(VAR_10, VAR_0, (u8 *)(&VAR_17));
 else
  VAR_10->mlmepriv.acm_mask = VAR_17;

 VAR_22[0] = 0; VAR_22[1] = 1; VAR_22[2] = 2; VAR_22[3] = 3;

 if (VAR_26->wifi_spec == 1) {
  u32 VAR_27, VAR_28 = 0;


  for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
   for (VAR_27 = VAR_20 + 1; VAR_27 < 4; VAR_27++) {

    if ((VAR_21[VAR_27] & 0xFFFF) < (VAR_21[VAR_20] & 0xFFFF)) {
     VAR_28 = 1;
    } else if ((VAR_21[VAR_27] & 0xFFFF) == (VAR_21[VAR_20] & 0xFFFF)) {

     if ((VAR_21[VAR_27] >> 16) > (VAR_21[VAR_20] >> 16))
      VAR_28 = 1;
    }

    if (VAR_28) {
     FUNC_4(VAR_21[VAR_20], VAR_21[VAR_27]);
     FUNC_4(VAR_22[VAR_20], VAR_22[VAR_27]);
     VAR_28 = 0;
    }
   }
  }
 }

 for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
  VAR_25->wmm_para_seq[VAR_20] = VAR_22[VAR_20];
  FUNC_1("wmm_para_seq(%d): %d\n", VAR_20, VAR_25->wmm_para_seq[VAR_20]);
 }
}
