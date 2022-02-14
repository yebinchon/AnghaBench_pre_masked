
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ namelen; int valuelen; } ;
typedef TYPE_3__ xfs_attr_leaf_name_local_t ;
struct xfs_mount {int m_attr_geo; } ;
struct TYPE_6__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_2__ i_d; TYPE_1__* i_mount; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; struct xfs_mount* b_mount; } ;
struct xfs_attr_sf_hdr {int dummy; } ;
struct xfs_attr_sf_entry {int dummy; } ;
struct xfs_attr_leafblock {int dummy; } ;
struct xfs_attr_leaf_entry {int flags; } ;
struct xfs_attr3_icleaf_hdr {int count; } ;
struct TYPE_5__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct xfs_attr_leaf_entry* FUNC_1 (struct xfs_attr_leafblock*) ;
 int FUNC_2 (int ,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 TYPE_3__* FUNC_3 (struct xfs_attr_leafblock*,int) ;
 int FUNC_4 (struct xfs_inode*,int) ;

int
FUNC_5(
 struct xfs_buf *VAR_5,
 struct xfs_inode *VAR_6)
{
 struct xfs_attr_leafblock *VAR_7;
 struct xfs_attr_leaf_entry *VAR_8;
 xfs_attr_leaf_name_local_t *VAR_9;
 struct xfs_attr3_icleaf_hdr VAR_10;
 int VAR_11;
 int VAR_12;
 struct xfs_mount *VAR_13 = VAR_5->b_mount;

 VAR_7 = VAR_5->b_addr;
 FUNC_2(VAR_13->m_attr_geo, &VAR_10, VAR_7);
 VAR_8 = FUNC_1(VAR_7);

 VAR_11 = sizeof(struct xfs_attr_sf_hdr);
 for (VAR_12 = 0; VAR_12 < VAR_10.count; VAR_8++, VAR_12++) {
  if (VAR_8->flags & VAR_0)
   continue;
  if (!(VAR_8->flags & VAR_1))
   return 0;
  VAR_9 = FUNC_3(VAR_7, VAR_12);
  if (VAR_9->namelen >= VAR_2)
   return 0;
  if (FUNC_0(VAR_9->valuelen) >= VAR_2)
   return 0;
  VAR_11 += sizeof(struct xfs_attr_sf_entry) - 1
    + VAR_9->namelen
    + FUNC_0(VAR_9->valuelen);
 }
 if ((VAR_6->i_mount->m_flags & VAR_4) &&
     (VAR_6->i_d.di_format != VAR_3) &&
     (VAR_11 == sizeof(struct xfs_attr_sf_hdr)))
  return -1;
 return FUNC_4(VAR_6, VAR_11);
}
