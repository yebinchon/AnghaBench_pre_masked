
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layout_hdr {int plh_inode; int plh_flags; } ;
struct TYPE_2__ {int roc_rpcwaitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct pnfs_layout_hdr *VAR_2)
{
 FUNC_2(VAR_0, &VAR_2->plh_flags);
 FUNC_1(VAR_1, &VAR_2->plh_flags);
 FUNC_4();
 FUNC_5(&VAR_2->plh_flags, VAR_0);
 FUNC_3(&FUNC_0(VAR_2->plh_inode)->roc_rpcwaitq);
}
