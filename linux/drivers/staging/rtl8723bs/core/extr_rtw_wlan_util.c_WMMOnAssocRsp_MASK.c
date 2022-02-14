
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
struct TYPE_6__ {TYPE_2__* ac_param; } ;
struct mlme_ext_info {scalar_t__ WMM_enable; int slotTime; TYPE_3__ WMM_param; } ;
struct mlme_ext_priv {int cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct TYPE_4__ {int acm_mask; } ;
struct adapter {TYPE_1__ mlmepriv; struct registry_priv registrypriv; struct xmit_priv xmitpriv; struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_5__ {int ACI_AIFSN; int CW; int TXOP_limit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,int ,int*) ;

void FUNC_4(struct adapter *VAR_13)
{
 u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u8 VAR_20;
 u16 VAR_21;
 u32 VAR_22, VAR_23;
 u32 VAR_24[4], VAR_25[4];
 struct mlme_ext_priv *VAR_26 = &VAR_13->mlmeextpriv;
 struct mlme_ext_info *VAR_27 = &(VAR_26->mlmext_info);
 struct xmit_priv *VAR_28 = &VAR_13->xmitpriv;
 struct registry_priv *VAR_29 = &VAR_13->registrypriv;

 VAR_20 = 0;

 if (VAR_26->cur_wireless_mode & VAR_8)
  VAR_19 = 16;
 else
  VAR_19 = 10;

 if (VAR_27->WMM_enable == 0) {
  VAR_13->mlmepriv.acm_mask = 0;

  VAR_16 = VAR_19 + (2 * VAR_27->slotTime);

  if (VAR_26->cur_wireless_mode & (VAR_7 | VAR_5)) {
   VAR_17 = 4;
   VAR_18 = 10;
  } else if (VAR_26->cur_wireless_mode & VAR_6) {
   VAR_17 = 5;
   VAR_18 = 10;
  } else {
   VAR_17 = 4;
   VAR_18 = 10;
  }

  VAR_21 = 0;
  VAR_22 = VAR_16 | (VAR_17 << 8) | (VAR_18 << 12) | (VAR_21 << 16);
  FUNC_3(VAR_13, VAR_1, (u8 *)(&VAR_22));
  FUNC_3(VAR_13, VAR_2, (u8 *)(&VAR_22));
  FUNC_3(VAR_13, VAR_3, (u8 *)(&VAR_22));

  VAR_17 = 2;
  VAR_18 = 3;
  VAR_21 = 0x2f;
  VAR_22 = VAR_16 | (VAR_17 << 8) | (VAR_18 << 12) | (VAR_21 << 16);
  FUNC_3(VAR_13, VAR_4, (u8 *)(&VAR_22));
 } else {
  VAR_24[0] = VAR_24[1] = VAR_24[2] = VAR_24[3] = 0;

  for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
   VAR_14 = (VAR_27->WMM_param.ac_param[VAR_23].ACI_AIFSN >> 5) & 0x03;
   VAR_15 = (VAR_27->WMM_param.ac_param[VAR_23].ACI_AIFSN >> 4) & 0x01;


   VAR_16 = (VAR_27->WMM_param.ac_param[VAR_23].ACI_AIFSN & 0x0f) * VAR_27->slotTime + VAR_19;

   VAR_17 = (VAR_27->WMM_param.ac_param[VAR_23].CW & 0x0f);
   VAR_18 = (VAR_27->WMM_param.ac_param[VAR_23].CW & 0xf0) >> 4;
   VAR_21 = FUNC_2(VAR_27->WMM_param.ac_param[VAR_23].TXOP_limit);

   VAR_22 = VAR_16 | (VAR_17 << 8) | (VAR_18 << 12) | (VAR_21 << 16);

   switch (VAR_14) {
   case 0x0:
    FUNC_3(VAR_13, VAR_1, (u8 *)(&VAR_22));
    VAR_20 |= (VAR_15 ? FUNC_0(1):0);
    VAR_24[VAR_9] = VAR_22;
    break;

   case 0x1:
    FUNC_3(VAR_13, VAR_2, (u8 *)(&VAR_22));

    VAR_24[VAR_10] = VAR_22;
    break;

   case 0x2:
    FUNC_3(VAR_13, VAR_3, (u8 *)(&VAR_22));
    VAR_20 |= (VAR_15 ? FUNC_0(2):0);
    VAR_24[VAR_11] = VAR_22;
    break;

   case 0x3:
    FUNC_3(VAR_13, VAR_4, (u8 *)(&VAR_22));
    VAR_20 |= (VAR_15 ? FUNC_0(3):0);
    VAR_24[VAR_12] = VAR_22;
    break;
   }

   FUNC_1("WMM(%x): %x, %x\n", VAR_14, VAR_15, VAR_22);
  }

  if (VAR_13->registrypriv.acm_method == 1)
   FUNC_3(VAR_13, VAR_0, (u8 *)(&VAR_20));
  else
   VAR_13->mlmepriv.acm_mask = VAR_20;

  VAR_25[0] = 0; VAR_25[1] = 1; VAR_25[2] = 2; VAR_25[3] = 3;

  if (VAR_29->wifi_spec == 1) {
   u32 VAR_30, VAR_31, VAR_32 = 0;


   for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
    for (VAR_30 = VAR_23+1; VAR_30 < 4; VAR_30++) {

     if ((VAR_24[VAR_30] & 0xFFFF) < (VAR_24[VAR_23] & 0xFFFF)) {
      VAR_32 = 1;
     } else if ((VAR_24[VAR_30] & 0xFFFF) == (VAR_24[VAR_23] & 0xFFFF)) {

      if ((VAR_24[VAR_30] >> 16) > (VAR_24[VAR_23] >> 16))
       VAR_32 = 1;
     }

     if (VAR_32) {
      VAR_31 = VAR_24[VAR_23];
      VAR_24[VAR_23] = VAR_24[VAR_30];
      VAR_24[VAR_30] = VAR_31;

      VAR_31 = VAR_25[VAR_23];
      VAR_25[VAR_23] = VAR_25[VAR_30];
      VAR_25[VAR_30] = VAR_31;

      VAR_32 = 0;
     }
    }
   }
  }

  for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
   VAR_28->wmm_para_seq[VAR_23] = VAR_25[VAR_23];
   FUNC_1("wmm_para_seq(%d): %d\n", VAR_23, VAR_28->wmm_para_seq[VAR_23]);
  }
 }
}
