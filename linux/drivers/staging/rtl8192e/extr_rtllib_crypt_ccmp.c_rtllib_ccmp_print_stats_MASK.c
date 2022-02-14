
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rtllib_ccmp_data {int dot11RSNAStatsCCMPDecryptErrors; int dot11RSNAStatsCCMPReplays; int dot11RSNAStatsCCMPFormatErrors; int rx_pn; int tx_pn; int key_set; int key_idx; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct rtllib_ccmp_data *VAR_2 = VAR_1;

 FUNC_0(VAR_0,
     "key[%d] alg=CCMP key_set=%d tx_pn=%pM rx_pn=%pM format_errors=%d replays=%d decrypt_errors=%d\n",
     VAR_2->key_idx, VAR_2->key_set,
     VAR_2->tx_pn, VAR_2->rx_pn,
     VAR_2->dot11RSNAStatsCCMPFormatErrors,
     VAR_2->dot11RSNAStatsCCMPReplays,
     VAR_2->dot11RSNAStatsCCMPDecryptErrors);
}
