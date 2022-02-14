
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvaser_pciefd {scalar_t__ reg_base; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kvaser_pciefd *VAR_1,
     dma_addr_t VAR_2, int VAR_3)
{
 u32 VAR_4, VAR_5;





 VAR_4 = VAR_2;
 VAR_5 = 0;

 FUNC_0(VAR_4, VAR_1->reg_base + VAR_3);
 FUNC_0(VAR_5, VAR_1->reg_base + VAR_3 + 4);
}
