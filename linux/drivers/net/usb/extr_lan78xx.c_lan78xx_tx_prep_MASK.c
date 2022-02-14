
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ ip_summed; } ;
struct lan78xx_net {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,void*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 void* FUNC_6 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct lan78xx_net *VAR_12,
           struct sk_buff *VAR_13, gfp_t VAR_14)
{
 u32 VAR_15, VAR_16;
 void *VAR_17;

 if (FUNC_4(VAR_13, VAR_11)) {
  FUNC_0(VAR_13);
  return ((void*)0);
 }

 if (FUNC_1(VAR_13) < 0)
  return ((void*)0);

 VAR_15 = (u32)(VAR_13->len & VAR_4) | VAR_1;

 if (VAR_13->ip_summed == VAR_0)
  VAR_15 |= VAR_2 | VAR_6;

 VAR_16 = 0;
 if (FUNC_5(VAR_13)) {
  u16 VAR_18 = FUNC_2(FUNC_7(VAR_13)->gso_size, VAR_8);

  VAR_16 = (VAR_18 << VAR_9) & VAR_7;

  VAR_15 |= VAR_5;
 }

 if (FUNC_9(VAR_13)) {
  VAR_15 |= VAR_3;
  VAR_16 |= FUNC_8(VAR_13) & VAR_10;
 }

 VAR_17 = FUNC_6(VAR_13, 8);
 FUNC_3(VAR_15, VAR_17);
 FUNC_3(VAR_16, VAR_17 + 4);

 return VAR_13;
}
