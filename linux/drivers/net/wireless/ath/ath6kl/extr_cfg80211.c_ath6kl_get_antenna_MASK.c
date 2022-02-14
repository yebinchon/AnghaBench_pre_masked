
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {int dummy; } ;
struct TYPE_2__ {int rx_ant; int tx_ant; } ;
struct ath6kl {TYPE_1__ hw; } ;


 struct ath6kl* FUNC_0 (struct wiphy*) ;

__attribute__((used)) static int FUNC_1(struct wiphy *VAR_0,
         u32 *VAR_1, u32 *VAR_2)
{
 struct ath6kl *VAR_3 = FUNC_0(VAR_0);
 *VAR_1 = VAR_3->hw.tx_ant;
 *VAR_2 = VAR_3->hw.rx_ant;
 return 0;
}
