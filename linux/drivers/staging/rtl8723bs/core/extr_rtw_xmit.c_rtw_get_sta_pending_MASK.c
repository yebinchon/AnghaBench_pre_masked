
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tx_servq {int dummy; } ;
struct TYPE_2__ {struct tx_servq be_q; struct tx_servq vo_q; struct tx_servq vi_q; struct tx_servq bk_q; } ;
struct sta_info {TYPE_1__ sta_xmitpriv; } ;
struct adapter {int dummy; } ;
typedef int sint ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

struct tx_servq *FUNC_1(struct adapter *VAR_2, struct sta_info *VAR_3, sint VAR_4, u8 *VAR_5)
{
 struct tx_servq *VAR_6 = ((void*)0);

 switch (VAR_4) {
 case 1:
 case 2:
  VAR_6 = &(VAR_3->sta_xmitpriv.bk_q);
  *(VAR_5) = 3;
  FUNC_0(VAR_1, VAR_0, ("rtw_get_sta_pending : BK\n"));
  break;

 case 4:
 case 5:
  VAR_6 = &(VAR_3->sta_xmitpriv.vi_q);
  *(VAR_5) = 1;
  FUNC_0(VAR_1, VAR_0, ("rtw_get_sta_pending : VI\n"));
  break;

 case 6:
 case 7:
  VAR_6 = &(VAR_3->sta_xmitpriv.vo_q);
  *(VAR_5) = 0;
  FUNC_0(VAR_1, VAR_0, ("rtw_get_sta_pending : VO\n"));
  break;

 case 0:
 case 3:
 default:
  VAR_6 = &(VAR_3->sta_xmitpriv.be_q);
  *(VAR_5) = 2;
  FUNC_0(VAR_1, VAR_0, ("rtw_get_sta_pending : BE\n"));
 break;

 }

 return VAR_6;
}
