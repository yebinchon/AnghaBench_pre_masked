
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wpa_suite ;
typedef int u8 ;
typedef int u32 ;
struct wpa_suite {void* rsn_capability; int rsn_mode; void* size; struct wpa_suite** suite; } ;
struct rsn_mode {void* rsn_capability; int rsn_mode; void* size; struct rsn_mode** suite; } ;
struct TYPE_2__ {int version; int rsn_enabled; int key_mgmt_suite; int group_suite; int pairwise_suite; } ;
struct ks_wlan_private {TYPE_1__ wpa; } ;
typedef int rsn_mode ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;







 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;





 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_3 (struct ks_wlan_private*,int ,struct wpa_suite*,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct wpa_suite*,int const*,int) ;
 int FUNC_6 (struct wpa_suite*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ks_wlan_private *VAR_30, int VAR_31)
{
 struct wpa_suite VAR_32;
 struct rsn_mode VAR_33;
 size_t VAR_34;
 u32 VAR_35;
 const u8 *VAR_36 = ((void*)0);

 FUNC_6(&VAR_32, 0, sizeof(VAR_32));

 switch (VAR_31) {
 case 128:
  VAR_32.size = FUNC_0(1);
  switch (VAR_30->wpa.pairwise_suite) {
  case 138:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_2 : VAR_7;
   break;
  case 135:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_5 : VAR_10;
   break;
  case 137:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_3 : VAR_8;
   break;
  case 139:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_1 : VAR_6;
   break;
  case 136:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_4 : VAR_9;
   break;
  }

  if (VAR_36)
   FUNC_5(&VAR_32.suite[0][0], VAR_36, VAR_0);
  VAR_34 = sizeof(VAR_32.size) +
         (VAR_0 * FUNC_4(VAR_32.size));
  FUNC_3(VAR_30,
            VAR_13,
            &VAR_32, VAR_34);
  break;
 case 130:
  switch (VAR_30->wpa.group_suite) {
  case 138:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_2 : VAR_7;
   break;
  case 135:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_5 : VAR_10;
   break;
  case 137:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_3 : VAR_8;
   break;
  case 139:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_1 : VAR_6;
   break;
  case 136:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_4 : VAR_9;
   break;
  }
  if (VAR_36)
   FUNC_5(&VAR_32.suite[0][0], VAR_36, VAR_0);
  FUNC_3(VAR_30,
            VAR_12,
            &VAR_32.suite[0][0],
            VAR_0);
  break;
 case 132:
  VAR_32.size = FUNC_0(1);
  switch (VAR_30->wpa.key_mgmt_suite) {
  case 134:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_18 : VAR_22;
   break;
  case 133:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_20 : VAR_24;
   break;
  case 0:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_19 : VAR_23;
   break;
  case 4:
   VAR_36 = (VAR_30->wpa.version == VAR_16) ?
    VAR_21 :
    VAR_25;
   break;
  }

  if (VAR_36)
   FUNC_5(&VAR_32.suite[0][0], VAR_36, VAR_17);
  VAR_34 = sizeof(VAR_32.size) +
         (VAR_17 * FUNC_4(VAR_32.size));
  FUNC_3(VAR_30,
            VAR_11,
            &VAR_32, VAR_34);
  break;
 case 131:
  FUNC_2(VAR_30, VAR_14,
         VAR_30->wpa.rsn_enabled);
  break;
 case 129:
  VAR_35 = (VAR_30->wpa.version == VAR_16) ?
   VAR_29 :
   (VAR_30->wpa.version == VAR_15) ?
    VAR_28 : VAR_27;
  VAR_33.rsn_mode = FUNC_1(VAR_35);
  VAR_33.rsn_capability = FUNC_0(0);
  FUNC_3(VAR_30, VAR_26,
            &VAR_33, sizeof(VAR_33));
  break;
 }
}
