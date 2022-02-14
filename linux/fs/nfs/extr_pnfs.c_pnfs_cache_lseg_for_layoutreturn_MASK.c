
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iomode; } ;
struct pnfs_layout_segment {int pls_list; TYPE_1__ pls_range; int pls_flags; } ;
struct pnfs_layout_hdr {int plh_return_segs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct pnfs_layout_hdr*) ;
 int FUNC_2 (struct pnfs_layout_hdr*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool
FUNC_4(struct pnfs_layout_hdr *VAR_1,
  struct pnfs_layout_segment *VAR_2)
{
 if (FUNC_3(VAR_0, &VAR_2->pls_flags) &&
     FUNC_1(VAR_1)) {
  FUNC_2(VAR_1, VAR_2->pls_range.iomode, 0);
  FUNC_0(&VAR_2->pls_list, &VAR_1->plh_return_segs);
  return 1;
 }
 return 0;
}
