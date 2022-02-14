
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

__attribute__((used)) static inline unsigned int FUNC_0(unsigned int VAR_7)
{
 unsigned int VAR_8 = 0;

 if (VAR_7 & VAR_4)
  VAR_8 |= VAR_0;
 if (VAR_7 & VAR_6)
  VAR_8 |= VAR_3;
 if (VAR_7 & VAR_5)
  VAR_8 |= VAR_1;


 if (!VAR_8)
  VAR_8 = VAR_2;

 return VAR_8;
}
