
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static inline u8 FUNC_1(unsigned int VAR_2)
{
 if (FUNC_0(VAR_2))
  return (VAR_2 & VAR_0)
   | VAR_1;
 else
  return VAR_2 & VAR_0;
}
