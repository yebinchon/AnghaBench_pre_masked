
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_4 = 0;


 if (FUNC_0(1, &VAR_3) > 1)
  return 0;

 VAR_4 = FUNC_5(&VAR_2);
 if (VAR_4)
  goto out;

 VAR_1 = FUNC_3("sony-laptop", -1);
 if (!VAR_1) {
  VAR_4 = -VAR_0;
  goto out_platform_registered;
 }

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  goto out_platform_alloced;

 return 0;

      out_platform_alloced:
 FUNC_4(VAR_1);
 VAR_1 = ((void*)0);
      out_platform_registered:
 FUNC_6(&VAR_2);
      out:
 FUNC_1(&VAR_3);
 return VAR_4;
}
