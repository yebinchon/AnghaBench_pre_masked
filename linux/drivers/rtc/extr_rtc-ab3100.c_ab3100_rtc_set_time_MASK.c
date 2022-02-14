
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned char hw_counter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,int ,int ,int,int) ;
 int FUNC_1 (struct device*,int ,int ,unsigned char) ;
 int FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_8, struct rtc_time *VAR_9)
{
 u8 VAR_10[] = {VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7};
 unsigned char VAR_11[6];
 u64 VAR_12 = FUNC_2(VAR_9) * VAR_1 * 2;
 int VAR_13 = 0;
 int VAR_14;

 VAR_11[0] = (VAR_12) & 0xFF;
 VAR_11[1] = (VAR_12 >> 8) & 0xFF;
 VAR_11[2] = (VAR_12 >> 16) & 0xFF;
 VAR_11[3] = (VAR_12 >> 24) & 0xFF;
 VAR_11[4] = (VAR_12 >> 32) & 0xFF;
 VAR_11[5] = (VAR_12 >> 40) & 0xFF;

 for (VAR_14 = 0; VAR_14 < 6; VAR_14++) {
  VAR_13 = FUNC_1(VAR_8, 0,
       VAR_10[VAR_14], VAR_11[VAR_14]);
  if (VAR_13)
   return VAR_13;
 }


 return FUNC_0(VAR_8, 0,
         VAR_0,
         0x01, 0x01);

}
