
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {int src; } ;
struct TYPE_3__ {struct rx_pkt_attrib attrib; int * rx_data; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
struct sta_priv {int dummy; } ;
struct sta_info {int state; } ;
struct adapter {struct sta_priv stapriv; } ;


 unsigned char FUNC_0 (int *) ;
 int VAR_0 ;
 struct sta_info* FUNC_1 (struct sta_priv*,int ) ;
 int FUNC_2 (struct adapter*,struct sta_info*) ;
 int FUNC_3 (struct adapter*,struct sta_info*) ;

void FUNC_4(struct adapter *VAR_1, union recv_frame *VAR_2)
{
 unsigned char VAR_3;
 u8 *VAR_4 = VAR_2->u.hdr.rx_data;
 struct rx_pkt_attrib *VAR_5 = &VAR_2->u.hdr.attrib;
 struct sta_priv *VAR_6 = &VAR_1->stapriv;
 struct sta_info *VAR_7 = ((void*)0);

 VAR_7 = FUNC_1(VAR_6, VAR_5->src);

 VAR_3 = FUNC_0(VAR_4);

 if (VAR_7) {
  if (VAR_3) {
   if (!(VAR_7->state & VAR_0)) {



    FUNC_2(VAR_1, VAR_7);


   }
  } else {
   if (VAR_7->state & VAR_0) {



    FUNC_3(VAR_1, VAR_7);


   }
  }

 }
}
