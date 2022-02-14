
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_4;


 VAR_4 = FUNC_5(&VAR_3, 1);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_3(&VAR_2);
 if (VAR_4)
  goto out_iucv;

 VAR_1 = FUNC_2(VAR_0, "vmlogrdr");
 if (FUNC_0(VAR_1)) {
  VAR_4 = FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
  goto out_driver;
 }
 return 0;

out_driver:
 FUNC_4(&VAR_2);
out_iucv:
 FUNC_6(&VAR_3, 1);
out:
 return VAR_4;
}
