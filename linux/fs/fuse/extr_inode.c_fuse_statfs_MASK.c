
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct kstatfs {int f_type; } ;
struct fuse_statfs_out {int st; } ;
struct fuse_conn {int dummy; } ;
struct dentry {struct super_block* d_sb; } ;
typedef int outarg ;
struct TYPE_6__ {int out_numargs; TYPE_1__* out_args; int nodeid; int opcode; scalar_t__ in_numargs; } ;
struct TYPE_5__ {int size; struct fuse_statfs_out* value; } ;


 int FUNC_0 (TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct kstatfs*,int *) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct fuse_conn*) ;
 int FUNC_4 (struct fuse_conn*,TYPE_2__*) ;
 struct fuse_conn* FUNC_5 (struct super_block*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct fuse_statfs_out*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_3, struct kstatfs *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->d_sb;
 struct fuse_conn *VAR_6 = FUNC_5(VAR_5);
 FUNC_0(VAR_2);
 struct fuse_statfs_out VAR_7;
 int VAR_8;

 if (!FUNC_3(VAR_6)) {
  VAR_4->f_type = VAR_1;
  return 0;
 }

 FUNC_7(&VAR_7, 0, sizeof(VAR_7));
 VAR_2.in_numargs = 0;
 VAR_2.opcode = VAR_0;
 VAR_2.nodeid = FUNC_6(FUNC_2(VAR_3));
 VAR_2.out_numargs = 1;
 VAR_2.out_args[0].size = sizeof(VAR_7);
 VAR_2.out_args[0].value = &VAR_7;
 VAR_8 = FUNC_4(VAR_6, &VAR_2);
 if (!VAR_8)
  FUNC_1(VAR_4, &VAR_7.st);
 return VAR_8;
}
