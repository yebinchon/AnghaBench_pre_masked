
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_rtc {int dummy; } ;


 int FUNC_0 (struct meson_rtc*,int) ;

__attribute__((used)) static void FUNC_1(struct meson_rtc *VAR_0, u32 VAR_1,
    unsigned int VAR_2)
{
 u32 VAR_3 = 1 << (VAR_2 - 1);

 while (VAR_3) {
  FUNC_0(VAR_0, VAR_1 & VAR_3);
  VAR_3 >>= 1;
 }
}
