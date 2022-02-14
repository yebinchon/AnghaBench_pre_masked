
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_7)
{
 u32 VAR_8 = 0;

 if (VAR_7 & VAR_2)
  return VAR_8;

 if (VAR_7 & VAR_0)
  VAR_8 |= FUNC_0(VAR_4);
 if (VAR_7 & VAR_3)
  VAR_8 |= FUNC_0(VAR_6);
 if (VAR_7 & VAR_1)
  VAR_8 |= FUNC_0(VAR_5);

 return VAR_8;
}
