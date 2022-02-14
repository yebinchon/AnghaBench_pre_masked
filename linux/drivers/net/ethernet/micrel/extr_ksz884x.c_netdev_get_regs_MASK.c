
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ksz_hw {scalar_t__ io; } ;
struct hw_regs {int end; int start; } ;
struct ethtool_regs {scalar_t__ version; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int lock; int pdev; struct ksz_hw hw; } ;


 struct hw_regs* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
 void *VAR_3)
{
 struct dev_priv *VAR_4 = FUNC_2(VAR_1);
 struct dev_info *VAR_5 = VAR_4->adapter;
 struct ksz_hw *VAR_6 = &VAR_5->hw;
 int *VAR_7 = (int *) VAR_3;
 struct hw_regs *VAR_8 = VAR_0;
 int VAR_9;

 FUNC_0(&VAR_5->lock);
 VAR_2->version = 0;
 for (VAR_9 = 0; VAR_9 < 0x40; VAR_9 += 4) {
  FUNC_3(VAR_5->pdev, VAR_9, VAR_7);
  VAR_7++;
 }
 while (VAR_8->end > VAR_8->start) {
  for (VAR_9 = VAR_8->start; VAR_9 < VAR_8->end; VAR_9 += 4) {
   *VAR_7 = FUNC_4(VAR_6->io + VAR_9);
   VAR_7++;
  }
  VAR_8++;
 }
 FUNC_1(&VAR_5->lock);
}
