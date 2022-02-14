
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_direct_req {scalar_t__ count; int completion; TYPE_1__* iocb; scalar_t__ error; struct inode* inode; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int (* ki_complete ) (TYPE_1__*,long,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct nfs_direct_req*) ;
 int FUNC_4 (TYPE_1__*,long,int ) ;

__attribute__((used)) static void FUNC_5(struct nfs_direct_req *VAR_0)
{
 struct inode *VAR_1 = VAR_0->inode;

 FUNC_2(VAR_1);

 if (VAR_0->iocb) {
  long VAR_2 = (long) VAR_0->error;
  if (VAR_0->count != 0) {
   VAR_2 = (long) VAR_0->count;
   FUNC_0(VAR_0->count < 0);
  }
  VAR_0->iocb->ki_complete(VAR_0->iocb, VAR_2, 0);
 }

 FUNC_1(&VAR_0->completion);

 FUNC_3(VAR_0);
}
