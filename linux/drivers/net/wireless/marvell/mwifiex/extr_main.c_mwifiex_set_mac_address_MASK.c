
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct net_device {int dev_addr; } ;
struct mwifiex_private {scalar_t__ bss_type; int * curr_addr; TYPE_1__* adapter; scalar_t__ bss_num; } ;
struct TYPE_2__ {struct mwifiex_private** priv; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int) ;
 int FUNC_4 (struct mwifiex_private*,int ,int ,int ,int *,int) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct mwifiex_private *VAR_7,
       struct net_device *VAR_8, bool VAR_9,
       u8 *VAR_10)
{
 int VAR_11;
 u64 VAR_12, VAR_13;

 VAR_13 = FUNC_2(VAR_7->curr_addr);

 if (VAR_9) {
  VAR_12 = FUNC_2(VAR_10);
 } else {

  if (VAR_7->bss_type == VAR_4)
   return -VAR_0;

  VAR_12 = VAR_13;

  if (VAR_7->bss_type == VAR_5) {
   VAR_12 |= FUNC_0(VAR_6);
   VAR_12 += VAR_7->bss_num;
  } else if (VAR_7->adapter->priv[0] != VAR_7) {

   VAR_12 ^= FUNC_0(VAR_7->bss_type + 8);
   VAR_12 += VAR_7->bss_num;
  }
 }

 FUNC_5(VAR_12, VAR_7->curr_addr);


 VAR_11 = FUNC_4(VAR_7, VAR_3,
          VAR_2, 0, ((void*)0), 1);

 if (VAR_11) {
  FUNC_5(VAR_13, VAR_7->curr_addr);
  FUNC_3(VAR_7->adapter, VAR_1,
       "set mac address failed: ret=%d\n", VAR_11);
  return VAR_11;
 }

 FUNC_1(VAR_8->dev_addr, VAR_7->curr_addr);
 return 0;
}
