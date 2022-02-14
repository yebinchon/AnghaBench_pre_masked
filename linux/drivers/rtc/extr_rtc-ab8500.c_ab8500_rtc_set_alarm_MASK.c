
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,struct rtc_time*) ;
 int FUNC_3 (struct device*,int ,int ,unsigned char) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned char VAR_7[FUNC_0(VAR_2)];
 unsigned long VAR_8, VAR_9 = 0, VAR_10 = 0;
 struct rtc_time VAR_11;


 FUNC_5(&VAR_4->time, &VAR_9);






 FUNC_2(VAR_3, &VAR_11);
 FUNC_5(&VAR_11, &VAR_10);
 if ((VAR_9 - VAR_10) < 59) {
  FUNC_4(VAR_3, "Alarm less than 1 minute not supported\r\n");
  return -VAR_1;
 }

 VAR_8 = VAR_9 / 60;

 VAR_7[2] = VAR_8 & 0xFF;
 VAR_7[1] = (VAR_8 >> 8) & 0xFF;
 VAR_7[0] = (VAR_8 >> 16) & 0xFF;


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_5 = FUNC_3(VAR_3, VAR_0,
   VAR_2[VAR_6], VAR_7[VAR_6]);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return FUNC_1(VAR_3, VAR_4->enabled);
}
