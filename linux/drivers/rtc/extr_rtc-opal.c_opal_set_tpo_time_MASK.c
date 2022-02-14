
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rtc_wkalrm {int time; scalar_t__ enabled; } ;
struct opal_msg {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct opal_msg*) ;
 int FUNC_3 (struct opal_msg) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 u64 VAR_6 = 0;
 struct opal_msg VAR_7;
 u32 VAR_8 = 0;
 int VAR_9, VAR_10;


 if (VAR_5->enabled) {
  FUNC_7(&VAR_5->time, &VAR_8, &VAR_6);
  FUNC_5("Alarm set to %x %llx\n", VAR_8, VAR_6);

 } else {
  FUNC_5("Alarm getting disabled\n");
 }

 VAR_9 = FUNC_0();
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_1)
   FUNC_6("Failed to get the async token\n");

  return VAR_9;
 }


 VAR_10 = FUNC_4(VAR_9, VAR_8,
       (u32)((VAR_6 >> 32) & 0xffff0000));
 if (VAR_10 != VAR_2) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_10 = FUNC_2(VAR_9, &VAR_7);
 if (VAR_10) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10 != VAR_3)
  VAR_10 = -VAR_0;

exit:
 FUNC_1(VAR_9);
 return VAR_10;
}
