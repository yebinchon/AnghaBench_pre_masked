
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int ro; int initially_ro; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct fsg_lun*) ;
 int FUNC_1 (char*,char*,int) ;

ssize_t FUNC_2(struct fsg_lun *VAR_0, char *VAR_1)
{
 return FUNC_1(VAR_1, "%d\n", FUNC_0(VAR_0)
      ? VAR_0->ro
      : VAR_0->initially_ro);
}
