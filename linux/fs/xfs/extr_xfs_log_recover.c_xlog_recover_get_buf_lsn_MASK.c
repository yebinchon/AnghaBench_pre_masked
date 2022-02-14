
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ xfs_lsn_t ;
typedef int uuid_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int sb_uuid; int sb_meta_uuid; } ;
struct xfs_mount {TYPE_4__ m_sb; } ;
struct xfs_dsymlink_hdr {int sl_uuid; int sl_lsn; } ;
struct xfs_dsb {int sb_uuid; int sb_meta_uuid; int sb_lsn; } ;
struct xfs_dir3_blk_hdr {int uuid; int lsn; } ;
struct xfs_da_blkinfo {int magic; } ;
struct xfs_da3_blkinfo {int uuid; int lsn; } ;
struct xfs_buf {void* b_addr; } ;
struct TYPE_7__ {int bb_uuid; int bb_lsn; } ;
struct TYPE_6__ {int bb_uuid; int bb_lsn; } ;
struct TYPE_8__ {TYPE_2__ l; TYPE_1__ s; } ;
struct xfs_btree_block {TYPE_3__ bb_u; } ;
struct xfs_agi {int agi_uuid; int agi_lsn; } ;
struct xfs_agfl {int agfl_uuid; int agfl_lsn; } ;
struct xfs_agf {int agf_uuid; int agf_lsn; } ;
typedef int __be32 ;
typedef int __be16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static xfs_lsn_t
FUNC_6(
 struct xfs_mount *VAR_0,
 struct xfs_buf *VAR_1)
{
 uint32_t VAR_2;
 uint16_t VAR_3;
 uint16_t VAR_4;
 void *VAR_5 = VAR_1->b_addr;
 uuid_t *VAR_6;
 xfs_lsn_t VAR_7 = -1;


 if (!FUNC_4(&VAR_0->m_sb))
  goto recover_immediately;

 VAR_2 = FUNC_1(*(__be32 *)VAR_5);
 switch (VAR_2) {
 case 151:
 case 149:
 case 150:
 case 148:
 case 130:
 case 131:
 case 133:
 case 132: {
  struct xfs_btree_block *VAR_8 = VAR_5;

  VAR_7 = FUNC_2(VAR_8->bb_u.s.bb_lsn);
  VAR_6 = &VAR_8->bb_u.s.bb_uuid;
  break;
 }
 case 143:
 case 142: {
  struct xfs_btree_block *VAR_9 = VAR_5;

  VAR_7 = FUNC_2(VAR_9->bb_u.l.bb_lsn);
  VAR_6 = &VAR_9->bb_u.l.bb_uuid;
  break;
 }
 case 146:
  VAR_7 = FUNC_2(((struct xfs_agf *)VAR_5)->agf_lsn);
  VAR_6 = &((struct xfs_agf *)VAR_5)->agf_uuid;
  break;
 case 147:
  VAR_7 = FUNC_2(((struct xfs_agfl *)VAR_5)->agfl_lsn);
  VAR_6 = &((struct xfs_agfl *)VAR_5)->agfl_uuid;
  break;
 case 145:
  VAR_7 = FUNC_2(((struct xfs_agi *)VAR_5)->agi_lsn);
  VAR_6 = &((struct xfs_agi *)VAR_5)->agi_uuid;
  break;
 case 128:
  VAR_7 = FUNC_2(((struct xfs_dsymlink_hdr *)VAR_5)->sl_lsn);
  VAR_6 = &((struct xfs_dsymlink_hdr *)VAR_5)->sl_uuid;
  break;
 case 139:
 case 138:
 case 137:
  VAR_7 = FUNC_2(((struct xfs_dir3_blk_hdr *)VAR_5)->lsn);
  VAR_6 = &((struct xfs_dir3_blk_hdr *)VAR_5)->uuid;
  break;
 case 144:







  goto recover_immediately;
 case 129:







  VAR_7 = FUNC_2(((struct xfs_dsb *)VAR_5)->sb_lsn);
  if (FUNC_5(&VAR_0->m_sb))
   VAR_6 = &((struct xfs_dsb *)VAR_5)->sb_meta_uuid;
  else
   VAR_6 = &((struct xfs_dsb *)VAR_5)->sb_uuid;
  break;
 default:
  break;
 }

 if (VAR_7 != (xfs_lsn_t)-1) {
  if (!FUNC_3(&VAR_0->m_sb.sb_meta_uuid, VAR_6))
   goto recover_immediately;
  return VAR_7;
 }

 VAR_4 = FUNC_0(((struct xfs_da_blkinfo *)VAR_5)->magic);
 switch (VAR_4) {
 case 136:
 case 135:
 case 141:
  VAR_7 = FUNC_2(((struct xfs_da3_blkinfo *)VAR_5)->lsn);
  VAR_6 = &((struct xfs_da3_blkinfo *)VAR_5)->uuid;
  break;
 default:
  break;
 }

 if (VAR_7 != (xfs_lsn_t)-1) {
  if (!FUNC_3(&VAR_0->m_sb.sb_uuid, VAR_6))
   goto recover_immediately;
  return VAR_7;
 }
 VAR_3 = FUNC_0(*(__be16 *)VAR_5);
 switch (VAR_3) {
 case 134:
 case 140:
  goto recover_immediately;
 default:
  break;
 }



recover_immediately:
 return (xfs_lsn_t)-1;

}
