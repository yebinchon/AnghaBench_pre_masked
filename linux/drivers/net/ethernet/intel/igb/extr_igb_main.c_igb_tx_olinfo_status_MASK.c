
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int olinfo_status; } ;
union e1000_adv_tx_desc {TYPE_1__ read; } ;
typedef int u32 ;
struct igb_ring {int reg_idx; int flags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct igb_ring *VAR_6,
     union e1000_adv_tx_desc *VAR_7,
     u32 VAR_8, unsigned int VAR_9)
{
 u32 VAR_10 = VAR_9 << VAR_0;


 if (FUNC_2(VAR_3, &VAR_6->flags))
  VAR_10 |= VAR_6->reg_idx << 4;


 VAR_10 |= FUNC_0(VAR_8,
          VAR_4,
          (VAR_2 << 8));


 VAR_10 |= FUNC_0(VAR_8,
          VAR_5,
          (VAR_1 << 8));

 VAR_7->read.olinfo_status = FUNC_1(VAR_10);
}
