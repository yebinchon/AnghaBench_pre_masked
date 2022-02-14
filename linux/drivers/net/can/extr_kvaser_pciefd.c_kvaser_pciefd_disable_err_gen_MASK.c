
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvaser_pciefd_can {int lock; scalar_t__ reg_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct kvaser_pciefd_can *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_0(VAR_2->reg_base + VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_2->reg_base + VAR_1);
 FUNC_3(&VAR_2->lock, VAR_4);
}
