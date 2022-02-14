
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {int tk_status; } ;
struct TYPE_5__ {int eof; int count; } ;
struct TYPE_6__ {int offset; } ;
struct nfs_pgio_header {TYPE_1__ res; TYPE_2__ args; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int (* read_done ) (struct rpc_task*,struct nfs_pgio_header*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct rpc_task*,struct nfs_pgio_header*) ;
 int FUNC_6 (struct inode*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct rpc_task *VAR_3,
        struct nfs_pgio_header *VAR_4,
        struct inode *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5)->read_done(VAR_3, VAR_4);
 if (VAR_6 != 0)
  return VAR_6;

 FUNC_2(VAR_5, VAR_1, VAR_4->res.count);
 FUNC_6(VAR_5, VAR_3->tk_status,
    VAR_4->args.offset, VAR_4->res.eof);

 if (VAR_3->tk_status == -VAR_0) {
  FUNC_4(VAR_2, &FUNC_0(VAR_5)->flags);
  FUNC_3(VAR_5);
 }
 return 0;
}
