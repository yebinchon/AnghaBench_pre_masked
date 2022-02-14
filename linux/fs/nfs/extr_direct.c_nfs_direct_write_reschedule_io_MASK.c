
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int committed; } ;
struct nfs_pgio_header {TYPE_2__ args; int good_bytes; TYPE_1__ verf; struct nfs_direct_req* dreq; } ;
struct nfs_direct_req {scalar_t__ error; int lock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfs_pgio_header *VAR_2)
{
 struct nfs_direct_req *VAR_3 = VAR_2->dreq;

 FUNC_0(&VAR_3->lock);
 if (VAR_3->error == 0) {
  VAR_3->flags = VAR_0;

  VAR_2->verf.committed = VAR_1;
  VAR_2->good_bytes = VAR_2->args.count;
 }
 FUNC_1(&VAR_3->lock);
}
