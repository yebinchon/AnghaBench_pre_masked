
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
typedef scalar_t__ __be16 ;
struct TYPE_4__ {scalar_t__ nexthdr; } ;
struct TYPE_3__ {unsigned short gso_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_5(struct sk_buff *VAR_10, int *VAR_11)
{
 u32 VAR_12 = VAR_7;
 __be16 VAR_13;

 if (VAR_10->ip_summed != VAR_0)
  return VAR_9;

 VAR_13 = FUNC_4(VAR_10);
 if (VAR_13 == FUNC_0(VAR_1) &&
     (FUNC_1(VAR_10)->nexthdr == VAR_2))
  *VAR_11 = 1;

 if (VAR_10->encapsulation) {
  VAR_12 |= VAR_5;
  if (FUNC_2(VAR_10)) {
   unsigned short VAR_14 = FUNC_3(VAR_10)->gso_type;

   if ((VAR_14 & VAR_4) ||
       (VAR_14 & VAR_3))
    VAR_12 |= VAR_6;

   VAR_12 |= VAR_8;
   return VAR_12;
  }
 }

 if (FUNC_2(VAR_10))
  VAR_12 |= VAR_8;

 return VAR_12;
}
