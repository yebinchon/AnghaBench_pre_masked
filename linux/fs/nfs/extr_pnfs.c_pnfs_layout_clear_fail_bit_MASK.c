
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int plh_refcount; int plh_flags; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static void
FUNC_2(struct pnfs_layout_hdr *VAR_0, int VAR_1)
{
 if (FUNC_1(VAR_1, &VAR_0->plh_flags))
  FUNC_0(&VAR_0->plh_refcount);
}
