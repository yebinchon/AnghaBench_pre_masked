
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rx_pkt_attrib {int signal_strength; } ;
struct TYPE_4__ {struct rx_pkt_attrib attrib; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
typedef int u32 ;
struct smooth_rssi_data {size_t total_num; int* elements; size_t index; int total_val; } ;
struct TYPE_6__ {scalar_t__ rssi; struct smooth_rssi_data signal_strength_data; } ;
struct _adapter {TYPE_3__ recvpriv; } ;
typedef scalar_t__ s8 ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct _adapter*,int ) ;

__attribute__((used)) static void FUNC_1(struct _adapter *VAR_1, union recv_frame *VAR_2)
{
 u32 VAR_3, VAR_4;
 struct rx_pkt_attrib *VAR_5 = &VAR_2->u.hdr.attrib;
 struct smooth_rssi_data *VAR_6 = &VAR_1->recvpriv.signal_strength_data;

 if (VAR_6->total_num++ >= VAR_0) {
  VAR_6->total_num = VAR_0;
  VAR_3 = VAR_6->elements[VAR_6->index];
  VAR_6->total_val -= VAR_3;
 }
 VAR_6->total_val += VAR_5->signal_strength;
 VAR_6->elements[VAR_6->index++] = VAR_5->signal_strength;
 if (VAR_6->index >= VAR_0)
  VAR_6->index = 0;
 VAR_4 = VAR_6->total_val / VAR_6->total_num;
 VAR_1->recvpriv.rssi = (s8)FUNC_0(VAR_1, (u8)VAR_4);
}
