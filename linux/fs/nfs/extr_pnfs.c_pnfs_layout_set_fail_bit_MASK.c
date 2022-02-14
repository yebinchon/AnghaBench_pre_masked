
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int plh_refcount; int plh_flags; int plh_retry_timestamp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void
FUNC_2(struct pnfs_layout_hdr *VAR_1, int VAR_2)
{
 VAR_1->plh_retry_timestamp = VAR_0;
 if (!FUNC_1(VAR_2, &VAR_1->plh_flags))
  FUNC_0(&VAR_1->plh_refcount);
}
