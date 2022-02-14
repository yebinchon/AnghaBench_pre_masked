
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u32 VAR_2)
{
 int VAR_3 = 1;

 if ((VAR_2 & VAR_0) != VAR_0)
  goto out;
 if ((VAR_2 & VAR_1) != 0)
  goto out;

 VAR_3 = 0;
out:
 return VAR_3;
}
