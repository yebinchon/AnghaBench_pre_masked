
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvaser_pciefd_can {int lock; scalar_t__ reg_base; TYPE_1__* kv_pcie; } ;
struct TYPE_2__ {int bus_freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct kvaser_pciefd_can*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct kvaser_pciefd_can *VAR_2)
{
 int VAR_3, VAR_4;
 u32 VAR_5;
 unsigned long VAR_6;

 FUNC_1(VAR_2);
 FUNC_2(&VAR_2->lock, VAR_6);


 VAR_3 = VAR_2->kv_pcie->bus_freq / (2 * 500000) - 1;

 VAR_5 = VAR_3 & 0xff;
 VAR_5 |= (VAR_3 & 0xff) << VAR_1;
 FUNC_0(VAR_5, VAR_2->reg_base + VAR_0);


 VAR_4 = (100 * VAR_3 - 95 * (VAR_3 + 1) + 50) / 100;
 VAR_5 = VAR_4 & 0xff;
 VAR_5 |= (VAR_3 & 0xff) << VAR_1;
 FUNC_0(VAR_5, VAR_2->reg_base + VAR_0);
 FUNC_3(&VAR_2->lock, VAR_6);
}
