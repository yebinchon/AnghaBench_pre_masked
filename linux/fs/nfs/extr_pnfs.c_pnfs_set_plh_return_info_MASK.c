
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pnfs_layout_hdr {scalar_t__ plh_return_iomode; scalar_t__ plh_return_seq; int plh_flags; } ;
typedef enum pnfs_iomode { ____Placeholder_pnfs_iomode } pnfs_iomode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct pnfs_layout_hdr *VAR_2, enum pnfs_iomode VAR_3,
    u32 VAR_4)
{
 if (VAR_2->plh_return_iomode != 0 && VAR_2->plh_return_iomode != VAR_3)
  VAR_3 = VAR_0;
 VAR_2->plh_return_iomode = VAR_3;
 FUNC_1(VAR_1, &VAR_2->plh_flags);
 if (VAR_4 != 0) {
  FUNC_0(VAR_2->plh_return_seq != 0 && VAR_2->plh_return_seq != VAR_4);
  VAR_2->plh_return_seq = VAR_4;
 }
}
