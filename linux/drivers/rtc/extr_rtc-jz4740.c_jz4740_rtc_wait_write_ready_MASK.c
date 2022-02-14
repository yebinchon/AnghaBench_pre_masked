
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4740_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jz4740_rtc*,int ) ;

__attribute__((used)) static int FUNC_1(struct jz4740_rtc *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5 = 10000;

 do {
  VAR_4 = FUNC_0(VAR_3, VAR_1);
 } while (!(VAR_4 & VAR_2) && --VAR_5);

 return VAR_5 ? 0 : -VAR_0;
}
