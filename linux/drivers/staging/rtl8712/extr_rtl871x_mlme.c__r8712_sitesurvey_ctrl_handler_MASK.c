
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef scalar_t__ u64 ;
struct sitesurvey_ctrl {scalar_t__ last_tx_pkts; scalar_t__ last_rx_pkts; int traffic_busy; } ;
struct registry_priv {scalar_t__ busy_thresh; } ;
struct mlme_priv {struct sitesurvey_ctrl sitesurveyctrl; } ;
struct TYPE_4__ {scalar_t__ rx_pkts; } ;
struct TYPE_3__ {scalar_t__ tx_pkts; } ;
struct _adapter {TYPE_2__ recvpriv; TYPE_1__ xmitpriv; struct registry_priv registrypriv; struct mlme_priv mlmepriv; } ;



void FUNC_0(struct _adapter *VAR_0)
{
 struct mlme_priv *VAR_1 = &VAR_0->mlmepriv;
 struct sitesurvey_ctrl *VAR_2 = &VAR_1->sitesurveyctrl;
 struct registry_priv *VAR_3 = &VAR_0->registrypriv;
 u64 VAR_4;
 uint VAR_5;

 VAR_4 = (VAR_0->xmitpriv.tx_pkts) -
     (VAR_2->last_tx_pkts);
 VAR_5 = (VAR_0->recvpriv.rx_pkts) -
     (VAR_2->last_rx_pkts);
 VAR_2->last_tx_pkts = VAR_0->xmitpriv.tx_pkts;
 VAR_2->last_rx_pkts = VAR_0->recvpriv.rx_pkts;
 if ((VAR_4 > VAR_3->busy_thresh) ||
     (VAR_5 > VAR_3->busy_thresh))
  VAR_2->traffic_busy = 1;
 else
  VAR_2->traffic_busy = 0;
}
