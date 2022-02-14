
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct max8925_rtc_info {int rtc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct max8925_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int,unsigned char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7, struct rtc_wkalrm *VAR_8)
{
 struct max8925_rtc_info *VAR_9 = FUNC_0(VAR_7);
 unsigned char VAR_10[VAR_6];
 int VAR_11;

 VAR_11 = FUNC_1(VAR_9->rtc, VAR_3, VAR_6, VAR_10);
 if (VAR_11 < 0)
  goto out;
 VAR_11 = FUNC_3(&VAR_8->time, VAR_10, VAR_6);
 if (VAR_11 < 0)
  goto out;
 VAR_11 = FUNC_2(VAR_9->rtc, VAR_4);
 if (VAR_11 < 0)
  goto out;
 if (VAR_11 & VAR_0) {
  VAR_8->enabled = 0;
 } else {
  VAR_11 = FUNC_2(VAR_9->rtc, VAR_2);
  if (VAR_11 < 0)
   goto out;
  if (!VAR_11)
   VAR_8->enabled = 0;
  else
   VAR_8->enabled = 1;
 }
 VAR_11 = FUNC_2(VAR_9->rtc, VAR_5);
 if (VAR_11 < 0)
  goto out;
 if (VAR_11 & VAR_1)
  VAR_8->pending = 1;
 else
  VAR_8->pending = 0;
 return 0;
out:
 return VAR_11;
}
