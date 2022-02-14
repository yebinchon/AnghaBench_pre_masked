
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u8 ;
typedef unsigned long long time64_t ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (unsigned long long,struct rtc_time*) ;
 struct device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct device *VAR_3 = FUNC_2(VAR_1);
 unsigned long long VAR_4 = 0;
 time64_t VAR_5;
 u8 VAR_6[6];
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_3, VAR_0, sizeof(VAR_6), VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_1, "read counter failed with err %d\n", VAR_7);
  return VAR_7;
 }

 for (VAR_8 = 1; VAR_8 < sizeof(VAR_6); VAR_8++) {
  VAR_4 <<= 8;
  VAR_4 |= VAR_6[VAR_8];
 }

 VAR_5 = VAR_4 >> 10;
 FUNC_1(VAR_5, VAR_2);

 return 0;
}
