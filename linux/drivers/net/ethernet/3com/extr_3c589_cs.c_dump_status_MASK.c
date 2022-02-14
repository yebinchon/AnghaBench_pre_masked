
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct net_device*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 unsigned int VAR_5 = VAR_4->base_addr;
 FUNC_0(1);
 FUNC_3(VAR_4, "  irq status %04x, rx status %04x, tx status %02x  tx free %04x\n",
   FUNC_2(VAR_5+VAR_0), FUNC_2(VAR_5+VAR_1),
   FUNC_1(VAR_5+VAR_3), FUNC_2(VAR_5+VAR_2));
 FUNC_0(4);
 FUNC_3(VAR_4, "  diagnostics: fifo %04x net %04x ethernet %04x media %04x\n",
   FUNC_2(VAR_5+0x04), FUNC_2(VAR_5+0x06), FUNC_2(VAR_5+0x08),
   FUNC_2(VAR_5+0x0a));
 FUNC_0(1);
}
