
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_dir_entry {int name; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct inode*,scalar_t__*,struct buffer_head**,struct msdos_dir_entry**) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct inode *VAR_4)
{
 struct buffer_head *VAR_5;
 struct msdos_dir_entry *VAR_6;
 loff_t VAR_7;
 int VAR_8 = 0;

 VAR_5 = ((void*)0);
 VAR_7 = 0;
 while (FUNC_1(VAR_4, &VAR_7, &VAR_5, &VAR_6) >= 0) {
  if (FUNC_2(VAR_6->name, VAR_1 , VAR_3) &&
      FUNC_2(VAR_6->name, VAR_2, VAR_3)) {
   VAR_8 = -VAR_0;
   break;
  }
 }
 FUNC_0(VAR_5);
 return VAR_8;
}
