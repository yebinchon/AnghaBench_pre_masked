
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_2 ;
 unsigned char VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct device*,int ,int ,unsigned char) ;
 int FUNC_2 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, struct rtc_time *VAR_6)
{
 int VAR_7, VAR_8;
 unsigned char VAR_9[FUNC_0(VAR_4)];
 unsigned long VAR_10, VAR_11, VAR_12 = 0;

 FUNC_2(VAR_6, &VAR_12);

 VAR_11 = VAR_12 / 60;

 VAR_10 = VAR_12 % 60;

 VAR_10 = VAR_10 * VAR_2;

 VAR_9[4] = VAR_10 & 0xFF;
 VAR_9[3] = (VAR_10 >> 8) & 0xFF;

 VAR_9[2] = VAR_11 & 0xFF;
 VAR_9[1] = (VAR_11 >> 8) & 0xFF;
 VAR_9[0] = (VAR_11 >> 16) & 0xFF;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  VAR_7 = FUNC_1(VAR_5, VAR_0,
   VAR_4[VAR_8], VAR_9[VAR_8]);
  if (VAR_7 < 0)
   return VAR_7;
 }


 return FUNC_1(VAR_5, VAR_0,
  VAR_1, VAR_3);
}
