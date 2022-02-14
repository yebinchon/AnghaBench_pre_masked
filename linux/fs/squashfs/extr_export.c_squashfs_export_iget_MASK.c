
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,long long,unsigned int) ;
 long long FUNC_4 (struct super_block*,unsigned int) ;

__attribute__((used)) static struct dentry *FUNC_5(struct super_block *VAR_1,
 unsigned int VAR_2)
{
 long long VAR_3;
 struct dentry *VAR_4 = FUNC_0(-VAR_0);

 FUNC_1("Entered squashfs_export_iget\n");

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3 >= 0)
  VAR_4 = FUNC_2(FUNC_3(VAR_1, VAR_3, VAR_2));

 return VAR_4;
}
