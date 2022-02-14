
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(u16 VAR_4)
{
 int VAR_5;

 VAR_5 = ((VAR_4 & VAR_2) >> VAR_3) * 1000;
 if (VAR_4 & VAR_0)
  VAR_5 += 500;
 if (VAR_4 & VAR_1)
  VAR_5 *= -1;

 return VAR_5;
}
