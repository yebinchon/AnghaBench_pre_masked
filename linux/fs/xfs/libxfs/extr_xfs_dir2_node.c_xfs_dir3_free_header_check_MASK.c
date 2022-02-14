
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef int xfs_dablk_t ;
struct xfs_mount {int m_sb; int m_dir_geo; } ;
struct xfs_inode {TYPE_1__* d_ops; struct xfs_mount* i_mount; } ;
struct xfs_dir3_free_hdr {int nused; int nvalid; int firstdb; } ;
struct xfs_dir2_free_hdr {int nused; int nvalid; int firstdb; } ;
struct xfs_buf {struct xfs_dir3_free_hdr* b_addr; } ;
struct TYPE_2__ {int (* free_max_bests ) (int ) ;} ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_5(
 struct xfs_inode *VAR_2,
 xfs_dablk_t VAR_3,
 struct xfs_buf *VAR_4)
{
 struct xfs_mount *VAR_5 = VAR_2->i_mount;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = VAR_2->d_ops->free_max_bests(VAR_5->m_dir_geo);
 VAR_6 = (FUNC_3(VAR_5->m_dir_geo, VAR_3) -
     FUNC_2(VAR_5->m_dir_geo, VAR_0)) *
   VAR_7;
 if (FUNC_4(&VAR_5->m_sb)) {
  struct xfs_dir3_free_hdr *VAR_8 = VAR_4->b_addr;

  if (FUNC_0(VAR_8->firstdb) != VAR_6)
   return VAR_1;
  if (FUNC_0(VAR_8->nvalid) > VAR_7)
   return VAR_1;
  if (FUNC_0(VAR_8->nvalid) < FUNC_0(VAR_8->nused))
   return VAR_1;
 } else {
  struct xfs_dir2_free_hdr *VAR_9 = VAR_4->b_addr;

  if (FUNC_0(VAR_9->firstdb) != VAR_6)
   return VAR_1;
  if (FUNC_0(VAR_9->nvalid) > VAR_7)
   return VAR_1;
  if (FUNC_0(VAR_9->nvalid) < FUNC_0(VAR_9->nused))
   return VAR_1;
 }
 return ((void*)0);
}
