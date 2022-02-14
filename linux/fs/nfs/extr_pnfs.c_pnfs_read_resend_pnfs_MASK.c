
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tk_status; } ;
struct nfs_pgio_header {TYPE_1__ task; int completion_ops; int inode; int * lseg; int flags; } ;
struct nfs_pageio_descriptor {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_pageio_descriptor*,int ,int,int ) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct nfs_pgio_header *VAR_1)
{
 struct nfs_pageio_descriptor VAR_2;

 if (!FUNC_3(VAR_0, &VAR_1->flags)) {

  FUNC_2(VAR_1->lseg);
  VAR_1->lseg = ((void*)0);

  FUNC_0(&VAR_2, VAR_1->inode, 0,
     VAR_1->completion_ops);
  VAR_1->task.tk_status = FUNC_1(&VAR_2, VAR_1);
 }
}
