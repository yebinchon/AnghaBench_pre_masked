
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {int pkt_len; } ;
struct TYPE_3__ {int* rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
struct mlme_ext_priv {int sa_query_timer; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,int ,int,unsigned short) ;
 int FUNC_4 (unsigned short*,int*,int) ;
 int FUNC_5 (char*,...) ;

unsigned int FUNC_6(struct adapter *VAR_2, union recv_frame *VAR_3)
{
 u8 *VAR_4 = VAR_3->u.hdr.rx_data;
 struct rx_pkt_attrib *VAR_5 = &VAR_3->u.hdr.attrib;
 struct mlme_ext_priv *VAR_6 = &(VAR_2->mlmeextpriv);
 unsigned short VAR_7;


 FUNC_0("OnAction_sa_query\n");

 switch (VAR_4[VAR_0+1]) {
 case 0:
  FUNC_4(&VAR_7, &VAR_4[VAR_0+2], sizeof(unsigned short));
  FUNC_0("OnAction_sa_query request, action =%d, tid =%04x\n", VAR_4[VAR_0+1], VAR_7);
  FUNC_3(VAR_2, FUNC_1(VAR_4), 1, VAR_7);
  break;

 case 1:
  FUNC_2(&VAR_6->sa_query_timer);
  FUNC_0("OnAction_sa_query response, action =%d, tid =%04x, cancel timer\n", VAR_4[VAR_0+1], VAR_4[VAR_0+2]);
  break;
 default:
  break;
 }
 if (0) {
  int VAR_8;
  FUNC_5("pattrib->pktlen = %d =>", VAR_5->pkt_len);
  for (VAR_8 = 0; VAR_8 < VAR_5->pkt_len; VAR_8++)
   FUNC_5(" %02x ", VAR_4[VAR_8]);
  FUNC_5("\n");
 }

 return VAR_1;
}
