
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* read_reg_page ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* set_page ) (struct e1000_hw*,int) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_8__ {int addr; TYPE_3__ ops; } ;
struct TYPE_5__ {int collision_delta; } ;
struct e1000_hw {TYPE_4__ phy; TYPE_1__ mac; } ;
struct TYPE_6__ {int scc; int ecol; int mcc; int latecol; int dc; int tncrs; } ;
struct e1000_adapter {TYPE_2__ stats; struct e1000_hw hw; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int*) ;
 int FUNC_9 (struct e1000_hw*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_13 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_14 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_15 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_16 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_17 (struct e1000_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_18(struct e1000_adapter *VAR_17)
{
 struct e1000_hw *VAR_18 = &VAR_17->hw;
 s32 VAR_19;
 u16 VAR_20;

 VAR_19 = VAR_18->phy.ops.acquire(VAR_18);
 if (VAR_19)
  return;




 VAR_18->phy.addr = 1;
 VAR_19 = FUNC_0(VAR_18, VAR_15,
        &VAR_20);
 if (VAR_19)
  goto release;
 if (VAR_20 != (VAR_12 << VAR_16)) {
  VAR_19 = VAR_18->phy.ops.set_page(VAR_18,
            VAR_12 << VAR_16);
  if (VAR_19)
   goto release;
 }


 VAR_18->phy.ops.read_reg_page(VAR_18, VAR_11, &VAR_20);
 VAR_19 = VAR_18->phy.ops.read_reg_page(VAR_18, VAR_10, &VAR_20);
 if (!VAR_19)
  VAR_17->stats.scc += VAR_20;


 VAR_18->phy.ops.read_reg_page(VAR_18, VAR_5, &VAR_20);
 VAR_19 = VAR_18->phy.ops.read_reg_page(VAR_18, VAR_4, &VAR_20);
 if (!VAR_19)
  VAR_17->stats.ecol += VAR_20;


 VAR_18->phy.ops.read_reg_page(VAR_18, VAR_9, &VAR_20);
 VAR_19 = VAR_18->phy.ops.read_reg_page(VAR_18, VAR_8, &VAR_20);
 if (!VAR_19)
  VAR_17->stats.mcc += VAR_20;


 VAR_18->phy.ops.read_reg_page(VAR_18, VAR_7, &VAR_20);
 VAR_19 = VAR_18->phy.ops.read_reg_page(VAR_18, VAR_6, &VAR_20);
 if (!VAR_19)
  VAR_17->stats.latecol += VAR_20;


 VAR_18->phy.ops.read_reg_page(VAR_18, VAR_1, &VAR_20);
 VAR_19 = VAR_18->phy.ops.read_reg_page(VAR_18, VAR_0, &VAR_20);
 if (!VAR_19)
  VAR_18->mac.collision_delta = VAR_20;


 VAR_18->phy.ops.read_reg_page(VAR_18, VAR_3, &VAR_20);
 VAR_19 = VAR_18->phy.ops.read_reg_page(VAR_18, VAR_2, &VAR_20);
 if (!VAR_19)
  VAR_17->stats.dc += VAR_20;


 VAR_18->phy.ops.read_reg_page(VAR_18, VAR_14, &VAR_20);
 VAR_19 = VAR_18->phy.ops.read_reg_page(VAR_18, VAR_13, &VAR_20);
 if (!VAR_19)
  VAR_17->stats.tncrs += VAR_20;

release:
 VAR_18->phy.ops.release(VAR_18);
}
