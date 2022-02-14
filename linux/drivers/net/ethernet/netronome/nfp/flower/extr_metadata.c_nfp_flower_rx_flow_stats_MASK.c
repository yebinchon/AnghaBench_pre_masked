
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct nfp_flower_priv {int stats_lock; TYPE_1__* stats; } ;
struct nfp_fl_stats_frame {int byte_count; int pkt_count; int stats_con_id; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct TYPE_2__ {int used; int bytes; int pkts; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned char* FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct nfp_app *VAR_1, struct sk_buff *VAR_2)
{
 unsigned int VAR_3 = FUNC_3(VAR_2);
 struct nfp_flower_priv *VAR_4 = VAR_1->priv;
 struct nfp_fl_stats_frame *VAR_5;
 unsigned char *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_2);

 FUNC_4(&VAR_4->stats_lock);
 for (VAR_8 = 0; VAR_8 < VAR_3 / sizeof(*VAR_5); VAR_8++) {
  VAR_5 = (struct nfp_fl_stats_frame *)VAR_6 + VAR_8;
  VAR_7 = FUNC_0(VAR_5->stats_con_id);
  VAR_4->stats[VAR_7].pkts += FUNC_0(VAR_5->pkt_count);
  VAR_4->stats[VAR_7].bytes += FUNC_1(VAR_5->byte_count);
  VAR_4->stats[VAR_7].used = VAR_0;
 }
 FUNC_5(&VAR_4->stats_lock);
}
