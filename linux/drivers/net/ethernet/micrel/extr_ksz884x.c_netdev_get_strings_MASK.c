
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ksz_hw {int mib_cnt; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {struct ksz_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 struct dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 struct dev_priv *VAR_6 = FUNC_1(VAR_3);
 struct dev_info *VAR_7 = VAR_6->adapter;
 struct ksz_hw *VAR_8 = &VAR_7->hw;

 if (VAR_1 == VAR_4)
  FUNC_0(VAR_5, &VAR_2,
   VAR_0 * VAR_8->mib_cnt);
}
