
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_layout_seg {scalar_t__ iomode; scalar_t__ offset; } ;
struct nfs4_layout {struct nfsd4_layout_seg lo_seg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nfsd4_layout_seg*) ;

__attribute__((used)) static bool
FUNC_1(struct nfs4_layout *VAR_1, struct nfsd4_layout_seg *VAR_2)
{
 if (VAR_2->iomode != VAR_0 && VAR_2->iomode != VAR_1->lo_seg.iomode)
  return 0;
 if (FUNC_0(&VAR_1->lo_seg) <= VAR_2->offset)
  return 0;
 if (FUNC_0(VAR_2) <= VAR_1->lo_seg.offset)
  return 0;
 return 1;
}
