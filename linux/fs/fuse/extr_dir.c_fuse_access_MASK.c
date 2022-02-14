
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_conn {int no_access; } ;
struct fuse_access_in {int mask; } ;
typedef int inarg ;
struct TYPE_6__ {int in_numargs; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_5__ {int size; struct fuse_access_in* value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (struct fuse_conn*,TYPE_2__*) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct fuse_access_in*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_7, int VAR_8)
{
 struct fuse_conn *VAR_9 = FUNC_3(VAR_7);
 FUNC_1(VAR_6);
 struct fuse_access_in VAR_10;
 int VAR_11;

 FUNC_0(VAR_8 & VAR_3);

 if (VAR_9->no_access)
  return 0;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.mask = VAR_8 & (VAR_4 | VAR_5 | VAR_2);
 VAR_6.opcode = VAR_1;
 VAR_6.nodeid = FUNC_4(VAR_7);
 VAR_6.in_numargs = 1;
 VAR_6.in_args[0].size = sizeof(VAR_10);
 VAR_6.in_args[0].value = &VAR_10;
 VAR_11 = FUNC_2(VAR_9, &VAR_6);
 if (VAR_11 == -VAR_0) {
  VAR_9->no_access = 1;
  VAR_11 = 0;
 }
 return VAR_11;
}
