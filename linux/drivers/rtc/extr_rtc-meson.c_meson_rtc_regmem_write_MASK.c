
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_rtc {int serial; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2,
      void *VAR_3, size_t VAR_4)
{
 struct meson_rtc *VAR_5 = VAR_1;
 unsigned int VAR_6, VAR_7;

 VAR_6 = VAR_0 + (VAR_2 / 4);
 VAR_7 = VAR_4 / 4;

 return FUNC_0(VAR_5->serial, VAR_6, VAR_3, VAR_7);
}
