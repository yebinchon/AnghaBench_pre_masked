
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_rtc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct omap_rtc*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2, void *VAR_3,
     size_t VAR_4)
{
 struct omap_rtc *VAR_5 = VAR_1;
 u32 *VAR_6 = VAR_3;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4 / 4; VAR_7++)
  VAR_6[VAR_7] = FUNC_0(VAR_5,
       VAR_0 + VAR_2 + (VAR_7 * 4));

 return 0;
}
