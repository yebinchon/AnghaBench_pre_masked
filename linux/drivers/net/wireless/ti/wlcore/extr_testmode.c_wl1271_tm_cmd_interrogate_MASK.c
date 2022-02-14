
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl1271_command {int dummy; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; TYPE_1__* hw; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct acx_header {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sk_buff* FUNC_0 (int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct wl1271_command*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct wl1271_command* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nlattr*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int,struct wl1271_command*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct wl1271*,int ,struct wl1271_command*,int,int) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (char*,int) ;

__attribute__((used)) static int FUNC_17(struct wl1271 *VAR_8, struct nlattr *VAR_9[])
{
 int VAR_10;
 struct wl1271_command *VAR_11;
 struct sk_buff *VAR_12;
 u8 VAR_13;

 FUNC_15(VAR_0, "testmode cmd interrogate");

 if (!VAR_9[VAR_6])
  return -VAR_1;

 VAR_13 = FUNC_7(VAR_9[VAR_6]);

 FUNC_5(&VAR_8->mutex);

 if (FUNC_13(VAR_8->state != VAR_7)) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_9(VAR_8->dev);
 if (VAR_10 < 0) {
  FUNC_12(VAR_8->dev);
  goto out;
 }

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_4);
 if (!VAR_11) {
  VAR_10 = -VAR_3;
  goto out_sleep;
 }

 VAR_10 = FUNC_14(VAR_8, VAR_13, VAR_11,
         sizeof(struct acx_header), sizeof(*VAR_11));
 if (VAR_10 < 0) {
  FUNC_16("testmode cmd interrogate failed: %d", VAR_10);
  goto out_free;
 }

 VAR_12 = FUNC_0(VAR_8->hw->wiphy, sizeof(*VAR_11));
 if (!VAR_12) {
  VAR_10 = -VAR_3;
  goto out_free;
 }

 if (FUNC_8(VAR_12, VAR_5, sizeof(*VAR_11), VAR_11)) {
  FUNC_3(VAR_12);
  VAR_10 = -VAR_2;
  goto out_free;
 }

 VAR_10 = FUNC_1(VAR_12);
 if (VAR_10 < 0)
  goto out_free;

out_free:
 FUNC_2(VAR_11);
out_sleep:
 FUNC_10(VAR_8->dev);
 FUNC_11(VAR_8->dev);
out:
 FUNC_6(&VAR_8->mutex);

 return VAR_10;
}
