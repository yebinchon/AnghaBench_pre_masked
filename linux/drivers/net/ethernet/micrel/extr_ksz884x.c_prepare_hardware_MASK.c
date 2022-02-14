
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; int irq; } ;
struct TYPE_4__ {int ring_phys; } ;
struct TYPE_3__ {int ring_phys; } ;
struct ksz_hw {TYPE_2__ rx_desc_info; TYPE_1__ tx_desc_info; scalar_t__ multi_list_size; scalar_t__ all_multi; scalar_t__ promiscuous; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int tx_tasklet; int rx_tasklet; struct net_device* dev; struct ksz_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct dev_info*,struct ksz_hw*) ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*) ;
 int FUNC_3 (struct ksz_hw*,int ,int ) ;
 int FUNC_4 (struct dev_info*) ;
 int VAR_1 ;
 struct dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,int ,int ,struct net_device*) ;
 int VAR_2 ;
 int FUNC_7 (int *,int ,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4)
{
 struct dev_priv *VAR_5 = FUNC_5(VAR_4);
 struct dev_info *VAR_6 = VAR_5->adapter;
 struct ksz_hw *VAR_7 = &VAR_6->hw;
 int VAR_8 = 0;


 VAR_6->dev = VAR_4;
 VAR_8 = FUNC_6(VAR_4->irq, VAR_1, VAR_0, VAR_4->name, VAR_4);
 if (VAR_8)
  return VAR_8;
 FUNC_7(&VAR_6->rx_tasklet, VAR_2,
       (unsigned long) VAR_6);
 FUNC_7(&VAR_6->tx_tasklet, VAR_3,
       (unsigned long) VAR_6);

 VAR_7->promiscuous = 0;
 VAR_7->all_multi = 0;
 VAR_7->multi_list_size = 0;

 FUNC_1(VAR_7);

 FUNC_3(VAR_7,
  VAR_7->tx_desc_info.ring_phys, VAR_7->rx_desc_info.ring_phys);
 FUNC_2(VAR_7);
 FUNC_0(VAR_6, VAR_7);
 FUNC_4(VAR_6);
 return 0;
}
