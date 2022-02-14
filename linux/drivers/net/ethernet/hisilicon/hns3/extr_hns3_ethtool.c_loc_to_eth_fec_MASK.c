
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static unsigned int FUNC_1(u8 VAR_7)
{
 u32 VAR_8 = 0;

 if (VAR_7 & FUNC_0(VAR_4))
  VAR_8 |= VAR_0;
 if (VAR_7 & FUNC_0(VAR_6))
  VAR_8 |= VAR_3;
 if (VAR_7 & FUNC_0(VAR_5))
  VAR_8 |= VAR_1;


 if (!VAR_8)
  VAR_8 = VAR_2;

 return VAR_8;
}
