
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int time64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static inline time64_t FUNC_1(void)
{

 unsigned long VAR_3, VAR_4, VAR_5;

 unsigned long VAR_6, VAR_7, VAR_8;

 do {
  VAR_3 = FUNC_0(VAR_1);
  VAR_4 = FUNC_0(VAR_2);
  VAR_5 = FUNC_0(VAR_0);
  VAR_6 = FUNC_0(VAR_1);
  VAR_7 = FUNC_0(VAR_2);
  VAR_8 = FUNC_0(VAR_0);
 } while (VAR_3 != VAR_6 || VAR_4 != VAR_7 ||
   VAR_5 != VAR_8);

 return ((u64)VAR_5 << 17) | (VAR_4 << 1) | (VAR_3 >> 15);
}
