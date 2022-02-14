
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pwrctrl_priv {scalar_t__ pwr_state_check_cnts; } ;
struct TYPE_7__ {int bBusyTraffic; scalar_t__ LowPowerTransitionCount; scalar_t__ TrafficTransitionCount; } ;
struct mlme_priv {TYPE_2__ LinkDetectInfo; } ;
struct TYPE_10__ {scalar_t__ rx_pkts; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_9__ {TYPE_3__ sitesurvey_res; } ;
struct TYPE_6__ {scalar_t__ tx_pkts; } ;
struct adapter {TYPE_5__ recvpriv; TYPE_4__ mlmeextpriv; TYPE_1__ xmitpriv; scalar_t__ bLinkInfoDump; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlme_priv*,int) ;
 struct pwrctrl_priv* FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (TYPE_5__*) ;

void FUNC_6(struct adapter *VAR_5)
{
 struct mlme_priv *VAR_6 = &VAR_5->mlmepriv;
 struct pwrctrl_priv *VAR_7 = FUNC_2(VAR_5);


 if (FUNC_3(VAR_5))
  FUNC_4(VAR_5);

 FUNC_0(VAR_5, VAR_0);
 FUNC_0(VAR_5, VAR_1);
 VAR_5->bLinkInfoDump = 0;

 VAR_5->xmitpriv.tx_pkts = 0;
 VAR_5->recvpriv.rx_pkts = 0;

 VAR_6->LinkDetectInfo.bBusyTraffic = 0;


 VAR_6->LinkDetectInfo.TrafficTransitionCount = 0;
 VAR_6->LinkDetectInfo.LowPowerTransitionCount = 0;

 FUNC_1(VAR_6, VAR_4 | VAR_3);

 VAR_7->pwr_state_check_cnts = 0;


 VAR_5->mlmeextpriv.sitesurvey_res.state = VAR_2;

 FUNC_5(&VAR_5->recvpriv);

}
