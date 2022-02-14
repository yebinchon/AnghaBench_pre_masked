
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {scalar_t__ i_size; int i_sb; } ;
struct erofs_sb_info {int dummy; } ;
struct erofs_map_blocks {scalar_t__ m_la; scalar_t__ m_plen; scalar_t__ m_pa; scalar_t__ m_llen; int m_flags; } ;
struct erofs_inode {scalar_t__ datalayout; scalar_t__ inode_isize; scalar_t__ xattr_isize; int nid; scalar_t__ raw_blkaddr; } ;
typedef scalar_t__ erofs_blk_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct erofs_inode* FUNC_2 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct erofs_sb_info* FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,int ,...) ;
 scalar_t__ FUNC_7 (struct erofs_sb_info*,int ) ;
 int FUNC_8 (struct inode*,struct erofs_map_blocks*,int) ;
 int FUNC_9 (struct inode*,struct erofs_map_blocks*,int,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_6,
         struct erofs_map_blocks *VAR_7,
         int VAR_8)
{
 int VAR_9 = 0;
 erofs_blk_t VAR_10, VAR_11;
 u64 VAR_12 = VAR_7->m_la;
 struct erofs_inode *VAR_13 = FUNC_2(VAR_6);
 bool VAR_14 = (VAR_13->datalayout == VAR_2);

 FUNC_8(VAR_6, VAR_7, VAR_8);

 VAR_10 = FUNC_1(VAR_6->i_size, VAR_5);
 VAR_11 = VAR_10 - VAR_14;

 if (VAR_12 >= VAR_6->i_size) {

  VAR_7->m_flags = 0;
  VAR_7->m_plen = 0;
  goto out;
 }


 VAR_7->m_flags = VAR_3;

 if (VAR_12 < FUNC_4(VAR_11)) {
  VAR_7->m_pa = FUNC_4(VAR_13->raw_blkaddr) + VAR_7->m_la;
  VAR_7->m_plen = FUNC_4(VAR_11) - VAR_12;
 } else if (VAR_14) {

  struct erofs_sb_info *VAR_15 = FUNC_3(VAR_6->i_sb);

  VAR_7->m_pa = FUNC_7(VAR_15, VAR_13->nid) + VAR_13->inode_isize +
   VAR_13->xattr_isize + FUNC_5(VAR_7->m_la);
  VAR_7->m_plen = VAR_6->i_size - VAR_12;


  if (FUNC_5(VAR_7->m_pa) + VAR_7->m_plen > VAR_5) {
   FUNC_6(VAR_6->i_sb,
      "inline data cross block boundary @ nid %llu",
      VAR_13->nid);
   FUNC_0(1);
   VAR_9 = -VAR_0;
   goto err_out;
  }

  VAR_7->m_flags |= VAR_4;
 } else {
  FUNC_6(VAR_6->i_sb,
     "internal error @ nid: %llu (size %llu), m_la 0x%llx",
     VAR_13->nid, VAR_6->i_size, VAR_7->m_la);
  FUNC_0(1);
  VAR_9 = -VAR_1;
  goto err_out;
 }

out:
 VAR_7->m_llen = VAR_7->m_plen;

err_out:
 FUNC_9(VAR_6, VAR_7, VAR_8, 0);
 return VAR_9;
}
