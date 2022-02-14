
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ SignalStrength; } ;
struct rx_pkt_attrib {TYPE_2__ phy_info; } ;
struct TYPE_7__ {struct rx_pkt_attrib attrib; } ;
struct TYPE_8__ {TYPE_3__ hdr; } ;
union recv_frame {TYPE_4__ u; } ;
struct signal_stat {int total_num; int total_val; int avg_val; scalar_t__ update_req; } ;
struct TYPE_5__ {struct signal_stat signal_strength_data; } ;
struct adapter {TYPE_1__ recvpriv; } ;



__attribute__((used)) static void FUNC_0(struct adapter *VAR_0, union recv_frame *VAR_1)
{
 struct rx_pkt_attrib *VAR_2 = &VAR_1->u.hdr.attrib;
 struct signal_stat *VAR_3 = &VAR_0->recvpriv.signal_strength_data;



 {
  if (VAR_3->update_req) {
   VAR_3->total_num = 0;
   VAR_3->total_val = 0;
   VAR_3->update_req = 0;
  }

  VAR_3->total_num++;
  VAR_3->total_val += VAR_2->phy_info.SignalStrength;
  VAR_3->avg_val = VAR_3->total_val / VAR_3->total_num;
 }

}
