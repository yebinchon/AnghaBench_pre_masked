
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_rw_ops {int dummy; } ;
struct nfs_pgio_completion_ops {int dummy; } ;
struct nfs_pageio_ops {int dummy; } ;
struct nfs_pageio_descriptor {int pg_ioflags; size_t pg_bsize; int pg_mirror_count; scalar_t__ pg_maxretrans; int * pg_mirrors; int * pg_mirrors_static; int * pg_mirrors_dynamic; scalar_t__ pg_mirror_idx; int * pg_dreq; int * pg_io_completion; int * pg_lseg; scalar_t__ pg_error; struct nfs_rw_ops const* pg_rw_ops; struct nfs_pgio_completion_ops const* pg_completion_ops; struct nfs_pageio_ops const* pg_ops; struct inode* pg_inode; scalar_t__ pg_moreio; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *,size_t) ;

void FUNC_1(struct nfs_pageio_descriptor *VAR_0,
       struct inode *VAR_1,
       const struct nfs_pageio_ops *VAR_2,
       const struct nfs_pgio_completion_ops *VAR_3,
       const struct nfs_rw_ops *VAR_4,
       size_t VAR_5,
       int VAR_6)
{
 VAR_0->pg_moreio = 0;
 VAR_0->pg_inode = VAR_1;
 VAR_0->pg_ops = VAR_2;
 VAR_0->pg_completion_ops = VAR_3;
 VAR_0->pg_rw_ops = VAR_4;
 VAR_0->pg_ioflags = VAR_6;
 VAR_0->pg_error = 0;
 VAR_0->pg_lseg = ((void*)0);
 VAR_0->pg_io_completion = ((void*)0);
 VAR_0->pg_dreq = ((void*)0);
 VAR_0->pg_bsize = VAR_5;

 VAR_0->pg_mirror_count = 1;
 VAR_0->pg_mirror_idx = 0;

 VAR_0->pg_mirrors_dynamic = ((void*)0);
 VAR_0->pg_mirrors = VAR_0->pg_mirrors_static;
 FUNC_0(&VAR_0->pg_mirrors[0], VAR_5);
 VAR_0->pg_maxretrans = 0;
}
