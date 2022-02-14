
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(void)
{
 int VAR_5;
 VAR_1 = FUNC_0("accessibility", ((void*)0));
 if (!VAR_1) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_0("speakup", VAR_1);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto err_acc;
 }


 VAR_5 = FUNC_2(VAR_4, &VAR_3);
 if (VAR_5)
  goto err_speakup;

 VAR_5 = FUNC_2(VAR_4, &VAR_2);
 if (VAR_5)
  goto err_group;

 goto out;

err_group:
 FUNC_3(VAR_4, &VAR_3);
err_speakup:
 FUNC_1(VAR_4);
err_acc:
 FUNC_1(VAR_1);
out:
 return VAR_5;
}
