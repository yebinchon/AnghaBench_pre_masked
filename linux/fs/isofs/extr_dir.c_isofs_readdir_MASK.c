
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso_directory_record {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct dir_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct file*,struct dir_context*,char*,struct iso_directory_record*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, struct dir_context *VAR_3)
{
 int VAR_4;
 char *VAR_5;
 struct iso_directory_record *VAR_6;
 struct inode *VAR_7 = FUNC_2(VAR_2);

 VAR_5 = (char *)FUNC_0(VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = (struct iso_directory_record *) (VAR_5+1024);

 VAR_4 = FUNC_1(VAR_7, VAR_2, VAR_3, VAR_5, VAR_6);

 FUNC_3((unsigned long) VAR_5);
 return VAR_4;
}
