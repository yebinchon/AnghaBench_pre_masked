
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int intf; } ;
struct TYPE_9__ {TYPE_2__ usb; int mutex; } ;
struct TYPE_7__ {struct sk_buff* cur_beacon; } ;
struct zd_mac {TYPE_3__ chip; TYPE_1__ beacon; } ;
struct zd_ioreq32 {int value; void* addr; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_9 ;
 int FUNC_3 (struct zd_ioreq32*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct zd_ioreq32* FUNC_5 (int,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 struct zd_mac* FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (TYPE_3__*,int*,int ) ;
 int FUNC_14 (TYPE_3__*,int,int ) ;
 int FUNC_15 (TYPE_3__*,struct zd_ioreq32*,int) ;
 int FUNC_16 (struct zd_mac*) ;
 int FUNC_17 (struct zd_mac*) ;
 scalar_t__ FUNC_18 (struct zd_mac*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_19(struct ieee80211_hw *VAR_10, struct sk_buff *VAR_11,
    bool VAR_12)
{
 struct zd_mac *VAR_13 = FUNC_12(VAR_10);
 int VAR_14, VAR_15, VAR_16, VAR_17 = 0;
 u32 VAR_18, VAR_19 = 0;

 u32 VAR_20 = VAR_11->len + 4;
 unsigned long VAR_21, VAR_22;
 struct zd_ioreq32 *VAR_23;

 FUNC_7(&VAR_13->chip.mutex);


 if (FUNC_18(VAR_13, VAR_11)) {
  VAR_14 = 0;
  goto out_nofree;
 }


 VAR_16 = 1 + FUNC_11(&VAR_13->chip) + VAR_20;
 VAR_23 = FUNC_5(VAR_16, sizeof(struct zd_ioreq32),
          VAR_7);
 if (!VAR_23) {
  VAR_14 = -VAR_5;
  goto out_nofree;
 }

 VAR_14 = FUNC_14(&VAR_13->chip, 0, VAR_1);
 if (VAR_14 < 0)
  goto out;
 VAR_14 = FUNC_13(&VAR_13->chip, &VAR_18, VAR_1);
 if (VAR_14 < 0)
  goto release_sema;
 if (VAR_12 && VAR_18 & 0x2) {
  VAR_14 = -VAR_4;
  goto release_sema;
 }

 VAR_21 = VAR_9 + VAR_8 / 2;
 VAR_22 = VAR_9 + VAR_8 / 10;
 while (VAR_18 & 0x2) {
  VAR_14 = FUNC_13(&VAR_13->chip, &VAR_18, VAR_1);
  if (VAR_14 < 0)
   goto release_sema;
  if (FUNC_9(VAR_22)) {
   VAR_22 = VAR_9 + VAR_8 / 10;
   FUNC_1(FUNC_16(VAR_13),
     "CR_BCN_FIFO_SEMAPHORE not ready\n");
   if (FUNC_9(VAR_21)) {
    FUNC_1(FUNC_16(VAR_13),
      "Giving up beacon config.\n");
    VAR_14 = -VAR_6;
    goto reset_device;
   }
  }
  FUNC_6(20);
 }

 VAR_23[VAR_17].addr = VAR_0;
 VAR_23[VAR_17].value = VAR_20 - 1;
 VAR_17++;
 if (FUNC_11(&VAR_13->chip)) {
  VAR_23[VAR_17].addr = VAR_2;
  VAR_23[VAR_17].value = VAR_20 - 1;
  VAR_17++;
 }

 for (VAR_19 = 0 ; VAR_19 < VAR_11->len; VAR_19++) {
  VAR_23[VAR_17].addr = VAR_0;
  VAR_23[VAR_17].value = *((u8 *)(VAR_11->data + VAR_19));
  VAR_17++;
 }

 for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
  VAR_23[VAR_17].addr = VAR_0;
  VAR_23[VAR_17].value = 0x0;
  VAR_17++;
 }

 FUNC_0(VAR_17 != VAR_16);

 VAR_14 = FUNC_15(&VAR_13->chip, VAR_23, VAR_16);

release_sema:




 VAR_21 = VAR_9 + VAR_8 / 2;
 VAR_15 = FUNC_14(&VAR_13->chip, 1, VAR_1);
 while (VAR_15 < 0) {
  if (VAR_12 || FUNC_9(VAR_21)) {
   VAR_15 = -VAR_6;
   break;
  }

  FUNC_6(20);
  VAR_15 = FUNC_14(&VAR_13->chip, 1, VAR_1);
 }

 if (VAR_15 < 0)
  FUNC_1(FUNC_16(VAR_13), "Could not release "
      "CR_BCN_FIFO_SEMAPHORE!\n");
 if (VAR_14 < 0 || VAR_15 < 0) {
  if (VAR_14 >= 0)
   VAR_14 = VAR_15;



  FUNC_17(VAR_13);

  goto out;
 }


 FUNC_17(VAR_13);
 VAR_13->beacon.cur_beacon = VAR_11;
 VAR_11 = ((void*)0);





 VAR_14 = FUNC_14(&VAR_13->chip, 0x00000400 | (VAR_20 << 19),
    VAR_3);
out:
 FUNC_3(VAR_23);
out_nofree:
 FUNC_4(VAR_11);
 FUNC_8(&VAR_13->chip.mutex);

 return VAR_14;

reset_device:
 FUNC_17(VAR_13);
 FUNC_4(VAR_11);

 FUNC_8(&VAR_13->chip.mutex);
 FUNC_3(VAR_23);


 FUNC_2(FUNC_16(VAR_13), "CR_BCN_FIFO_SEMAPHORE stuck, "
      "resetting device...");
 FUNC_10(VAR_13->chip.usb.intf);

 return VAR_14;
}
