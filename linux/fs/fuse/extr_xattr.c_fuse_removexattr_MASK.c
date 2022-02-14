
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_conn {int no_removexattr; } ;
struct TYPE_6__ {int in_numargs; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_5__ {char const* value; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct fuse_conn*,TYPE_2__*) ;
 int FUNC_3 (struct inode*) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (char const*) ;

int FUNC_7(struct inode *VAR_4, const char *VAR_5)
{
 struct fuse_conn *VAR_6 = FUNC_4(VAR_4);
 FUNC_0(VAR_3);
 int VAR_7;

 if (VAR_6->no_removexattr)
  return -VAR_1;

 VAR_3.opcode = VAR_2;
 VAR_3.nodeid = FUNC_5(VAR_4);
 VAR_3.in_numargs = 1;
 VAR_3.in_args[0].size = FUNC_6(VAR_5) + 1;
 VAR_3.in_args[0].value = VAR_5;
 VAR_7 = FUNC_2(VAR_6, &VAR_3);
 if (VAR_7 == -VAR_0) {
  VAR_6->no_removexattr = 1;
  VAR_7 = -VAR_1;
 }
 if (!VAR_7) {
  FUNC_1(VAR_4);
  FUNC_3(VAR_4);
 }
 return VAR_7;
}
