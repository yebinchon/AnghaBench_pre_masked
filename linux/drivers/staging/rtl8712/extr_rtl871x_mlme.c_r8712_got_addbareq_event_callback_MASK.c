
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_priv {int dummy; } ;
struct sta_info {struct recv_reorder_ctrl* recvreorder_ctrl; } ;
struct recv_reorder_ctrl {int indicate_seq; } ;
struct _adapter {struct sta_priv stapriv; } ;
struct ADDBA_Req_Report_parm {size_t tid; int MacAddress; } ;


 struct sta_info* FUNC_0 (struct sta_priv*,int ) ;

void FUNC_1(struct _adapter *VAR_0, u8 *VAR_1)
{
 struct ADDBA_Req_Report_parm *VAR_2 =
    (struct ADDBA_Req_Report_parm *)VAR_1;
 struct sta_info *VAR_3;
 struct sta_priv *VAR_4 = &VAR_0->stapriv;
 struct recv_reorder_ctrl *VAR_5 = ((void*)0);

 VAR_3 = FUNC_0(VAR_4, VAR_2->MacAddress);
 if (VAR_3) {
  VAR_5 =
    &VAR_3->recvreorder_ctrl[VAR_2->tid];



  VAR_5->indicate_seq = 0xffff;
 }
}
