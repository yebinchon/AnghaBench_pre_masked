
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_dir_entry {int name; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*,int *,struct buffer_head**,struct msdos_dir_entry**) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct inode *VAR_3, struct buffer_head **VAR_4,
    struct msdos_dir_entry **VAR_5)
{
 loff_t VAR_6 = 0;

 *VAR_5 = ((void*)0);
 while (FUNC_0(VAR_3, &VAR_6, VAR_4, VAR_5) >= 0) {
  if (!FUNC_1((*VAR_5)->name, VAR_1, VAR_2))
   return 0;
 }
 return -VAR_0;
}
