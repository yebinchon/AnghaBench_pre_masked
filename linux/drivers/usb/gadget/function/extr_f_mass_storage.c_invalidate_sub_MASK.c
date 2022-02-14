
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct fsg_lun {struct file* filp; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct fsg_lun*,char*,unsigned long) ;
 struct inode* FUNC_1 (struct file*) ;
 unsigned long FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct fsg_lun *VAR_0)
{
 struct file *VAR_1 = VAR_0->filp;
 struct inode *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;

 VAR_3 = FUNC_2(VAR_2->i_mapping, 0, -1);
 FUNC_0(VAR_0, "invalidate_mapping_pages -> %ld\n", VAR_3);
}
