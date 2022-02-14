
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int next; } ;
struct nfs_pgio_mirror {int pg_count; TYPE_1__ pg_list; } ;
struct nfs_pgio_header {void (* release ) (struct nfs_pgio_header*) ;int pgio_mirror_idx; TYPE_2__* completion_ops; int dreq; int io_completion; int good_bytes; int req; int io_start; int cred; int inode; } ;
struct nfs_pageio_descriptor {int pg_mirror_idx; TYPE_2__* pg_completion_ops; int pg_dreq; int pg_io_completion; int pg_inode; } ;
struct TYPE_6__ {int cred; } ;
struct TYPE_5__ {int (* init_hdr ) (struct nfs_pgio_header*) ;} ;


 int FUNC_0 (int ) ;
 struct nfs_pgio_mirror* FUNC_1 (struct nfs_pageio_descriptor*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfs_pgio_header*) ;

void FUNC_5(struct nfs_pageio_descriptor *VAR_0,
         struct nfs_pgio_header *VAR_1,
         void (*VAR_2)(struct nfs_pgio_header *VAR_3))
{
 struct nfs_pgio_mirror *VAR_4 = FUNC_1(VAR_0);


 VAR_1->req = FUNC_0(VAR_4->pg_list.next);
 VAR_1->inode = VAR_0->pg_inode;
 VAR_1->cred = FUNC_2(VAR_1->req)->cred;
 VAR_1->io_start = FUNC_3(VAR_1->req);
 VAR_1->good_bytes = VAR_4->pg_count;
 VAR_1->io_completion = VAR_0->pg_io_completion;
 VAR_1->dreq = VAR_0->pg_dreq;
 VAR_1->release = VAR_2;
 VAR_1->completion_ops = VAR_0->pg_completion_ops;
 if (VAR_1->completion_ops->init_hdr)
  VAR_1->completion_ops->init_hdr(VAR_1);

 VAR_1->pgio_mirror_idx = VAR_0->pg_mirror_idx;
}
