
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct ext4_map_blocks {unsigned int m_len; void* m_pblk; scalar_t__ m_lblk; int m_flags; } ;
struct ext4_ext_path {int dummy; } ;
typedef int handle_t ;
typedef void* ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,struct inode*,scalar_t__,struct ext4_ext_path*,unsigned int) ;
 int FUNC_1 (int *,struct inode*,struct ext4_map_blocks*,struct ext4_ext_path**) ;
 int FUNC_2 (int *,struct inode*,struct ext4_map_blocks*,struct ext4_ext_path**,int) ;
 int FUNC_3 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (struct inode*,scalar_t__,void*,unsigned int) ;
 int FUNC_5 (int *,struct inode*,struct ext4_map_blocks*,struct ext4_ext_path**,int) ;
 int FUNC_6 (int *,struct inode*,int) ;
 int FUNC_7 (char*,int ,unsigned long long,unsigned int,int,unsigned int) ;
 int FUNC_8 (struct inode*,struct ext4_map_blocks*,int,unsigned int,void*) ;

__attribute__((used)) static int
FUNC_9(handle_t *VAR_10, struct inode *VAR_11,
   struct ext4_map_blocks *VAR_12,
   struct ext4_ext_path **VAR_13, int VAR_14,
   unsigned int VAR_15, ext4_fsblk_t VAR_16)
{
 struct ext4_ext_path *VAR_17 = *VAR_13;
 int VAR_18 = 0;
 int VAR_19 = 0;

 FUNC_7("ext4_ext_handle_unwritten_extents: inode %lu, logical "
    "block %llu, max_blocks %u, flags %x, allocated %u\n",
    VAR_11->i_ino, (unsigned long long)VAR_12->m_lblk, VAR_12->m_len,
    VAR_14, VAR_15);
 FUNC_3(VAR_11, VAR_17);





 VAR_14 |= VAR_3;

 FUNC_8(VAR_11, VAR_12, VAR_14,
          VAR_15, VAR_16);


 if (VAR_14 & VAR_4) {
  VAR_18 = FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13,
      VAR_14 | VAR_0);
  if (VAR_18 <= 0)
   goto out;
  VAR_12->m_flags |= VAR_9;
  goto out;
 }

 if (VAR_14 & VAR_0) {
  if (VAR_14 & VAR_6) {
   if (VAR_15 > VAR_12->m_len)
    VAR_15 = VAR_12->m_len;
   VAR_19 = FUNC_4(VAR_11, VAR_12->m_lblk, VAR_16,
       VAR_15);
   if (VAR_19 < 0)
    goto out2;
  }
  VAR_18 = FUNC_1(VAR_10, VAR_11, VAR_12,
          VAR_13);
  if (VAR_18 >= 0) {
   FUNC_6(VAR_10, VAR_11, 1);
   VAR_19 = FUNC_0(VAR_10, VAR_11, VAR_12->m_lblk,
       VAR_17, VAR_12->m_len);
  } else
   VAR_19 = VAR_18;
  VAR_12->m_flags |= VAR_7;
  VAR_12->m_pblk = VAR_16;
  if (VAR_15 > VAR_12->m_len)
   VAR_15 = VAR_12->m_len;
  VAR_12->m_len = VAR_15;
  goto out2;
 }





 if (VAR_14 & VAR_5) {
  VAR_12->m_flags |= VAR_9;
  goto map_out;
 }


 if ((VAR_14 & VAR_1) == 0) {







  VAR_12->m_flags |= VAR_9;
  goto out1;
 }


 VAR_18 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
 if (VAR_18 >= 0)
  FUNC_6(VAR_10, VAR_11, 1);
out:
 if (VAR_18 <= 0) {
  VAR_19 = VAR_18;
  goto out2;
 } else
  VAR_15 = VAR_18;
 VAR_12->m_flags |= VAR_8;
 if (VAR_15 > VAR_12->m_len)
  VAR_15 = VAR_12->m_len;
 VAR_12->m_len = VAR_15;

map_out:
 VAR_12->m_flags |= VAR_7;
 if ((VAR_14 & VAR_2) == 0) {
  VAR_19 = FUNC_0(VAR_10, VAR_11, VAR_12->m_lblk, VAR_17,
      VAR_12->m_len);
  if (VAR_19 < 0)
   goto out2;
 }
out1:
 if (VAR_15 > VAR_12->m_len)
  VAR_15 = VAR_12->m_len;
 FUNC_3(VAR_11, VAR_17);
 VAR_12->m_pblk = VAR_16;
 VAR_12->m_len = VAR_15;
out2:
 return VAR_19 ? VAR_19 : VAR_15;
}
