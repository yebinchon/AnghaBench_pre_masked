
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct dpaa2_eth_priv {int num_channels; struct dpaa2_eth_channel** channel; TYPE_1__* net_dev; } ;
struct TYPE_6__ {char* dequeue_portal_busy; char* cdan; } ;
struct TYPE_5__ {char* desired_cpu; } ;
struct dpaa2_eth_channel {char* ch_id; char* buf_count; TYPE_3__ stats; TYPE_2__ nctx; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct seq_file*,char*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct dpaa2_eth_priv *VAR_2 = (struct dpaa2_eth_priv *)VAR_0->private;
 struct dpaa2_eth_channel *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0, "Channel stats for %s:\n", VAR_2->net_dev->name);
 FUNC_0(VAR_0, "%s%16s%16s%16s%16s\n",
     "CHID", "CPU", "Deq busy", "CDANs", "Buf count");

 for (VAR_4 = 0; VAR_4 < VAR_2->num_channels; VAR_4++) {
  VAR_3 = VAR_2->channel[VAR_4];
  FUNC_0(VAR_0, "%4d%16d%16llu%16llu%16d\n",
      VAR_3->ch_id,
      VAR_3->nctx.desired_cpu,
      VAR_3->stats.dequeue_portal_busy,
      VAR_3->stats.cdan,
      VAR_3->buf_count);
 }

 return 0;
}
