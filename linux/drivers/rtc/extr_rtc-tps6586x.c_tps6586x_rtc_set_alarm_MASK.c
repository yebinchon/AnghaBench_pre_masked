
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u8 ;
typedef unsigned long time64_t ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;
typedef int rbuff ;
typedef int buff ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 unsigned long FUNC_1 (int *) ;
 struct device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int,unsigned long long*) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,int ,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct device *VAR_5 = FUNC_2(VAR_3);
 time64_t VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long long VAR_9 = 0;
 u8 VAR_10[3];
 u8 VAR_11[6];
 int VAR_12;
 int VAR_13;

 VAR_6 = FUNC_1(&VAR_4->time);

 VAR_12 = FUNC_4(VAR_3, VAR_4->enabled);
 if (VAR_12 < 0) {
  FUNC_0(VAR_3, "can't set alarm irq, err %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_5, VAR_2,
   sizeof(VAR_11), VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(VAR_3, "read counter failed with err %d\n", VAR_12);
  return VAR_12;
 }

 for (VAR_13 = 1; VAR_13 < sizeof(VAR_11); VAR_13++) {
  VAR_9 <<= 8;
  VAR_9 |= VAR_11[VAR_13];
 }

 VAR_8 = VAR_9 >> 10;
 if ((VAR_6 - VAR_8) > VAR_0)
  VAR_6 = VAR_8 - 1;

 VAR_7 = (unsigned long long)VAR_6 << 10;
 VAR_10[0] = (VAR_7 >> 16) & 0xff;
 VAR_10[1] = (VAR_7 >> 8) & 0xff;
 VAR_10[2] = VAR_7 & 0xff;

 VAR_12 = FUNC_5(VAR_5, VAR_1, sizeof(VAR_10), VAR_10);
 if (VAR_12)
  FUNC_0(VAR_3, "programming alarm failed with err %d\n", VAR_12);

 return VAR_12;
}
