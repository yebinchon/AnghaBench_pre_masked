
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rtl8169_private {scalar_t__ counters_phys_addr; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (struct rtl8169_private*,int *,int,int) ;

__attribute__((used)) static bool FUNC_4(struct rtl8169_private *VAR_3, u32 VAR_4)
{
 dma_addr_t VAR_5 = VAR_3->counters_phys_addr;
 u32 VAR_6;

 FUNC_2(VAR_3, VAR_0, (u64)VAR_5 >> 32);
 FUNC_1(VAR_3, VAR_0);
 VAR_6 = (u64)VAR_5 & FUNC_0(32);
 FUNC_2(VAR_3, VAR_1, VAR_6);
 FUNC_2(VAR_3, VAR_1, VAR_6 | VAR_4);

 return FUNC_3(VAR_3, &VAR_2, 10, 1000);
}
