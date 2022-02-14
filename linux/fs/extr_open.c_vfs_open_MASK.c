
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;
struct file {struct path f_path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int ,int *) ;

int FUNC_2(const struct path *VAR_0, struct file *VAR_1)
{
 VAR_1->f_path = *VAR_0;
 return FUNC_1(VAR_1, FUNC_0(VAR_0->dentry), ((void*)0));
}
