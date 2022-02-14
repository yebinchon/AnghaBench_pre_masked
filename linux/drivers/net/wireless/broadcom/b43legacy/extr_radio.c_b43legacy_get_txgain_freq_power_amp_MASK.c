
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(u16 VAR_0)
{
 u16 VAR_1;

 FUNC_0(VAR_0 > 63);

 if (VAR_0 >= 32)
  VAR_1 = 0;
 else if (VAR_0 >= 25)
  VAR_1 = 1;
 else if (VAR_0 >= 20)
  VAR_1 = 2;
 else if (VAR_0 >= 12)
  VAR_1 = 3;
 else
  VAR_1 = 4;

 return VAR_1;
}
