
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rx_pkt_attrib {int dst; } ;
struct TYPE_7__ {struct sta_info* psta; struct rx_pkt_attrib attrib; } ;
struct TYPE_8__ {TYPE_3__ hdr; } ;
union recv_frame {TYPE_4__ u; } ;
struct stainfo_stats {int rx_bytes; int rx_data_pkts; } ;
struct sta_info {struct stainfo_stats sta_stats; } ;
struct recv_priv {int rx_bytes; } ;
struct TYPE_5__ {int NumRxUnicastOkInPeriod; int NumRxOkInPeriod; } ;
struct TYPE_6__ {TYPE_1__ LinkDetectInfo; } ;
struct adapter {TYPE_2__ mlmepriv; struct recv_priv recvpriv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union recv_frame*) ;
 int FUNC_3 (struct adapter*,int,int ) ;

void FUNC_4(struct adapter *VAR_0, union recv_frame *VAR_1, struct sta_info *VAR_2)
{
 int VAR_3;
 struct sta_info *VAR_4 = ((void*)0);
 struct stainfo_stats *VAR_5 = ((void*)0);
 struct rx_pkt_attrib *VAR_6 = &VAR_1->u.hdr.attrib;
 struct recv_priv *VAR_7 = &VAR_0->recvpriv;

 VAR_3 = FUNC_2(VAR_1);
 VAR_7->rx_bytes += VAR_3;

 VAR_0->mlmepriv.LinkDetectInfo.NumRxOkInPeriod++;

 if ((!FUNC_1(VAR_6->dst)) && (!FUNC_0(VAR_6->dst))) {
  VAR_0->mlmepriv.LinkDetectInfo.NumRxUnicastOkInPeriod++;
 }

 if (VAR_2)
  VAR_4 = VAR_2;
 else
  VAR_4 = VAR_1->u.hdr.psta;

 if (VAR_4) {
  VAR_5 = &VAR_4->sta_stats;

  VAR_5->rx_data_pkts++;
  VAR_5->rx_bytes += VAR_3;
 }

 FUNC_3(VAR_0, 0, 0);
}
