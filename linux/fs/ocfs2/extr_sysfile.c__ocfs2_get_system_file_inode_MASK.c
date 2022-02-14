
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int sys_root_inode; } ;
struct inode {int dummy; } ;
typedef int namebuf ;
struct TYPE_7__ {int * key; } ;
struct TYPE_5__ {TYPE_3__ l_lockdep_map; } ;
struct TYPE_8__ {TYPE_1__ ip_inode_lockres; } ;
struct TYPE_6__ {int si_name; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_4 (int ) ;
 struct inode* FUNC_5 (struct ocfs2_super*,int ,int ,int) ;
 int FUNC_6 (int ,char*,int ,int *) ;
 int FUNC_7 (char*,int,int,int ) ;
 int * VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static struct inode * FUNC_9(struct ocfs2_super *VAR_6,
         int VAR_7,
         u32 VAR_8)
{
 char VAR_9[40];
 struct inode *VAR_10 = ((void*)0);
 u64 VAR_11;
 int VAR_12 = 0;

 FUNC_7(VAR_9,
     sizeof(VAR_9),
     VAR_7, VAR_8);

 VAR_12 = FUNC_6(VAR_6->sys_root_inode, VAR_9,
         FUNC_8(VAR_9), &VAR_11);
 if (VAR_12 < 0) {
  goto bail;
 }

 VAR_10 = FUNC_5(VAR_6, VAR_11, VAR_3, VAR_7);
 if (FUNC_0(VAR_10)) {
  FUNC_4(FUNC_2(VAR_10));
  VAR_10 = ((void*)0);
  goto bail;
 }
bail:

 return VAR_10;
}
