
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

int FUNC_4(u32 VAR_0, u32 VAR_1)
{
 int VAR_2;

 FUNC_3("running extent I/O tests");

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2();
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
out:
 return VAR_2;
}
