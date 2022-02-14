
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct bnx2x {int dummy; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __be16 ;
struct TYPE_8__ {int version; scalar_t__ protocol; } ;
struct TYPE_7__ {scalar_t__ nexthdr; } ;
struct TYPE_6__ {scalar_t__ protocol; } ;
struct TYPE_5__ {scalar_t__ nexthdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_9(struct bnx2x *VAR_14, struct sk_buff *VAR_15)
{
 u32 VAR_16;
 __u8 VAR_17 = 0;
 __be16 VAR_18;

 if (VAR_15->ip_summed != VAR_0)
  return VAR_13;

 VAR_18 = FUNC_8(VAR_15);
 if (VAR_18 == FUNC_1(VAR_1)) {
  VAR_16 = VAR_8;
  VAR_17 = FUNC_5(VAR_15)->nexthdr;
 } else {
  VAR_16 = VAR_7;
  VAR_17 = FUNC_4(VAR_15)->protocol;
 }

 if (!FUNC_0(VAR_14) && VAR_15->encapsulation) {
  if (FUNC_2(VAR_15)->version == 6) {
   VAR_16 |= VAR_5;
   if (FUNC_3(VAR_15)->nexthdr == VAR_2)
    VAR_16 |= VAR_6;
  } else {
   VAR_16 |= VAR_4;
   if (FUNC_2(VAR_15)->protocol == VAR_2)
    VAR_16 |= VAR_6;
  }
 }
 if (VAR_17 == VAR_2)
  VAR_16 |= VAR_6;

 if (FUNC_6(VAR_15)) {
  if (FUNC_7(VAR_15)) {
   VAR_16 |= (VAR_12 | VAR_6);
   if (VAR_16 & VAR_3)
    VAR_16 |= VAR_10;
  } else {
   VAR_16 |= (VAR_11 | VAR_6);
   if (VAR_16 & VAR_3)
    VAR_16 |= VAR_9;
  }
 }

 return VAR_16;
}
