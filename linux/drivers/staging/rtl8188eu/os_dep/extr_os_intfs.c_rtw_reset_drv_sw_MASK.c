
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct pwrctrl_priv {scalar_t__ pwr_state_check_cnts; } ;
struct TYPE_7__ {int bBusyTraffic; } ;
struct mlme_priv {TYPE_2__ LinkDetectInfo; int scan_interval; } ;
struct TYPE_10__ {scalar_t__ rx_pkts; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_9__ {TYPE_3__ sitesurvey_res; } ;
struct TYPE_6__ {scalar_t__ tx_pkts; } ;
struct adapter {int bReadPortCancel; int bWritePortCancel; TYPE_5__ recvpriv; TYPE_4__ mlmeextpriv; TYPE_1__ xmitpriv; struct pwrctrl_priv pwrctrlpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlme_priv*,int) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (TYPE_5__*) ;

u8 FUNC_4(struct adapter *VAR_5)
{
 struct mlme_priv *VAR_6 = &VAR_5->mlmepriv;
 struct pwrctrl_priv *VAR_7 = &VAR_5->pwrctrlpriv;


 FUNC_1(VAR_5);
 VAR_5->bReadPortCancel = 0;
 VAR_5->bWritePortCancel = 0;
 VAR_6->scan_interval = VAR_1;

 VAR_5->xmitpriv.tx_pkts = 0;
 VAR_5->recvpriv.rx_pkts = 0;

 VAR_6->LinkDetectInfo.bBusyTraffic = 0;

 FUNC_0(VAR_6, VAR_3 | VAR_2);
 FUNC_2(VAR_5);
 VAR_7->pwr_state_check_cnts = 0;


 VAR_5->mlmeextpriv.sitesurvey_res.state = VAR_0;

 FUNC_3(&VAR_5->recvpriv);

 return VAR_4;
}
