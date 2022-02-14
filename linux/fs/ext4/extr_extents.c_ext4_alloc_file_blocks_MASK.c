
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_blkbits; int i_size; int i_sb; int i_ctime; int i_mtime; int i_ino; } ;
struct file {int dummy; } ;
struct ext4_map_blocks {scalar_t__ m_lblk; scalar_t__ m_len; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 unsigned int FUNC_4 (struct inode*,scalar_t__) ;
 int FUNC_5 (char*,int ,scalar_t__,scalar_t__,int) ;
 int * FUNC_6 (struct inode*,int ,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct inode*,struct ext4_map_blocks*,int) ;
 int FUNC_9 (int *,struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 scalar_t__ FUNC_11 (int ,int*) ;
 int FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (int *,struct inode*,int) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*) ;
 struct inode* FUNC_16 (struct file*) ;

__attribute__((used)) static int FUNC_17(struct file *VAR_6, ext4_lblk_t VAR_7,
      ext4_lblk_t VAR_8, loff_t VAR_9,
      int VAR_10)
{
 struct inode *VAR_11 = FUNC_16(VAR_6);
 handle_t *VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 struct ext4_map_blocks VAR_17;
 unsigned int VAR_18;
 loff_t VAR_19;

 FUNC_0(!FUNC_12(VAR_11, VAR_4));
 VAR_17.m_lblk = VAR_7;
 VAR_17.m_len = VAR_8;





 if (VAR_8 <= VAR_5)
  VAR_10 |= VAR_1;




 VAR_18 = FUNC_4(VAR_11, VAR_8);
 VAR_16 = FUNC_15(VAR_11);

retry:
 while (VAR_13 >= 0 && VAR_8) {



  if (VAR_16 != FUNC_15(VAR_11)) {
   VAR_18 = FUNC_4(VAR_11, VAR_8);
   VAR_16 = FUNC_15(VAR_11);
  }

  VAR_12 = FUNC_6(VAR_11, VAR_2,
         VAR_18);
  if (FUNC_1(VAR_12)) {
   VAR_13 = FUNC_2(VAR_12);
   break;
  }
  VAR_13 = FUNC_8(VAR_12, VAR_11, &VAR_17, VAR_10);
  if (VAR_13 <= 0) {
   FUNC_5("inode #%lu: block %u: len %u: "
       "ext4_ext_map_blocks returned %d",
       VAR_11->i_ino, VAR_17.m_lblk,
       VAR_17.m_len, VAR_13);
   FUNC_9(VAR_12, VAR_11);
   VAR_14 = FUNC_7(VAR_12);
   break;
  }
  VAR_17.m_lblk += VAR_13;
  VAR_17.m_len = VAR_8 = VAR_8 - VAR_13;
  VAR_19 = (loff_t)VAR_17.m_lblk << VAR_11->i_blkbits;
  VAR_11->i_ctime = FUNC_3(VAR_11);
  if (VAR_9) {
   if (VAR_19 > VAR_9)
    VAR_19 = VAR_9;
   if (FUNC_14(VAR_11, VAR_19) & 0x1)
    VAR_11->i_mtime = VAR_11->i_ctime;
  } else {
   if (VAR_19 > VAR_11->i_size)
    FUNC_10(VAR_11,
          VAR_3);
  }
  FUNC_9(VAR_12, VAR_11);
  FUNC_13(VAR_12, VAR_11, 1);
  VAR_14 = FUNC_7(VAR_12);
  if (VAR_14)
   break;
 }
 if (VAR_13 == -VAR_0 &&
   FUNC_11(VAR_11->i_sb, &VAR_15)) {
  VAR_13 = 0;
  goto retry;
 }

 return VAR_13 > 0 ? VAR_14 : VAR_13;
}
