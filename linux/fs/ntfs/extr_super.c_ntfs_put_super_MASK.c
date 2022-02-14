
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int * s_fs_info; } ;
struct TYPE_6__ {int major_ver; int cluster_size; int nls_map; int * upcase; scalar_t__ upcase_len; int * attrdef; scalar_t__ attrdef_size; int * mft_ino; int * mftmirr_ino; int * logfile_ino; int mftbmp_lock; int * mftbmp_ino; int lcnbmp_lock; int * lcnbmp_ino; int * root_ino; int * secure_ino; int * extend_ino; int * quota_ino; int * quota_q_ino; int * usnjrnl_ino; int * usnjrnl_max_ino; int * usnjrnl_j_ino; int * vol_ino; } ;
typedef TYPE_1__ ntfs_volume ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (struct super_block*,char*) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;

__attribute__((used)) static void FUNC_17(struct super_block *VAR_5)
{
 ntfs_volume *VAR_6 = FUNC_0(VAR_5);

 FUNC_10("Entering.");
 FUNC_4(VAR_6->vol_ino);
 VAR_6->vol_ino = ((void*)0);


 if (VAR_6->major_ver >= 3) {
  if (VAR_6->extend_ino) {
   FUNC_4(VAR_6->extend_ino);
   VAR_6->extend_ino = ((void*)0);
  }
  if (VAR_6->secure_ino) {
   FUNC_4(VAR_6->secure_ino);
   VAR_6->secure_ino = ((void*)0);
  }
 }

 FUNC_4(VAR_6->root_ino);
 VAR_6->root_ino = ((void*)0);

 FUNC_2(&VAR_6->lcnbmp_lock);
 FUNC_4(VAR_6->lcnbmp_ino);
 VAR_6->lcnbmp_ino = ((void*)0);
 FUNC_15(&VAR_6->lcnbmp_lock);

 FUNC_2(&VAR_6->mftbmp_lock);
 FUNC_4(VAR_6->mftbmp_ino);
 VAR_6->mftbmp_ino = ((void*)0);
 FUNC_15(&VAR_6->mftbmp_lock);
 FUNC_4(VAR_6->mft_ino);
 VAR_6->mft_ino = ((void*)0);


 VAR_6->attrdef_size = 0;
 if (VAR_6->attrdef) {
  FUNC_11(VAR_6->attrdef);
  VAR_6->attrdef = ((void*)0);
 }
 VAR_6->upcase_len = 0;




 FUNC_6(&VAR_2);
 if (VAR_6->upcase == VAR_1) {
  VAR_4--;
  VAR_6->upcase = ((void*)0);
 }
 if (!VAR_4 && VAR_1) {
  FUNC_11(VAR_1);
  VAR_1 = ((void*)0);
 }
 if (VAR_6->cluster_size <= 4096 && !--VAR_3)
  FUNC_3();
 FUNC_7(&VAR_2);
 if (VAR_6->upcase) {
  FUNC_11(VAR_6->upcase);
  VAR_6->upcase = ((void*)0);
 }

 FUNC_14(VAR_6->nls_map);

 VAR_5->s_fs_info = ((void*)0);
 FUNC_5(VAR_6);
}
