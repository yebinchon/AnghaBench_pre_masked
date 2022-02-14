
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1, u8 *VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_0);


 VAR_3 = FUNC_1();
 if (VAR_3)
  goto out;

 *VAR_2 = FUNC_2(VAR_1);
 FUNC_0();

out:
 FUNC_4(&VAR_0);
 return VAR_3;
}
