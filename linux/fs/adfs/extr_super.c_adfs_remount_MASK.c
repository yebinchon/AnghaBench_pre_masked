
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct adfs_sb_info {int dummy; } ;


 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*,struct adfs_sb_info*,char*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1, int *VAR_2, char *VAR_3)
{
 struct adfs_sb_info VAR_4;
 int VAR_5;

 FUNC_2(VAR_1);
 *VAR_2 |= VAR_0;

 VAR_4 = *FUNC_0(VAR_1);
 VAR_5 = FUNC_1(VAR_1, &VAR_4, VAR_3);
 if (VAR_5 == 0)
  *FUNC_0(VAR_1) = VAR_4;

 return VAR_5;
}
