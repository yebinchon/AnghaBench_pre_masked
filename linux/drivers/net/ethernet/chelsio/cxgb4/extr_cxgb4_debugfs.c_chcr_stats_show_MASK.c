
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct adapter* private; } ;
struct TYPE_2__ {int ipsec_cnt; int fallback; int error; int complete; int aead_rqst; int digest_rqst; int cipher_rqst; } ;
struct adapter {TYPE_1__ chcr_stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct adapter *VAR_2 = VAR_0->private;

 FUNC_2(VAR_0, "Chelsio Crypto Accelerator Stats \n");
 FUNC_1(VAR_0, "Cipher Ops: %10u \n",
     FUNC_0(&VAR_2->chcr_stats.cipher_rqst));
 FUNC_1(VAR_0, "Digest Ops: %10u \n",
     FUNC_0(&VAR_2->chcr_stats.digest_rqst));
 FUNC_1(VAR_0, "Aead Ops: %10u \n",
     FUNC_0(&VAR_2->chcr_stats.aead_rqst));
 FUNC_1(VAR_0, "Completion: %10u \n",
     FUNC_0(&VAR_2->chcr_stats.complete));
 FUNC_1(VAR_0, "Error: %10u \n",
     FUNC_0(&VAR_2->chcr_stats.error));
 FUNC_1(VAR_0, "Fallback: %10u \n",
     FUNC_0(&VAR_2->chcr_stats.fallback));
 FUNC_1(VAR_0, "IPSec PDU: %10u\n",
     FUNC_0(&VAR_2->chcr_stats.ipsec_cnt));
 return 0;
}
