
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int name; } ;
struct msix_entry {int entry; int vector; } ;
struct TYPE_3__ {int (* register_handlers ) (TYPE_2__*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mbx; } ;
struct fm10k_intfc {struct fm10k_hw hw; struct net_device* netdev; struct msix_entry* msix_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct fm10k_hw*,int ,int) ;
 int FUNC_2 (struct fm10k_intfc*,int ,struct net_device*,char*,int) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ,struct fm10k_intfc*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct fm10k_intfc *VAR_7)
{
 struct msix_entry *VAR_8 = &VAR_7->msix_entries[VAR_2];
 struct net_device *VAR_9 = VAR_7->netdev;
 struct fm10k_hw *VAR_10 = &VAR_7->hw;
 int VAR_11;


 u32 VAR_12 = VAR_8->entry | VAR_0;


 VAR_11 = VAR_10->mbx.ops.register_handlers(&VAR_10->mbx, VAR_6);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_3(VAR_8->vector, VAR_4, 0,
     VAR_9->name, VAR_7);
 if (VAR_11) {
  FUNC_2(VAR_7, VAR_5, VAR_9,
     "request_irq for msix_mbx failed: %d\n", VAR_11);
  return VAR_11;
 }


 FUNC_1(VAR_10, VAR_3, VAR_12);


 FUNC_1(VAR_10, FUNC_0(VAR_8->entry), VAR_1);

 return 0;
}
