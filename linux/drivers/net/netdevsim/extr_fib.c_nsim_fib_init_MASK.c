
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_2);
 if (VAR_3 < 0) {
  FUNC_0("Failed to register pernet subsystem\n");
  goto err_out;
 }

 VAR_3 = FUNC_1(&VAR_1, VAR_0);
 if (VAR_3 < 0) {
  FUNC_0("Failed to register fib notifier\n");
  FUNC_3(&VAR_2);
  goto err_out;
 }

err_out:
 return VAR_3;
}
