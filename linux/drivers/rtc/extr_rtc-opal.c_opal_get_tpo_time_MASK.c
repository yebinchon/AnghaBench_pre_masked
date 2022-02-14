
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct rtc_wkalrm {int time; } ;
struct opal_msg {int dummy; } ;
struct device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct opal_msg*) ;
 int FUNC_4 (struct opal_msg) ;
 int FUNC_5 (scalar_t__,int,int *) ;
 int FUNC_6 (int,int *,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 __be32 VAR_7, VAR_8;
 struct opal_msg VAR_9;
 int VAR_10, VAR_11;
 u64 VAR_12;
 u32 VAR_13;

 VAR_11 = FUNC_1();
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_2)
   FUNC_8("Failed to get the async token\n");

  return VAR_11;
 }

 VAR_10 = FUNC_6(VAR_11, &VAR_7, &VAR_8);
 if (VAR_10 != VAR_3) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_10 = FUNC_3(VAR_11, &VAR_9);
 if (VAR_10) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10 != VAR_4) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_13 = FUNC_0(VAR_7);
 VAR_12 = ((u64)FUNC_0(VAR_8) << 32);


 if (VAR_13 == 0 && VAR_12 == 0) {
  FUNC_7("No alarm is set\n");
  VAR_10 = -VAR_1;
  goto exit;
 } else {
  FUNC_7("Alarm set to %x %llx\n", VAR_13, VAR_12);
 }

 FUNC_5(VAR_13, VAR_12, &VAR_6->time);

exit:
 FUNC_2(VAR_11);
 return VAR_10;
}
