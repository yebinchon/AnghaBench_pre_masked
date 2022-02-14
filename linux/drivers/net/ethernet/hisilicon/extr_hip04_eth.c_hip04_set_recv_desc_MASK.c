
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hip04_priv {int port; int map; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct hip04_priv *VAR_2, dma_addr_t VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_3 >> VAR_0;
 FUNC_0(VAR_2->map, VAR_2->port * 4 + VAR_1, VAR_4);
}
