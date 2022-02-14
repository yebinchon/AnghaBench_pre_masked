
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int i_ctime; } ;
struct f2fs_inode_info {int i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct f2fs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct f2fs_inode_info *VAR_9 = FUNC_0(VAR_6);


 if (FUNC_2(VAR_6))
  return -VAR_2;

 if ((VAR_7 ^ VAR_9->i_flags) & VAR_3) {
  if (!FUNC_7(FUNC_1(VAR_6)))
   return -VAR_1;
  if (!FUNC_5(VAR_6))
   return -VAR_0;
 }

 VAR_9->i_flags = VAR_7 | (VAR_9->i_flags & ~VAR_8);

 if (VAR_9->i_flags & VAR_4)
  FUNC_9(VAR_6, VAR_5);
 else
  FUNC_3(VAR_6, VAR_5);

 VAR_6->i_ctime = FUNC_4(VAR_6);
 FUNC_8(VAR_6);
 FUNC_6(VAR_6, 1);
 return 0;
}
