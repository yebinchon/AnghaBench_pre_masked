
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_failaddr_t ;
struct TYPE_2__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_dir3_blk_hdr {int lsn; int blkno; int uuid; int magic; } ;
struct xfs_buf {scalar_t__ b_bn; struct xfs_dir3_blk_hdr* b_addr; struct xfs_mount* b_mount; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct xfs_buf*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct xfs_buf*,int ) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_6(
 struct xfs_buf *VAR_1)
{
 struct xfs_mount *VAR_2 = VAR_1->b_mount;
 struct xfs_dir3_blk_hdr *VAR_3 = VAR_1->b_addr;

 if (!FUNC_5(VAR_1, VAR_3->magic))
  return VAR_0;

 if (FUNC_4(&VAR_2->m_sb)) {
  if (!FUNC_2(&VAR_3->uuid, &VAR_2->m_sb.sb_meta_uuid))
   return VAR_0;
  if (FUNC_1(VAR_3->blkno) != VAR_1->b_bn)
   return VAR_0;
  if (!FUNC_3(VAR_2, FUNC_1(VAR_3->lsn)))
   return VAR_0;
 }
 return FUNC_0(((void*)0), VAR_1);
}
