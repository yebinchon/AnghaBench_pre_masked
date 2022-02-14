
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_lock_res {int * l_name; } ;
struct ocfs2_dentry_lock {struct ocfs2_lock_res dl_lockres; } ;
struct inode {int i_sb; } ;
typedef int __be64 ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,struct ocfs2_lock_res*,int ,int *,struct ocfs2_dentry_lock*) ;
 int FUNC_6 (struct ocfs2_lock_res*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int,char*,int,long long) ;

void FUNC_9(struct ocfs2_dentry_lock *VAR_3,
    u64 VAR_4, struct inode *VAR_5)
{
 int VAR_6;
 u64 VAR_7 = FUNC_1(VAR_5)->ip_blkno;
 __be64 VAR_8 = FUNC_3(VAR_7);
 struct ocfs2_lock_res *VAR_9 = &VAR_3->dl_lockres;

 FUNC_6(VAR_9);
 VAR_6 = FUNC_8(VAR_9->l_name, VAR_0,
         "%c%016llx",
         FUNC_7(VAR_1),
         (long long)VAR_4);

 FUNC_0(VAR_6 != (VAR_0 - 1));

 FUNC_4(&VAR_9->l_name[VAR_0], &VAR_8,
        sizeof(__be64));

 FUNC_5(FUNC_2(VAR_5->i_sb), VAR_9,
       VAR_1, &VAR_2,
       VAR_3);
}
