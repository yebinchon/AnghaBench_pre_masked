
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hip04_priv {scalar_t__ base; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hip04_priv *VAR_3, dma_addr_t VAR_4)
{
 u32 VAR_5;

 VAR_5 = VAR_4 >> VAR_0 | VAR_2;
 FUNC_0(VAR_5, VAR_3->base + VAR_1);
}
