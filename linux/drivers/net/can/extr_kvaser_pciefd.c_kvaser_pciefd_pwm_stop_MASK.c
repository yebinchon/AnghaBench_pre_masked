
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct kvaser_pciefd_can {int lock; scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct kvaser_pciefd_can *VAR_2)
{
 u8 VAR_3;
 u32 VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_4 = FUNC_0(VAR_2->reg_base + VAR_0);
 VAR_3 = (VAR_4 >> VAR_1) & 0xff;


 VAR_4 |= VAR_3;
 FUNC_1(VAR_4, VAR_2->reg_base + VAR_0);
 FUNC_3(&VAR_2->lock, VAR_5);
}
