
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_blkbits; } ;
struct ext4_map_blocks {int m_len; int m_flags; scalar_t__ m_lblk; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_1 (int *,struct inode*,struct ext4_map_blocks*,int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static bool FUNC_3(struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3)
{
 struct ext4_map_blocks VAR_4;
 unsigned int VAR_5 = VAR_1->i_blkbits;
 int VAR_6, VAR_7;

 if (VAR_2 + VAR_3 > FUNC_2(VAR_1))
  return 0;

 VAR_4.m_lblk = VAR_2 >> VAR_5;
 VAR_4.m_len = FUNC_0(VAR_3, VAR_2, VAR_5);
 VAR_7 = VAR_4.m_len;

 VAR_6 = FUNC_1(((void*)0), VAR_1, &VAR_4, 0);





 return VAR_6 == VAR_7 && (VAR_4.m_flags & VAR_0);
}
