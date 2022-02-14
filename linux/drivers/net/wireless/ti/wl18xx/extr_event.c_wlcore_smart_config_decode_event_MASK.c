
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl1271 {TYPE_1__* hw; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (int ,int *,scalar_t__,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_6,
         u8 VAR_7, u8 *VAR_8,
         u8 VAR_9, u8 *VAR_10)
{
 struct sk_buff *VAR_11;

 FUNC_4(VAR_0, "SMART_CONFIG_DECODE_EVENT_ID");
 FUNC_5(VAR_0, "SSID:", VAR_8, VAR_7);

 VAR_11 = FUNC_1(VAR_6->hw->wiphy, ((void*)0),
       VAR_7 + VAR_9 + 20,
       VAR_5,
       VAR_2);

 if (FUNC_3(VAR_11, VAR_4, VAR_7, VAR_8) ||
     FUNC_3(VAR_11, VAR_3, VAR_9, VAR_10)) {
  FUNC_2(VAR_11);
  return -VAR_1;
 }
 FUNC_0(VAR_11, VAR_2);
 return 0;
}
