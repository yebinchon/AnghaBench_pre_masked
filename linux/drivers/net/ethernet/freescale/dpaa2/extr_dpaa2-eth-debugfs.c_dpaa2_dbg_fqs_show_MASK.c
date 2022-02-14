
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* u32 ;
struct seq_file {scalar_t__ private; } ;
struct dpaa2_eth_priv {int num_fqs; struct dpaa2_eth_fq* fq; TYPE_1__* net_dev; } ;
struct TYPE_4__ {char* frames; } ;
struct dpaa2_eth_fq {char* fqid; char* target_cpu; TYPE_2__ stats; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int *,char*,char**,char**) ;
 char* FUNC_1 (struct dpaa2_eth_fq*) ;
 int FUNC_2 (struct seq_file*,char*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct dpaa2_eth_priv *VAR_2 = (struct dpaa2_eth_priv *)VAR_0->private;
 struct dpaa2_eth_fq *VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(VAR_0, "FQ stats for %s:\n", VAR_2->net_dev->name);
 FUNC_2(VAR_0, "%s%16s%16s%16s%16s\n",
     "VFQID", "CPU", "Type", "Frames", "Pending frames");

 for (VAR_6 = 0; VAR_6 < VAR_2->num_fqs; VAR_6++) {
  VAR_3 = &VAR_2->fq[VAR_6];
  VAR_7 = FUNC_0(((void*)0), VAR_3->fqid, &VAR_4, &VAR_5);
  if (VAR_7)
   VAR_4 = 0;

  FUNC_2(VAR_0, "%5d%16d%16s%16llu%16u\n",
      VAR_3->fqid,
      VAR_3->target_cpu,
      FUNC_1(VAR_3),
      VAR_3->stats.frames,
      VAR_4);
 }

 return 0;
}
