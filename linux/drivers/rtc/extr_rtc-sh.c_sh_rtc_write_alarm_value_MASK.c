
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {scalar_t__ regbase; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct sh_rtc *VAR_1,
         int VAR_2, int VAR_3)
{

 if (VAR_2 < 0)
  FUNC_1(0, VAR_1->regbase + VAR_3);
 else
  FUNC_1(FUNC_0(VAR_2) | VAR_0, VAR_1->regbase + VAR_3);
}
