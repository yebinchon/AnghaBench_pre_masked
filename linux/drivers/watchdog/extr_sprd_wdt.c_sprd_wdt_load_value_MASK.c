
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sprd_wdt {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sprd_wdt *VAR_11, u32 VAR_12,
          u32 VAR_13)
{
 u32 VAR_14, VAR_15 = 0;
 u32 VAR_16 = VAR_12 * VAR_2;
 u32 VAR_17 = VAR_13 * VAR_2;

 FUNC_3(VAR_11->base);
 FUNC_4((VAR_16 >> VAR_1) &
        VAR_10, VAR_11->base + VAR_7);
 FUNC_4((VAR_16 & VAR_10),
         VAR_11->base + VAR_8);
 FUNC_4((VAR_17 >> VAR_1) &
   VAR_10,
         VAR_11->base + VAR_4);
 FUNC_4(VAR_17 & VAR_10,
         VAR_11->base + VAR_5);
 FUNC_2(VAR_11->base);





 do {
  VAR_14 = FUNC_1(VAR_11->base + VAR_3);
  if (!(VAR_14 & VAR_6))
   break;

  FUNC_0();
 } while (VAR_15++ < VAR_9);

 if (VAR_15 >= VAR_9)
  return -VAR_0;
 return 0;
}
