
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_wkalrm {int enabled; int time; scalar_t__ pending; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct device*,int ,int ,int*) ;
 int FUNC_2 (unsigned long,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 int VAR_6, VAR_7;
 u8 VAR_8, VAR_9;
 unsigned char VAR_10[FUNC_0(VAR_3)];
 unsigned long VAR_11, VAR_12;


 VAR_6 = FUNC_1(VAR_4, VAR_0,
  VAR_1, &VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_8 & VAR_2)
  VAR_5->enabled = 1;
 else
  VAR_5->enabled = 0;

 VAR_5->pending = 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  VAR_6 = FUNC_1(VAR_4, VAR_0,
   VAR_3[VAR_7], &VAR_9);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_10[VAR_7] = VAR_9;
 }

 VAR_12 = (VAR_10[0] << 16) | (VAR_10[1] << 8) | (VAR_10[2]);
 VAR_11 = VAR_12 * 60;

 FUNC_2(VAR_11, &VAR_5->time);

 return 0;
}
