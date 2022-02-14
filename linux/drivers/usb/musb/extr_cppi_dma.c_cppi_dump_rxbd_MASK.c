
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cppi_descriptor {int hw_options; int hw_off_len; int hw_bufp; int hw_next; int dma; } ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, struct cppi_descriptor *VAR_1)
{
 FUNC_0("RXBD/%s %08x: "
   "nxt %08x buf %08x off.blen %08x opt.plen %08x\n",
   VAR_0, VAR_1->dma,
   VAR_1->hw_next, VAR_1->hw_bufp, VAR_1->hw_off_len,
   VAR_1->hw_options);
}
