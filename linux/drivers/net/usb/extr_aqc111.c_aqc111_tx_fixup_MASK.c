
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
typedef int tx_desc ;
struct usbnet {int maxpacket; TYPE_1__* net; int can_dma_sg; } ;
struct sk_buff {int len; } ;
typedef int gfp_t ;
struct TYPE_4__ {int gso_size; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int,int,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,scalar_t__*) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct usbnet *VAR_8, struct sk_buff *VAR_9,
           gfp_t VAR_10)
{
 int VAR_11 = VAR_8->maxpacket;
 struct sk_buff *VAR_12 = ((void*)0);
 u64 *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 u64 VAR_17 = 0;
 u16 VAR_18 = 0;


 VAR_17 |= VAR_9->len & VAR_1;


 VAR_17 |= ((u64)(FUNC_7(VAR_9)->gso_size & VAR_2)) <<
     VAR_3;

 VAR_15 = (VAR_9->len + sizeof(VAR_17)) % 8;
 if (VAR_15 != 0)
  VAR_14 = 8 - VAR_15;

 if (((VAR_9->len + sizeof(VAR_17) + VAR_14) % VAR_11) == 0) {
  VAR_14 += 8;
  VAR_17 |= VAR_0;
 }


 if (FUNC_10(VAR_9, &VAR_18) >= 0) {
  VAR_17 |= VAR_4;
  VAR_17 |= ((u64)VAR_18 & VAR_5) <<
      VAR_6;
 }

 if (!VAR_8->can_dma_sg && (VAR_8->net->features & VAR_7) &&
     FUNC_4(VAR_9))
  return ((void*)0);

 VAR_15 = FUNC_3(VAR_9);
 VAR_16 = FUNC_8(VAR_9);

 if (!(VAR_15 >= sizeof(VAR_17) && VAR_16 >= VAR_14)) {
  VAR_12 = FUNC_2(VAR_9, sizeof(VAR_17),
       VAR_14, VAR_10);
  FUNC_1(VAR_9);
  VAR_9 = VAR_12;
  if (!VAR_9)
   return ((void*)0);
 }
 if (VAR_14 != 0)
  FUNC_6(VAR_9, VAR_14);

 VAR_13 = FUNC_5(VAR_9, sizeof(VAR_17));
 *VAR_13 = FUNC_0(VAR_17);

 FUNC_9(VAR_9, 1, 0);

 return VAR_9;
}
