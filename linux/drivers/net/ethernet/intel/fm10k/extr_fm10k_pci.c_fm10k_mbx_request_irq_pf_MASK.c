
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct fm10k_hw*,int ,int) ;
 int FUNC_4 (struct fm10k_intfc*,int ,struct net_device*,char*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (int ,int ,int ,int ,struct fm10k_intfc*) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_7(struct fm10k_intfc *VAR_22)
{
 struct msix_entry *VAR_23 = &VAR_22->msix_entries[VAR_4];
 struct net_device *VAR_24 = VAR_22->netdev;
 struct fm10k_hw *VAR_25 = &VAR_22->hw;
 int VAR_26;


 u32 VAR_27 = VAR_23->entry | VAR_2;
 u32 VAR_28 = VAR_23->entry | VAR_1;


 VAR_26 = VAR_25->mbx.ops.register_handlers(&VAR_25->mbx, VAR_20);
 if (VAR_26)
  return VAR_26;


 VAR_26 = FUNC_5(VAR_23->vector, VAR_19, 0,
     VAR_24->name, VAR_22);
 if (VAR_26) {
  FUNC_4(VAR_22, VAR_21, VAR_24,
     "request_irq for msix_mbx failed: %d\n", VAR_26);
  return VAR_26;
 }


 FUNC_3(VAR_25, FUNC_1(VAR_15), VAR_28);
 FUNC_3(VAR_25, FUNC_1(VAR_17), VAR_28);
 FUNC_3(VAR_25, FUNC_1(VAR_16), VAR_28);
 FUNC_3(VAR_25, FUNC_1(VAR_14), VAR_28);
 FUNC_3(VAR_25, FUNC_1(VAR_18), VAR_28);


 FUNC_3(VAR_25, FUNC_1(VAR_13), VAR_27);


 FUNC_3(VAR_25, VAR_0, FUNC_0(VAR_8) |
     FUNC_0(VAR_5) |
     FUNC_0(VAR_6) |
     FUNC_0(VAR_11) |
     FUNC_0(VAR_10) |
     FUNC_0(VAR_9) |
     FUNC_0(VAR_12) |
     FUNC_0(VAR_7));


 FUNC_3(VAR_25, FUNC_2(VAR_23->entry), VAR_3);

 return 0;
}
