
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_dir_entry {int attr; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct inode*,scalar_t__*,struct buffer_head**,struct msdos_dir_entry**) ;

int FUNC_2(struct inode *VAR_1)
{
 struct buffer_head *VAR_2;
 struct msdos_dir_entry *VAR_3;
 loff_t VAR_4;
 int VAR_5 = 0;

 VAR_2 = ((void*)0);
 VAR_4 = 0;
 while (FUNC_1(VAR_1, &VAR_4, &VAR_2, &VAR_3) >= 0) {
  if (VAR_3->attr & VAR_0)
   VAR_5++;
 }
 FUNC_0(VAR_2);
 return VAR_5;
}
