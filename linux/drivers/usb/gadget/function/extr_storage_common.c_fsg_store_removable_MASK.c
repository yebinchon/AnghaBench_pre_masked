
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int removable; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int*) ;

ssize_t FUNC_1(struct fsg_lun *VAR_0, const char *VAR_1,
       size_t VAR_2)
{
 bool VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_0->removable = VAR_3;

 return VAR_2;
}
