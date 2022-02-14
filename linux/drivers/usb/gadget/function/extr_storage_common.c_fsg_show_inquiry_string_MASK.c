
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {char* inquiry_string; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;

ssize_t FUNC_1(struct fsg_lun *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%s\n", VAR_0->inquiry_string);
}
