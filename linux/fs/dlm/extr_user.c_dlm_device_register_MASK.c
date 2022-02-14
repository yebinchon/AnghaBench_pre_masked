
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; int minor; int * fops; } ;
struct dlm_ls {TYPE_1__ ls_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 char* VAR_4 ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct dlm_ls *VAR_5, char *VAR_6)
{
 int VAR_7, VAR_8;



 if (VAR_5->ls_device.name)
  return 0;

 VAR_7 = -VAR_0;
 VAR_8 = FUNC_4(VAR_6) + FUNC_4(VAR_4) + 2;
 VAR_5->ls_device.name = FUNC_1(VAR_8, VAR_1);
 if (!VAR_5->ls_device.name)
  goto fail;

 FUNC_3((char *)VAR_5->ls_device.name, VAR_8, "%s_%s", VAR_4,
   VAR_6);
 VAR_5->ls_device.fops = &VAR_3;
 VAR_5->ls_device.minor = VAR_2;

 VAR_7 = FUNC_2(&VAR_5->ls_device);
 if (VAR_7) {
  FUNC_0(VAR_5->ls_device.name);



  VAR_5->ls_device.name = ((void*)0);
 }
fail:
 return VAR_7;
}
