
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nilfs_sc_info {int sc_flags; int sc_binfo_ptr; int sc_finfo_ptr; TYPE_2__* sc_curseg; } ;
struct nilfs_finfo {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {scalar_t__ i_root; } ;
struct TYPE_4__ {int nfinfo; } ;
struct TYPE_5__ {TYPE_1__ sb_sum; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct nilfs_sc_info*,int *,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct nilfs_sc_info *VAR_1,
          struct inode *VAR_2)
{
 VAR_1->sc_curseg->sb_sum.nfinfo++;
 VAR_1->sc_binfo_ptr = VAR_1->sc_finfo_ptr;
 FUNC_1(
  VAR_1, &VAR_1->sc_binfo_ptr, sizeof(struct nilfs_finfo));

 if (FUNC_0(VAR_2)->i_root &&
     !FUNC_3(VAR_0, &VAR_1->sc_flags))
  FUNC_2(VAR_0, &VAR_1->sc_flags);

}
