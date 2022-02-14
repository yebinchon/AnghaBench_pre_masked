
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;


 scalar_t__ VAR_0 ;
 struct inode* FUNC_0 (struct super_block*,scalar_t__) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_1, u64 VAR_2,
      u32 VAR_3)
{
 struct inode *VAR_4 = ((void*)0);

 if (VAR_2 < VAR_0)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (VAR_4 && VAR_3 && (VAR_4->i_generation != VAR_3)) {
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
 }

 return VAR_4;
}
