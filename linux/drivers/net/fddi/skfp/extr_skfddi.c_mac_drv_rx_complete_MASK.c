
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct sk_buff {unsigned char* data; int protocol; } ;
struct TYPE_5__ {struct sk_buff* skb; } ;
struct s_smt_fp_rxd {TYPE_1__ rxd_os; } ;
struct TYPE_6__ {int rx_bytes; int rx_errors; int multicast; int rx_packets; } ;
struct TYPE_7__ {TYPE_2__ gen; } ;
struct TYPE_8__ {TYPE_3__ MacStat; int dev; } ;
struct s_smc {TYPE_4__ os; } ;
typedef TYPE_4__ skfddi_priv ;
typedef int __be16 ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct s_smc*,int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct s_smc*,struct s_smt_fp_rxd volatile*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned short FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

void FUNC_10(struct s_smc *VAR_4, volatile struct s_smt_fp_rxd *VAR_5,
    int VAR_6, int VAR_7)
{
 skfddi_priv *VAR_8 = &VAR_4->os;
 struct sk_buff *VAR_9;
 unsigned char *VAR_10, *VAR_11;
 unsigned short VAR_12;
 u_int VAR_13;

 FUNC_6("entering mac_drv_rx_complete (len=%d)\n", VAR_7);
 if (VAR_6 != 1) {

  FUNC_7("fddi: Multi-fragment receive!\n");
  goto RequeueRxd;

 }
 VAR_9 = VAR_5->rxd_os.skb;
 if (!VAR_9) {
  FUNC_6("No skb in rxd\n");
  VAR_4->os.MacStat.gen.rx_errors++;
  goto RequeueRxd;
 }
 VAR_10 = VAR_9->data;



 FUNC_1(VAR_9->data, VAR_7);
 if ((VAR_10[1 + 6] & VAR_2) == 0)
  VAR_13 = 0;
 else {
  int VAR_14;

  FUNC_6("RIF found\n");

  VAR_11 = VAR_10 + VAR_0;

  VAR_12 = FUNC_5(*((__be16 *) VAR_11));
  VAR_13 = VAR_12 & VAR_1;
  if (VAR_7 < (int) (VAR_0 + VAR_13)) {
   FUNC_7("fddi: Invalid RIF.\n");
   goto RequeueRxd;

  }
  VAR_10[1 + 6] &= ~VAR_2;


  VAR_10 = VAR_11 + VAR_13;
  for (VAR_14 = VAR_0; VAR_14; VAR_14--)
   *--VAR_10 = *--VAR_11;

  FUNC_8(VAR_9, VAR_13);
  VAR_7 -= VAR_13;
  VAR_13 = 0;
 }


 VAR_4->os.MacStat.gen.rx_packets++;

 VAR_4->os.MacStat.gen.rx_bytes+=VAR_7;


 if (VAR_10[1] & 0x01) {

  VAR_4->os.MacStat.gen.multicast++;
 }


 VAR_5->rxd_os.skb = ((void*)0);
 FUNC_9(VAR_9, VAR_7);
 VAR_9->protocol = FUNC_2(VAR_9, VAR_8->dev);

 FUNC_4(VAR_9);

 FUNC_0(VAR_4, VAR_3);
 return;

      RequeueRxd:
 FUNC_6("Rx: re-queue RXD.\n");
 FUNC_3(VAR_4, VAR_5, VAR_6);
 VAR_4->os.MacStat.gen.rx_errors++;


}
