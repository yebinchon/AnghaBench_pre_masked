
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {struct brcms_pub* private; } ;
struct macstat {int bphy_badplcp; int phywatchdog; int bphy_rxcrsglitch; int txburst; int txglitch_nack; int txnack; int frmscons; int rxnack; int prs_timeout; int txcgprssuc; int txcgprsfail; int rxcgprsqovfl; int rxcgprqfrm; int pmqovfl; int txsfovfl; int rxf2ovfl; int rxf1ovfl; int rxf0ovfl; int bcntxcancl; int rxrsptmout; int rxbeaconobss; int rxdfrmucastobss; int rxbeaconmbss; int rxcfrmmcast; int rxmfrmmcast; int rxdfrmmcast; int rxctsocast; int rxrtsocast; int rxcfrmocast; int rxmfrmocast; int rxdfrmocast; int rxackucast; int rxctsucast; int rxrtsucast; int rxcfrmucast; int rxmfrmucastmbss; int rxdfrmucastmbss; int rxstrt; int rxcrsglitch; int rxbadplcp; int rxbadfcs; int rxinvmachdr; int rxfrmtooshrt; int rxfrmtoolong; int pktengrxdmcast; int pktengrxducast; int txphyerr; int txtplunfl; int * txfunfl; int txbcnfrm; int txdnlfrm; int txackfrm; int txctsfrm; int txrtsfrm; int txallfrm; } ;
struct brcms_pub {TYPE_3__* wlc; TYPE_1__* ieee_hw; } ;
struct brcms_info {int lock; } ;
struct TYPE_6__ {TYPE_2__* core; } ;
struct TYPE_5__ {struct macstat* macstat_snapshot; } ;
struct TYPE_4__ {struct brcms_info* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct brcms_pub *VAR_2 = VAR_0->private;
 struct brcms_info *VAR_3 = VAR_2->ieee_hw->priv;
 struct macstat VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3->lock);
 VAR_4 = *(VAR_2->wlc->core->macstat_snapshot);
 FUNC_3(&VAR_3->lock);

 FUNC_1(VAR_0, "txallfrm: %d\n", VAR_4.txallfrm);
 FUNC_1(VAR_0, "txrtsfrm: %d\n", VAR_4.txrtsfrm);
 FUNC_1(VAR_0, "txctsfrm: %d\n", VAR_4.txctsfrm);
 FUNC_1(VAR_0, "txackfrm: %d\n", VAR_4.txackfrm);
 FUNC_1(VAR_0, "txdnlfrm: %d\n", VAR_4.txdnlfrm);
 FUNC_1(VAR_0, "txbcnfrm: %d\n", VAR_4.txbcnfrm);
 FUNC_1(VAR_0, "txfunfl[8]:");
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4.txfunfl); VAR_5++)
  FUNC_1(VAR_0, " %d", VAR_4.txfunfl[VAR_5]);
 FUNC_1(VAR_0, "\ntxtplunfl: %d\n", VAR_4.txtplunfl);
 FUNC_1(VAR_0, "txphyerr: %d\n", VAR_4.txphyerr);
 FUNC_1(VAR_0, "pktengrxducast: %d\n", VAR_4.pktengrxducast);
 FUNC_1(VAR_0, "pktengrxdmcast: %d\n", VAR_4.pktengrxdmcast);
 FUNC_1(VAR_0, "rxfrmtoolong: %d\n", VAR_4.rxfrmtoolong);
 FUNC_1(VAR_0, "rxfrmtooshrt: %d\n", VAR_4.rxfrmtooshrt);
 FUNC_1(VAR_0, "rxinvmachdr: %d\n", VAR_4.rxinvmachdr);
 FUNC_1(VAR_0, "rxbadfcs: %d\n", VAR_4.rxbadfcs);
 FUNC_1(VAR_0, "rxbadplcp: %d\n", VAR_4.rxbadplcp);
 FUNC_1(VAR_0, "rxcrsglitch: %d\n", VAR_4.rxcrsglitch);
 FUNC_1(VAR_0, "rxstrt: %d\n", VAR_4.rxstrt);
 FUNC_1(VAR_0, "rxdfrmucastmbss: %d\n", VAR_4.rxdfrmucastmbss);
 FUNC_1(VAR_0, "rxmfrmucastmbss: %d\n", VAR_4.rxmfrmucastmbss);
 FUNC_1(VAR_0, "rxcfrmucast: %d\n", VAR_4.rxcfrmucast);
 FUNC_1(VAR_0, "rxrtsucast: %d\n", VAR_4.rxrtsucast);
 FUNC_1(VAR_0, "rxctsucast: %d\n", VAR_4.rxctsucast);
 FUNC_1(VAR_0, "rxackucast: %d\n", VAR_4.rxackucast);
 FUNC_1(VAR_0, "rxdfrmocast: %d\n", VAR_4.rxdfrmocast);
 FUNC_1(VAR_0, "rxmfrmocast: %d\n", VAR_4.rxmfrmocast);
 FUNC_1(VAR_0, "rxcfrmocast: %d\n", VAR_4.rxcfrmocast);
 FUNC_1(VAR_0, "rxrtsocast: %d\n", VAR_4.rxrtsocast);
 FUNC_1(VAR_0, "rxctsocast: %d\n", VAR_4.rxctsocast);
 FUNC_1(VAR_0, "rxdfrmmcast: %d\n", VAR_4.rxdfrmmcast);
 FUNC_1(VAR_0, "rxmfrmmcast: %d\n", VAR_4.rxmfrmmcast);
 FUNC_1(VAR_0, "rxcfrmmcast: %d\n", VAR_4.rxcfrmmcast);
 FUNC_1(VAR_0, "rxbeaconmbss: %d\n", VAR_4.rxbeaconmbss);
 FUNC_1(VAR_0, "rxdfrmucastobss: %d\n", VAR_4.rxdfrmucastobss);
 FUNC_1(VAR_0, "rxbeaconobss: %d\n", VAR_4.rxbeaconobss);
 FUNC_1(VAR_0, "rxrsptmout: %d\n", VAR_4.rxrsptmout);
 FUNC_1(VAR_0, "bcntxcancl: %d\n", VAR_4.bcntxcancl);
 FUNC_1(VAR_0, "rxf0ovfl: %d\n", VAR_4.rxf0ovfl);
 FUNC_1(VAR_0, "rxf1ovfl: %d\n", VAR_4.rxf1ovfl);
 FUNC_1(VAR_0, "rxf2ovfl: %d\n", VAR_4.rxf2ovfl);
 FUNC_1(VAR_0, "txsfovfl: %d\n", VAR_4.txsfovfl);
 FUNC_1(VAR_0, "pmqovfl: %d\n", VAR_4.pmqovfl);
 FUNC_1(VAR_0, "rxcgprqfrm: %d\n", VAR_4.rxcgprqfrm);
 FUNC_1(VAR_0, "rxcgprsqovfl: %d\n", VAR_4.rxcgprsqovfl);
 FUNC_1(VAR_0, "txcgprsfail: %d\n", VAR_4.txcgprsfail);
 FUNC_1(VAR_0, "txcgprssuc: %d\n", VAR_4.txcgprssuc);
 FUNC_1(VAR_0, "prs_timeout: %d\n", VAR_4.prs_timeout);
 FUNC_1(VAR_0, "rxnack: %d\n", VAR_4.rxnack);
 FUNC_1(VAR_0, "frmscons: %d\n", VAR_4.frmscons);
 FUNC_1(VAR_0, "txnack: %d\n", VAR_4.txnack);
 FUNC_1(VAR_0, "txglitch_nack: %d\n", VAR_4.txglitch_nack);
 FUNC_1(VAR_0, "txburst: %d\n", VAR_4.txburst);
 FUNC_1(VAR_0, "bphy_rxcrsglitch: %d\n", VAR_4.bphy_rxcrsglitch);
 FUNC_1(VAR_0, "phywatchdog: %d\n", VAR_4.phywatchdog);
 FUNC_1(VAR_0, "bphy_badplcp: %d\n", VAR_4.bphy_badplcp);
 return 0;
}
