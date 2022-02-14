
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_3__ {unsigned int offset; scalar_t__ count; } ;
struct TYPE_4__ {unsigned int count; scalar_t__ eof; } ;
struct nfs_pgio_header {unsigned int io_start; unsigned int good_bytes; TYPE_1__ args; TYPE_2__ res; int flags; } ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rpc_task*,struct nfs_pgio_header*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_2,
    struct nfs_pgio_header *VAR_3)
{
 if (VAR_3->res.eof) {
  loff_t VAR_4 = VAR_3->args.offset + VAR_3->res.count;
  unsigned int VAR_5 = VAR_4 - VAR_3->io_start;

  if (VAR_3->good_bytes > VAR_5) {
   VAR_3->good_bytes = VAR_5;
   FUNC_2(VAR_0, &VAR_3->flags);
   FUNC_0(VAR_1, &VAR_3->flags);
  }
 } else if (VAR_3->res.count < VAR_3->args.count)
  FUNC_1(VAR_2, VAR_3);
}
