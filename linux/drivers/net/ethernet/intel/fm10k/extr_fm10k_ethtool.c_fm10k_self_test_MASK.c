
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct fm10k_hw {int hw_addr; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;
struct ethtool_test {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct fm10k_intfc*,int *) ;
 int FUNC_2 (int *,int ,int) ;
 struct fm10k_intfc* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct fm10k_intfc*,int ,struct net_device*,char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4,
       struct ethtool_test *VAR_5, u64 *VAR_6)
{
 struct fm10k_intfc *VAR_7 = FUNC_3(VAR_4);
 struct fm10k_hw *VAR_8 = &VAR_7->hw;

 FUNC_2(VAR_6, 0, sizeof(*VAR_6) * VAR_1);

 if (FUNC_0(VAR_8->hw_addr)) {
  FUNC_4(VAR_7, VAR_3, VAR_4,
     "Interface removed - test blocked\n");
  VAR_5->flags |= VAR_0;
  return;
 }

 if (FUNC_1(VAR_7, &VAR_6[VAR_2]))
  VAR_5->flags |= VAR_0;
}
