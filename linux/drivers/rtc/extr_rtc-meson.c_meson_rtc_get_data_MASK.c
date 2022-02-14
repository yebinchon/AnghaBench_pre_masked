
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_rtc {int peripheral; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct meson_rtc*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static u32 FUNC_2(struct meson_rtc *VAR_3)
{
 u32 VAR_4, VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_0(VAR_3);
  VAR_5 <<= 1;

  FUNC_1(VAR_3->peripheral, VAR_0, &VAR_4);
  VAR_5 |= VAR_4 & VAR_1;
 }

 return VAR_5;
}
