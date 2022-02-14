
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_priv {int dummy; } ;
struct sta_info {struct recv_reorder_ctrl* recvreorder_ctrl; } ;
struct recv_reorder_ctrl {int indicate_seq; int enable; } ;
struct mlme_ext_info {int accept_addba_req; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct sta_priv stapriv; } ;
struct ADDBA_request {int BA_para_set; } ;


 int FUNC_0 (int ) ;
 struct sta_info* FUNC_1 (struct sta_priv*,int *) ;

void FUNC_2(struct adapter *VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 struct sta_info *VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 struct recv_reorder_ctrl *VAR_6;
 struct sta_priv *VAR_7 = &VAR_0->stapriv;
 struct ADDBA_request *VAR_8 = (struct ADDBA_request *)VAR_1;
 struct mlme_ext_priv *VAR_9 = &VAR_0->mlmeextpriv;
 struct mlme_ext_info *VAR_10 = &VAR_9->mlmext_info;

 VAR_3 = FUNC_1(VAR_7, VAR_2);

 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_8->BA_para_set);
  VAR_4 = (VAR_5 >> 2) & 0x0f;
  VAR_6 = &VAR_3->recvreorder_ctrl[VAR_4];
  VAR_6->indicate_seq = 0xffff;
  VAR_6->enable = VAR_10->accept_addba_req;
 }
}
