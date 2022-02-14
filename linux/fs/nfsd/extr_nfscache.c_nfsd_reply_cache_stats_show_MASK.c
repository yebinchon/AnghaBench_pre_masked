
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct nfsd_net* private; } ;
struct nfsd_net {int max_drc_entries; int maskbits; int drc_mem_usage; int payload_misses; int longest_chain; int longest_chain_cachesize; int num_drc_entries; } ;
struct TYPE_2__ {int rchits; int rcmisses; int rcnocache; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct nfsd_net *VAR_3 = VAR_1->private;

 FUNC_1(VAR_1, "max entries:           %u\n", VAR_3->max_drc_entries);
 FUNC_1(VAR_1, "num entries:           %u\n",
   FUNC_0(&VAR_3->num_drc_entries));
 FUNC_1(VAR_1, "hash buckets:          %u\n", 1 << VAR_3->maskbits);
 FUNC_1(VAR_1, "mem usage:             %u\n", VAR_3->drc_mem_usage);
 FUNC_1(VAR_1, "cache hits:            %u\n", VAR_0.rchits);
 FUNC_1(VAR_1, "cache misses:          %u\n", VAR_0.rcmisses);
 FUNC_1(VAR_1, "not cached:            %u\n", VAR_0.rcnocache);
 FUNC_1(VAR_1, "payload misses:        %u\n", VAR_3->payload_misses);
 FUNC_1(VAR_1, "longest chain len:     %u\n", VAR_3->longest_chain);
 FUNC_1(VAR_1, "cachesize at longest:  %u\n", VAR_3->longest_chain_cachesize);
 return 0;
}
