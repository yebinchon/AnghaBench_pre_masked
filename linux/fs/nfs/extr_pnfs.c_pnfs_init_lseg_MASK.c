
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_range {int dummy; } ;
struct pnfs_layout_segment {int pls_seq; struct pnfs_layout_range pls_range; struct pnfs_layout_hdr* pls_layout; int pls_flags; int pls_refcount; int pls_lc_list; int pls_list; } ;
struct pnfs_layout_hdr {int dummy; } ;
struct TYPE_3__ {int seqid; } ;
typedef TYPE_1__ nfs4_stateid ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct pnfs_layout_hdr *VAR_1, struct pnfs_layout_segment *VAR_2,
  const struct pnfs_layout_range *VAR_3,
  const nfs4_stateid *VAR_4)
{
 FUNC_0(&VAR_2->pls_list);
 FUNC_0(&VAR_2->pls_lc_list);
 FUNC_2(&VAR_2->pls_refcount, 1);
 FUNC_3(VAR_0, &VAR_2->pls_flags);
 VAR_2->pls_layout = VAR_1;
 VAR_2->pls_range = *VAR_3;
 VAR_2->pls_seq = FUNC_1(VAR_4->seqid);
}
