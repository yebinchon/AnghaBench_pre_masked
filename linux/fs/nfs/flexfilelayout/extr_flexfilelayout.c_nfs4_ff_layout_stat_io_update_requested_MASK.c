
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_io_stat {int bytes_requested; int ops_requested; } ;
struct nfs4_ff_layoutstat {struct nfs4_ff_io_stat io_stat; } ;
typedef scalar_t__ __u64 ;



__attribute__((used)) static void
FUNC_0(struct nfs4_ff_layoutstat *VAR_0,
  __u64 VAR_1)
{
 struct nfs4_ff_io_stat *VAR_2 = &VAR_0->io_stat;

 VAR_2->ops_requested++;
 VAR_2->bytes_requested += VAR_1;
}
