
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ksz_hw {int mib_cnt; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {struct ksz_hw hw; } ;


 int VAR_0 ;

 struct dev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2)
{
 struct dev_priv *VAR_3 = FUNC_0(VAR_1);
 struct dev_info *VAR_4 = VAR_3->adapter;
 struct ksz_hw *VAR_5 = &VAR_4->hw;

 switch (VAR_2) {
 case 128:
  return VAR_5->mib_cnt;
 default:
  return -VAR_0;
 }
}
