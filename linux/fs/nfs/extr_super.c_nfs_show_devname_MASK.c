
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 char* FUNC_4 (char**,struct dentry*,char*,int ,int ) ;
 int FUNC_5 (struct seq_file*,char*,char*) ;

int FUNC_6(struct seq_file *VAR_3, struct dentry *VAR_4)
{
 char *VAR_5 = (char *) FUNC_2(VAR_1);
 char *VAR_6, *VAR_7;
 int VAR_8 = 0;
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_4(&VAR_7, VAR_4, VAR_5, VAR_2, 0);
 if (FUNC_0(VAR_6))
  VAR_8 = FUNC_1(VAR_6);
 else
  FUNC_5(VAR_3, VAR_6, " \t\n\\");
 FUNC_3((unsigned long)VAR_5);
 return VAR_8;
}
