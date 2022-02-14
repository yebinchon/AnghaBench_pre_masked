
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rx_pkt_attrib {scalar_t__ bdecrypted; int encrypt; } ;
struct recv_frame {TYPE_1__* pkt; struct rx_pkt_attrib attrib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int len; int * data; } ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct net_device*,int *,int,int,int) ;
 int FUNC_2 (struct net_device*,int *,int) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0, struct recv_frame *VAR_1)
{
 struct rx_pkt_attrib *VAR_2;
 int VAR_3, VAR_4;
 int VAR_5;
 u8 *VAR_6;

 if (!VAR_0 || !VAR_1)
  return;
 if (!FUNC_3(VAR_0))
  return;

 VAR_2 = &VAR_1->attrib;
 VAR_6 = VAR_1->pkt->data;
 VAR_5 = VAR_1->pkt->len;


 FUNC_0(VAR_3, VAR_4, VAR_2->encrypt);

 if (VAR_2->bdecrypted)
  FUNC_1(VAR_0, VAR_6, VAR_5, VAR_3, VAR_4);
 else
  FUNC_2(VAR_0, VAR_6, VAR_5);
}
