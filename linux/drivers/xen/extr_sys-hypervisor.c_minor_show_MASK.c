
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hyp_sysfs_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct hyp_sysfs_attr *VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, ((void*)0));
 if (VAR_4)
  return FUNC_1(VAR_3, "%d\n", VAR_4 & 0xff);
 return -VAR_0;
}
