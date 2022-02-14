
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {int called_set_creds; int buf; int file; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct linux_binprm*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct linux_binprm*) ;

int FUNC_4(struct linux_binprm *VAR_1)
{
 int VAR_2;
 loff_t VAR_3 = 0;

 FUNC_0(VAR_1);


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_1->called_set_creds = 1;

 FUNC_2(VAR_1->buf, 0, VAR_0);
 return FUNC_1(VAR_1->file, VAR_1->buf, VAR_0, &VAR_3);
}
