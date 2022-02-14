
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_blkbits; int i_ino; int i_sb; } ;
struct ext4_map_blocks {unsigned int m_lblk; unsigned int m_len; } ;
typedef int ssize_t ;
typedef unsigned int loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct inode*,unsigned int) ;
 int * FUNC_4 (struct inode*,int ,unsigned int) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct inode*,struct ext4_map_blocks*,int ) ;
 int FUNC_8 (int *,struct inode*) ;
 int FUNC_9 (int ,char*,int ,int,unsigned int,int) ;

int FUNC_10(handle_t *VAR_3, struct inode *VAR_4,
       loff_t VAR_5, ssize_t VAR_6)
{
 unsigned int VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 struct ext4_map_blocks VAR_10;
 unsigned int VAR_11, VAR_12 = VAR_4->i_blkbits;

 VAR_10.m_lblk = VAR_5 >> VAR_12;
 VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_12);






 if (VAR_3) {
  VAR_3 = FUNC_5(VAR_3,
           VAR_1);
  if (FUNC_1(VAR_3))
   return FUNC_2(VAR_3);
  VAR_11 = 0;
 } else {



  VAR_11 = FUNC_3(VAR_4, VAR_7);
 }
 while (VAR_8 >= 0 && VAR_8 < VAR_7) {
  VAR_10.m_lblk += VAR_8;
  VAR_10.m_len = (VAR_7 -= VAR_8);
  if (VAR_11) {
   VAR_3 = FUNC_4(VAR_4, VAR_2,
          VAR_11);
   if (FUNC_1(VAR_3)) {
    VAR_8 = FUNC_2(VAR_3);
    break;
   }
  }
  VAR_8 = FUNC_7(VAR_3, VAR_4, &VAR_10,
          VAR_0);
  if (VAR_8 <= 0)
   FUNC_9(VAR_4->i_sb,
         "inode #%lu: block %u: len %u: "
         "ext4_ext_map_blocks returned %d",
         VAR_4->i_ino, VAR_10.m_lblk,
         VAR_10.m_len, VAR_8);
  FUNC_8(VAR_3, VAR_4);
  if (VAR_11)
   VAR_9 = FUNC_6(VAR_3);
  if (VAR_8 <= 0 || VAR_9)
   break;
 }
 if (!VAR_11)
  VAR_9 = FUNC_6(VAR_3);
 return VAR_8 > 0 ? VAR_9 : VAR_8;
}
