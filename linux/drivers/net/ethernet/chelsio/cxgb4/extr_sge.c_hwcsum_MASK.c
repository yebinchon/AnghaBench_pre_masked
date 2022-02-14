
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct sk_buff {scalar_t__ csum_offset; scalar_t__ encapsulation; } ;
typedef enum chip_type { ____Placeholder_chip_type } chip_type ;
struct TYPE_8__ {int version; int protocol; } ;
struct TYPE_7__ {int nexthdr; } ;
struct TYPE_6__ {int version; int protocol; } ;
struct TYPE_5__ {int nexthdr; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_7 (struct sk_buff const*) ;
 TYPE_3__* FUNC_8 (struct sk_buff const*) ;
 TYPE_2__* FUNC_9 (struct sk_buff const*) ;
 TYPE_1__* FUNC_10 (struct sk_buff const*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct sk_buff const*) ;
 int FUNC_13 (struct sk_buff const*) ;
 int FUNC_14 (struct sk_buff const*) ;
 int FUNC_15 (struct sk_buff const*) ;
 int FUNC_16 (struct sk_buff const*) ;

__attribute__((used)) static u64 FUNC_17(enum chip_type VAR_9, const struct sk_buff *VAR_10)
{
 int VAR_11;
 bool VAR_12 = 0;
 u16 VAR_13, VAR_14;

 if (VAR_10->encapsulation &&
     (FUNC_0(VAR_9) > VAR_0))
  VAR_12 = 1;

 if (VAR_12) {
  VAR_14 = FUNC_7(VAR_10)->version;
  VAR_13 = (VAR_14 == 4) ? FUNC_7(VAR_10)->protocol :
   FUNC_8(VAR_10)->nexthdr;
 } else {
  VAR_14 = FUNC_9(VAR_10)->version;
  VAR_13 = (VAR_14 == 4) ? FUNC_9(VAR_10)->protocol :
   FUNC_10(VAR_10)->nexthdr;
 }

 if (VAR_14 == 4) {
  if (VAR_13 == VAR_2)
   VAR_11 = VAR_5;
  else if (VAR_13 == VAR_3)
   VAR_11 = VAR_7;
  else {
nocsum:



   return VAR_4;
  }
 } else {



  if (VAR_13 == VAR_2)
   VAR_11 = VAR_6;
  else if (VAR_13 == VAR_3)
   VAR_11 = VAR_8;
  else
   goto nocsum;
 }

 if (FUNC_11(VAR_11 >= VAR_5)) {
  int VAR_15, VAR_16;
  u64 VAR_17;

  if (VAR_12) {



   VAR_16 = FUNC_12(VAR_10);
   VAR_15 = FUNC_13(VAR_10) - VAR_1;
  } else {
   VAR_16 = FUNC_14(VAR_10);
   VAR_15 = FUNC_15(VAR_10) - VAR_1;
  }
  VAR_17 = FUNC_6(VAR_16);

  if (FUNC_0(VAR_9) <= VAR_0)
   VAR_17 |= FUNC_5(VAR_15);
  else
   VAR_17 |= FUNC_1(VAR_15);
  return FUNC_4(VAR_11) | VAR_17;
 } else {
  int VAR_18 = FUNC_16(VAR_10);

  return FUNC_4(VAR_11) |
   FUNC_3(VAR_18) |
   FUNC_2(VAR_18 + VAR_10->csum_offset);
 }
}
