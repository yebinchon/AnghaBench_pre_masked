
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4740_rtc {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct jz4740_rtc*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct jz4740_rtc *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6, VAR_7 = 10000;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 != 0)
  return VAR_6;

 FUNC_2(VAR_2, VAR_4->base + VAR_1);

 do {
  VAR_5 = FUNC_1(VAR_4->base + VAR_1);
 } while (!(VAR_5 & VAR_3) && --VAR_7);

 return VAR_7 ? 0 : -VAR_0;
}
