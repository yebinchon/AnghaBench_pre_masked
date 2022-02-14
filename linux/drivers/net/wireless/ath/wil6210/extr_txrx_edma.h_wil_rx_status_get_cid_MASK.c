
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static inline u8 FUNC_1(void *VAR_5)
{
 u16 VAR_6 = FUNC_0(VAR_5);

 if (VAR_6 & VAR_2)

  return (VAR_6 >> VAR_3) &
   VAR_4;
 else

  return (VAR_6 >> VAR_0) &
   VAR_1;
}
