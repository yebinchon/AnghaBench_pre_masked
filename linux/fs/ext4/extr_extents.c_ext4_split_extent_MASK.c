
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_map_blocks {int m_len; scalar_t__ m_lblk; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (struct ext4_ext_path*) ;
 unsigned int FUNC_3 (struct ext4_extent*) ;
 int FUNC_4 (struct ext4_extent*) ;
 int FUNC_5 (struct inode*,struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_6 (struct inode*,scalar_t__,struct ext4_ext_path**,int ) ;
 int FUNC_7 (int *,struct inode*,struct ext4_ext_path**,scalar_t__,int,int) ;
 unsigned int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(handle_t *VAR_7,
         struct inode *VAR_8,
         struct ext4_ext_path **VAR_9,
         struct ext4_map_blocks *VAR_10,
         int VAR_11,
         int VAR_12)
{
 struct ext4_ext_path *VAR_13 = *VAR_9;
 ext4_lblk_t VAR_14;
 struct ext4_extent *VAR_15;
 unsigned int VAR_16, VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 int VAR_20, VAR_21;
 int VAR_22 = VAR_10->m_len;

 VAR_17 = FUNC_8(VAR_8);
 VAR_15 = VAR_13[VAR_17].p_ext;
 VAR_14 = FUNC_9(VAR_15->ee_block);
 VAR_16 = FUNC_3(VAR_15);
 VAR_19 = FUNC_4(VAR_15);

 if (VAR_10->m_lblk + VAR_10->m_len < VAR_14 + VAR_16) {
  VAR_20 = VAR_11 & VAR_5;
  VAR_21 = VAR_12 | VAR_6;
  if (VAR_19)
   VAR_20 |= VAR_3 |
           VAR_4;
  if (VAR_11 & VAR_2)
   VAR_20 |= VAR_1;
  VAR_18 = FUNC_7(VAR_7, VAR_8, VAR_9,
    VAR_10->m_lblk + VAR_10->m_len, VAR_20, VAR_21);
  if (VAR_18)
   goto out;
 } else {
  VAR_22 = VAR_16 - (VAR_10->m_lblk - VAR_14);
 }




 VAR_13 = FUNC_6(VAR_8, VAR_10->m_lblk, VAR_9, 0);
 if (FUNC_1(VAR_13))
  return FUNC_2(VAR_13);
 VAR_17 = FUNC_8(VAR_8);
 VAR_15 = VAR_13[VAR_17].p_ext;
 if (!VAR_15) {
  FUNC_0(VAR_8, "unexpected hole at %lu",
     (unsigned long) VAR_10->m_lblk);
  return -VAR_0;
 }
 VAR_19 = FUNC_4(VAR_15);
 VAR_20 = 0;

 if (VAR_10->m_lblk >= VAR_14) {
  VAR_20 = VAR_11 & VAR_2;
  if (VAR_19) {
   VAR_20 |= VAR_3;
   VAR_20 |= VAR_11 & (VAR_5 |
           VAR_4);
  }
  VAR_18 = FUNC_7(VAR_7, VAR_8, VAR_9,
    VAR_10->m_lblk, VAR_20, VAR_12);
  if (VAR_18)
   goto out;
 }

 FUNC_5(VAR_8, VAR_13);
out:
 return VAR_18 ? VAR_18 : VAR_22;
}
