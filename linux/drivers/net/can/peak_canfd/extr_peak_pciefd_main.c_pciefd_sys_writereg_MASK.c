
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct pciefd_board {scalar_t__ reg_base; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(const struct pciefd_board *VAR_0,
           u32 VAR_1, u16 VAR_2)
{
 FUNC_0(VAR_1, VAR_0->reg_base + VAR_2);
}
