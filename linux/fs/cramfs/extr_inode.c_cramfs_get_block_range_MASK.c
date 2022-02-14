
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int i_sb; } ;
struct cramfs_sb_info {scalar_t__ linear_virt_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cramfs_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int,int,int) ;

__attribute__((used)) static u32 FUNC_3(struct inode *VAR_5, u32 VAR_6, u32 *VAR_7)
{
 struct cramfs_sb_info *VAR_8 = FUNC_0(VAR_5->i_sb);
 int VAR_9;
 u32 *VAR_10, VAR_11;






 VAR_10 = (u32 *)(VAR_8->linear_virt_addr + FUNC_1(VAR_5) + VAR_6 * 4);
 VAR_11 = VAR_10[0] & ~VAR_1;
 VAR_9 = 0;
 do {
  u32 VAR_12 = VAR_9 * (VAR_4 >> VAR_0);
  u32 VAR_13 = (VAR_11 + VAR_12) |
        VAR_2 |
        VAR_3;
  if (VAR_10[VAR_9] != VAR_13) {
   FUNC_2("range: block %d/%d got %#x expects %#x\n",
     VAR_6+VAR_9, VAR_6 + *VAR_7 - 1,
     VAR_10[VAR_9], VAR_13);
   if (VAR_9 == 0)
    return 0;
   break;
  }
 } while (++VAR_9 < *VAR_7);

 *VAR_7 = VAR_9;
 return VAR_11 << VAR_0;
}
