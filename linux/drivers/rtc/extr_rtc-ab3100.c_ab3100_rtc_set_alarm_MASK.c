
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int time64_t ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,int ,int ,int,int) ;
 int FUNC_1 (struct device*,int ,int ,unsigned char) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 u8 VAR_8[] = {VAR_0, VAR_1, VAR_2, VAR_3};
 unsigned char VAR_9[4];
 time64_t VAR_10;
 u64 VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(&VAR_7->time);
 VAR_11 = VAR_10 * VAR_5 * 2;
 VAR_9[0] = (VAR_11 >> 16) & 0xFF;
 VAR_9[1] = (VAR_11 >> 24) & 0xFF;
 VAR_9[2] = (VAR_11 >> 32) & 0xFF;
 VAR_9[3] = (VAR_11 >> 40) & 0xFF;


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_12 = FUNC_1(VAR_6, 0,
       VAR_8[VAR_13], VAR_9[VAR_13]);
  if (VAR_12)
   return VAR_12;
 }

 return FUNC_0(VAR_6, 0,
         VAR_4, (1 << 2),
         VAR_7->enabled << 2);
}
