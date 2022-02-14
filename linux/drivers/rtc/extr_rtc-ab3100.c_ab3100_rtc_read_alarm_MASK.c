
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int time64_t ;
struct rtc_wkalrm {int enabled; int time; scalar_t__ pending; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int*) ;
 int FUNC_1 (struct device*,int ,int ,int*,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 time64_t VAR_5;
 u64 VAR_6;
 u8 VAR_7[6];
 u8 VAR_8;
 int VAR_9;


 VAR_9 = FUNC_0(VAR_3, 0,
      VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;
 if (VAR_8 & 0x04)
  VAR_4->enabled = 1;
 else
  VAR_4->enabled = 0;

 VAR_4->pending = 0;

 VAR_9 = FUNC_1(VAR_3, 0,
           VAR_0, VAR_7, 4);
 if (VAR_9)
  return VAR_9;
 VAR_6 = ((u64) VAR_7[3] << 40) | ((u64) VAR_7[2] << 32) |
  ((u64) VAR_7[1] << 24) | ((u64) VAR_7[0] << 16);
 VAR_5 = VAR_6 / (u64) (VAR_2 * 2);

 FUNC_2(VAR_5, &VAR_4->time);

 return FUNC_3(&VAR_4->time);
}
