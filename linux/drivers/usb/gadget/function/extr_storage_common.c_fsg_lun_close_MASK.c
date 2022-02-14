
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int * filp; } ;


 int FUNC_0 (struct fsg_lun*,char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct fsg_lun *VAR_0)
{
 if (VAR_0->filp) {
  FUNC_0(VAR_0, "close backing file\n");
  FUNC_1(VAR_0->filp);
  VAR_0->filp = ((void*)0);
 }
}
