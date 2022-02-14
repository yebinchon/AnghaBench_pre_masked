
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_3__ {int OutPktsProtected; int OutOctetsProtected; int OutPktsEncrypted; int OutOctetsEncrypted; } ;
struct pcpu_tx_sc_stats {int syncp; TYPE_1__ stats; } ;
struct macsec_tx_sc {scalar_t__ encrypt; int stats; } ;
struct macsec_tx_sa {TYPE_2__* stats; } ;
struct TYPE_4__ {int OutPktsProtected; int OutPktsEncrypted; } ;


 int FUNC_0 (int ) ;
 struct pcpu_tx_sc_stats* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0, struct macsec_tx_sc *VAR_1,
       struct macsec_tx_sa *VAR_2)
{
 struct pcpu_tx_sc_stats *VAR_3 = FUNC_1(VAR_1->stats);

 FUNC_2(&VAR_3->syncp);
 if (VAR_1->encrypt) {
  VAR_3->stats.OutOctetsEncrypted += VAR_0->len;
  VAR_3->stats.OutPktsEncrypted++;
  FUNC_0(VAR_2->stats->OutPktsEncrypted);
 } else {
  VAR_3->stats.OutOctetsProtected += VAR_0->len;
  VAR_3->stats.OutPktsProtected++;
  FUNC_0(VAR_2->stats->OutPktsProtected);
 }
 FUNC_3(&VAR_3->syncp);
}
