
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {unsigned long s_inode_readahead_blks; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ,unsigned long*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct ext4_sb_info *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(FUNC_2(VAR_2), 0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 && (!FUNC_0(VAR_4) || VAR_4 > 0x40000000))
  return -VAR_0;

 VAR_1->s_inode_readahead_blks = VAR_4;
 return VAR_3;
}
