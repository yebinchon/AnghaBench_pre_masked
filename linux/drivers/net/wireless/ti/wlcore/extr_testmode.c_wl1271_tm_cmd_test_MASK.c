
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl1271_command {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct wl1271_cmd_cal_p2g {TYPE_1__ test; int radio_status; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; TYPE_2__* hw; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int s16 ;
struct TYPE_4__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sk_buff* FUNC_0 (int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (struct nlattr*) ;
 scalar_t__ FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,size_t,int,void*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct wl1271*,void*,int,scalar_t__) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (char*,int) ;

__attribute__((used)) static int FUNC_20(struct wl1271 *VAR_8, struct nlattr *VAR_9[])
{
 int VAR_10, VAR_11, VAR_12;
 struct sk_buff *VAR_13;
 void *VAR_14;
 u8 VAR_15 = 0;

 FUNC_17(VAR_0, "testmode cmd test");

 if (!VAR_9[VAR_6])
  return -VAR_1;

 VAR_14 = FUNC_6(VAR_9[VAR_6]);
 VAR_10 = FUNC_8(VAR_9[VAR_6]);

 if (VAR_9[VAR_5])
  VAR_15 = FUNC_7(VAR_9[VAR_5]);

 if (VAR_10 > sizeof(struct wl1271_command))
  return -VAR_2;

 FUNC_4(&VAR_8->mutex);

 if (FUNC_15(VAR_8->state != VAR_7)) {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_11 = FUNC_11(VAR_8->dev);
 if (VAR_11 < 0) {
  FUNC_14(VAR_8->dev);
  goto out;
 }

 VAR_11 = FUNC_16(VAR_8, VAR_14, VAR_10, VAR_15);
 if (VAR_11 < 0) {
  FUNC_19("testmode cmd test failed: %d", VAR_11);
  goto out_sleep;
 }

 if (VAR_15) {

  struct wl1271_cmd_cal_p2g *VAR_16 =
   (struct wl1271_cmd_cal_p2g *) VAR_14;

  s16 VAR_17 = (s16) FUNC_3(VAR_16->radio_status);

  if (VAR_16->test.id == VAR_4 &&
      VAR_17 < 0)
   FUNC_19("testmode cmd: radio status=%d",
     VAR_17);
  else
   FUNC_18("testmode cmd: radio status=%d",
     VAR_17);

  VAR_12 = FUNC_10(VAR_10);
  VAR_13 = FUNC_0(VAR_8->hw->wiphy, VAR_12);
  if (!VAR_13) {
   VAR_11 = -VAR_3;
   goto out_sleep;
  }

  if (FUNC_9(VAR_13, VAR_6, VAR_10, VAR_14)) {
   FUNC_2(VAR_13);
   VAR_11 = -VAR_2;
   goto out_sleep;
  }

  VAR_11 = FUNC_1(VAR_13);
  if (VAR_11 < 0)
   goto out_sleep;
 }

out_sleep:
 FUNC_12(VAR_8->dev);
 FUNC_13(VAR_8->dev);
out:
 FUNC_5(&VAR_8->mutex);

 return VAR_11;
}
