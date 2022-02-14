
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static inline u8 FUNC_1(void *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 & VAR_0)

  return (VAR_4 >> VAR_2) &
   VAR_1;
 else

  return VAR_4 & VAR_1;
}
