
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_da_node_entry_t ;
typedef int uint ;
struct TYPE_4__ {int sb_versionnum; int sb_blocklog; int sb_dirblklog; } ;
struct xfs_mount {int * m_dirnameops; TYPE_1__ m_sb; struct xfs_da_geometry* m_attr_geo; struct xfs_da_geometry* m_dir_geo; TYPE_2__* m_dir_inode_ops; int m_nondir_inode_ops; } ;
struct xfs_da_geometry {int blklog; int fsblog; int blksize; int fsbcount; int node_ents; int magicpct; void* freeblk; void* leafblk; void* datablk; } ;
struct TYPE_5__ {int node_hdr_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct xfs_da_geometry*) ;
 void* FUNC_2 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (struct xfs_da_geometry*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (struct xfs_mount*,int *) ;
 int FUNC_6 (struct xfs_mount*,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

int
FUNC_8(
 struct xfs_mount *VAR_9)
{
 struct xfs_da_geometry *VAR_10;
 int VAR_11;


 FUNC_0(VAR_9->m_sb.sb_versionnum & VAR_6);
 FUNC_0(FUNC_4(&VAR_9->m_sb) <= VAR_5);

 VAR_9->m_dir_inode_ops = FUNC_5(VAR_9, ((void*)0));
 VAR_9->m_nondir_inode_ops = FUNC_6(VAR_9, ((void*)0));

 VAR_11 = VAR_9->m_dir_inode_ops->node_hdr_size;
 VAR_9->m_dir_geo = FUNC_2(sizeof(struct xfs_da_geometry),
        VAR_1);
 VAR_9->m_attr_geo = FUNC_2(sizeof(struct xfs_da_geometry),
         VAR_1);
 if (!VAR_9->m_dir_geo || !VAR_9->m_attr_geo) {
  FUNC_1(VAR_9->m_dir_geo);
  FUNC_1(VAR_9->m_attr_geo);
  return -VAR_0;
 }


 VAR_10 = VAR_9->m_dir_geo;
 VAR_10->blklog = VAR_9->m_sb.sb_blocklog + VAR_9->m_sb.sb_dirblklog;
 VAR_10->fsblog = VAR_9->m_sb.sb_blocklog;
 VAR_10->blksize = FUNC_4(&VAR_9->m_sb);
 VAR_10->fsbcount = 1 << VAR_9->m_sb.sb_dirblklog;





 VAR_10->datablk = FUNC_3(VAR_10, VAR_2);
 VAR_10->leafblk = FUNC_3(VAR_10, VAR_4);
 VAR_10->freeblk = FUNC_3(VAR_10, VAR_3);
 VAR_10->node_ents = (VAR_10->blksize - VAR_11) /
    (uint)sizeof(xfs_da_node_entry_t);
 VAR_10->magicpct = (VAR_10->blksize * 37) / 100;


 VAR_10 = VAR_9->m_attr_geo;
 VAR_10->blklog = VAR_9->m_sb.sb_blocklog;
 VAR_10->fsblog = VAR_9->m_sb.sb_blocklog;
 VAR_10->blksize = 1 << VAR_10->blklog;
 VAR_10->fsbcount = 1;
 VAR_10->node_ents = (VAR_10->blksize - VAR_11) /
    (uint)sizeof(xfs_da_node_entry_t);
 VAR_10->magicpct = (VAR_10->blksize * 37) / 100;

 if (FUNC_7(&VAR_9->m_sb))
  VAR_9->m_dirnameops = &VAR_7;
 else
  VAR_9->m_dirnameops = &VAR_8;

 return 0;
}
