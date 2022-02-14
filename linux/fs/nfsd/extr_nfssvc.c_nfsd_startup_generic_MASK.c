
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(int VAR_1)
{
 int VAR_2;

 if (VAR_0++)
  return 0;

 VAR_2 = FUNC_1();
 if (VAR_2)
  goto dec_users;

 VAR_2 = FUNC_0();
 if (VAR_2)
  goto out_file_cache;
 return 0;

out_file_cache:
 FUNC_2();
dec_users:
 VAR_0--;
 return VAR_2;
}
