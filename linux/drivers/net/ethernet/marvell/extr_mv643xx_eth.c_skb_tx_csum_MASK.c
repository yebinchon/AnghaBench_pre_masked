
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; scalar_t__ data; } ;
struct mv643xx_eth_private {TYPE_1__* shared; } ;
struct TYPE_4__ {int ihl; int protocol; } ;
struct TYPE_3__ {int tx_csum_limit; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mv643xx_eth_private *VAR_11, struct sk_buff *VAR_12,
         u16 *VAR_13, u32 *VAR_14, int VAR_15)
{
 int VAR_16;
 u32 VAR_17 = 0;

 if (VAR_12->ip_summed == VAR_0) {
  int VAR_18;
  int VAR_19;

  FUNC_0(VAR_12->protocol != FUNC_2(VAR_3) &&
         VAR_12->protocol != FUNC_2(VAR_2));

  VAR_18 = (void *)FUNC_3(VAR_12) - (void *)VAR_12->data;
  VAR_19 = VAR_18 - VAR_1;

  if (VAR_15 - VAR_18 > VAR_11->shared->tx_csum_limit ||
      FUNC_5(VAR_19 & ~12)) {
   VAR_16 = FUNC_4(VAR_12);
   if (!VAR_16)
    goto no_csum;
   return VAR_16;
  }

  if (VAR_19 & 4)
   VAR_17 |= VAR_7;
  if (VAR_19 & 8)
   VAR_17 |= VAR_8;

  VAR_17 |= VAR_5 | VAR_6 |
      VAR_4 |
      FUNC_3(VAR_12)->ihl << VAR_9;



  switch (FUNC_3(VAR_12)->protocol) {
  case 128:
   VAR_17 |= VAR_10;
   *VAR_13 = 0;
   break;
  case 129:
   *VAR_13 = 0;
   break;
  default:
   FUNC_1(1, "protocol not supported");
  }
 } else {
no_csum:

  VAR_17 |= 5 << VAR_9;
 }
 *VAR_14 = VAR_17;
 return 0;
}
