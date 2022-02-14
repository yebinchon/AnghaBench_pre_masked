
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msix_entry {int vector; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {int (* disconnect ) (struct fm10k_hw*,TYPE_3__*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; TYPE_3__ mbx; } ;
struct fm10k_intfc {struct msix_entry* msix_entries; struct fm10k_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct fm10k_hw*,int,int) ;
 int FUNC_4 (int ,struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_hw*,TYPE_3__*) ;

void FUNC_6(struct fm10k_intfc *VAR_12)
{
 struct fm10k_hw *VAR_13 = &VAR_12->hw;
 struct msix_entry *VAR_14;
 int VAR_15;


 if (!VAR_12->msix_entries)
  return;

 VAR_14 = &VAR_12->msix_entries[VAR_2];


 VAR_13->mbx.ops.disconnect(VAR_13, &VAR_13->mbx);


 if (VAR_13->mac.type == VAR_11) {
  FUNC_3(VAR_13, VAR_0,
    FUNC_0(VAR_6) |
    FUNC_0(VAR_3) |
    FUNC_0(VAR_4) |
    FUNC_0(VAR_9) |
    FUNC_0(VAR_8) |
    FUNC_0(VAR_7) |
    FUNC_0(VAR_10) |
    FUNC_0(VAR_5));
  VAR_15 = FUNC_1(VAR_2);
 } else {
  VAR_15 = FUNC_2(VAR_2);
 }

 FUNC_3(VAR_13, VAR_15, VAR_1);

 FUNC_4(VAR_14->vector, VAR_12);
}
