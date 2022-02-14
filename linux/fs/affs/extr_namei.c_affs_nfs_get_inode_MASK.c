
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,int ) ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_1, u64 VAR_2,
     u32 VAR_3)
{
 struct inode *VAR_4;

 if (!FUNC_4(VAR_1, VAR_2))
  return FUNC_1(-VAR_0);

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 return VAR_4;
}
