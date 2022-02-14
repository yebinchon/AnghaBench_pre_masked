
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {scalar_t__ protocol; int len; struct net_device* dev; int data; } ;
struct net_device {int features; } ;
struct iphdr {scalar_t__ protocol; } ;
struct TYPE_2__ {int gso_size; int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (int ) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct iphdr*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_18, u64 *VAR_19)
{
 struct net_device *VAR_20 = VAR_18->dev;
 struct iphdr *VAR_21;
 u8 VAR_22 = 0, VAR_23 = 0;
 u8 VAR_24, VAR_25 = 0, VAR_26 = 0;
 u32 VAR_27, VAR_28 = 0;
 u32 VAR_29, VAR_30, VAR_31;
 int VAR_32;

 VAR_24 = FUNC_14(VAR_18->data);

 if (FUNC_13(VAR_18->protocol != FUNC_2(VAR_5)) &&
     FUNC_13(VAR_18->protocol != FUNC_2(VAR_4)))
  goto out;

 if (FUNC_13(!(VAR_18->dev->features & VAR_12)))
  goto out;

 VAR_21 = FUNC_3(VAR_18);
 if (FUNC_13(FUNC_5(VAR_21)))
  goto out;

 if (FUNC_6(VAR_21->protocol == VAR_8)) {
  VAR_23 = FUNC_12(VAR_18) >> 2;
  VAR_26 = 1;
  VAR_25 = VAR_15;
  if (VAR_20->features & VAR_13) {
   VAR_27 = VAR_24 + FUNC_4(VAR_18) + FUNC_12(VAR_18);
   VAR_28 = FUNC_11(VAR_18)->gso_size;

   if (FUNC_9(VAR_18)) {
    VAR_30 = FUNC_8(VAR_18);
    VAR_31 = FUNC_11(VAR_18)->nr_frags;

    for (VAR_29 = 0; VAR_29 < 2 && VAR_29 < VAR_31; VAR_29++)
     VAR_30 += FUNC_7(
      &FUNC_11(VAR_18)->frags[VAR_29]);


    if (FUNC_13(VAR_27 > VAR_30)) {
     if (FUNC_10(VAR_18))
      return 0;
    }
   }

   if (!VAR_28 || ((VAR_18->len - VAR_27) <= VAR_28))
    goto out;

   VAR_32 = FUNC_15(VAR_20, VAR_28);
   if (FUNC_13(VAR_32 < 0))
    return -VAR_0;

   *VAR_19 |= FUNC_0(VAR_2) | FUNC_1(VAR_11, VAR_32);
  }
 } else if (VAR_21->protocol == VAR_9) {
  VAR_23 = VAR_17;
  VAR_26 = 1;
 }
out:
 VAR_22 = FUNC_4(VAR_18) >> 2;
 *VAR_19 |= FUNC_1(VAR_14, VAR_23) |
      FUNC_1(VAR_7, VAR_22) |
      FUNC_1(VAR_3, VAR_24) |
      FUNC_1(VAR_1, VAR_26) |
      FUNC_1(VAR_10, VAR_25) |
      FUNC_0(VAR_6) |
      FUNC_0(VAR_16);

 return 0;
}
