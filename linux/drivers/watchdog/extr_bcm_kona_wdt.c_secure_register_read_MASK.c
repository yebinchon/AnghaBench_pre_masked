
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_kona_wdt {int base; unsigned int busy_count; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct bcm_kona_wdt *VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 unsigned VAR_7 = 0;






 do {
  if (FUNC_2(VAR_7 > 1))
   FUNC_1(5);
  VAR_6 = FUNC_0(VAR_4->base + VAR_5);
  VAR_7++;
 } while ((VAR_6 & VAR_3) && VAR_7 < VAR_1);
 if (VAR_6 & VAR_3)
  return -VAR_0;


 VAR_6 &= VAR_2;

 return VAR_6;
}
