
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {int priority; int src; } ;
struct TYPE_3__ {struct rx_pkt_attrib attrib; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
typedef int u16 ;
struct sta_priv {int dummy; } ;
struct sta_info {int qos_info; int state; int uapsd_bk; int uapsd_vi; int uapsd_vo; int uapsd_be; scalar_t__ sleepq_ac_len; int hwaddr; int qos_option; } ;
struct adapter {struct sta_priv stapriv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,int ,int ,int ,int ) ;
 struct sta_info* FUNC_2 (struct sta_priv*,int ) ;
 int FUNC_3 (struct adapter*,struct sta_info*) ;

void FUNC_4(struct adapter *VAR_1, union recv_frame *VAR_2)
{
 struct rx_pkt_attrib *VAR_3 = &VAR_2->u.hdr.attrib;
 struct sta_priv *VAR_4 = &VAR_1->stapriv;
 struct sta_info *VAR_5 = ((void*)0);

 VAR_5 = FUNC_2(VAR_4, VAR_3->src);

 if (!VAR_5)
  return;

 if (!VAR_5->qos_option)
  return;

 if (!(VAR_5->qos_info&0xf))
  return;

 if (VAR_5->state&VAR_0) {
  u8 VAR_6 = 0;

  switch (VAR_3->priority) {
  case 1:
  case 2:
   VAR_6 = VAR_5->uapsd_bk&FUNC_0(1);
   break;
  case 4:
  case 5:
   VAR_6 = VAR_5->uapsd_vi&FUNC_0(1);
   break;
  case 6:
  case 7:
   VAR_6 = VAR_5->uapsd_vo&FUNC_0(1);
   break;
  case 0:
  case 3:
  default:
   VAR_6 = VAR_5->uapsd_be&FUNC_0(1);
   break;
  }

  if (VAR_6) {
   if (VAR_5->sleepq_ac_len > 0)

    FUNC_3(VAR_1, VAR_5);
   else

    FUNC_1(VAR_1, VAR_5->hwaddr, (u16)VAR_3->priority, 0, 0);
  }
 }
}
