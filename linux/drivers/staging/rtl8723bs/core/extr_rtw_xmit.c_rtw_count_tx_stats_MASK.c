
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xmit_priv {int tx_bytes; int tx_pkts; } ;
struct TYPE_4__ {struct sta_info* psta; } ;
struct xmit_frame {int frame_tag; int agg_num; TYPE_2__ attrib; } ;
struct stainfo_stats {int tx_bytes; int tx_pkts; } ;
struct sta_info {struct stainfo_stats sta_stats; } ;
struct TYPE_3__ {int NumTxOkInPeriod; } ;
struct mlme_priv {TYPE_1__ LinkDetectInfo; } ;
struct adapter {struct mlme_priv mlmepriv; struct xmit_priv xmitpriv; } ;


 int VAR_0 ;

void FUNC_0(struct adapter *VAR_1, struct xmit_frame *VAR_2, int VAR_3)
{
 struct sta_info *VAR_4 = ((void*)0);
 struct stainfo_stats *VAR_5 = ((void*)0);
 struct xmit_priv *VAR_6 = &VAR_1->xmitpriv;
 struct mlme_priv *VAR_7 = &VAR_1->mlmepriv;
 u8 VAR_8 = 1;

 if ((VAR_2->frame_tag&0x0f) == VAR_0) {
  VAR_8 = VAR_2->agg_num;

  VAR_7->LinkDetectInfo.NumTxOkInPeriod += VAR_8;

  VAR_6->tx_pkts += VAR_8;

  VAR_6->tx_bytes += VAR_3;

  VAR_4 = VAR_2->attrib.psta;
  if (VAR_4) {
   VAR_5 = &VAR_4->sta_stats;

   VAR_5->tx_pkts += VAR_8;

   VAR_5->tx_bytes += VAR_3;
  }
 }
}
