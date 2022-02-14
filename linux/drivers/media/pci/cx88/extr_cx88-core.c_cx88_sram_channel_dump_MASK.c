
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sram_channel {unsigned int name; int fifo_size; scalar_t__ cnt2_reg; scalar_t__ cnt1_reg; scalar_t__ ptr2_reg; scalar_t__ ptr1_reg; scalar_t__ ctrl_start; int fifo_start; scalar_t__ cmds_start; } ;
struct cx88_core {int dummy; } ;


 unsigned int FUNC_0 (char const* const*) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,unsigned int,...) ;

void FUNC_5(struct cx88_core *VAR_0,
       const struct sram_channel *VAR_1)
{
 static const char * const VAR_2[] = {
  "initial risc",
  "cdt base",
  "cdt size",
  "iq base",
  "iq size",
  "risc pc",
  "iq wr ptr",
  "iq rd ptr",
  "cdt current",
  "pci target",
  "line / byte",
 };
 u32 VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;

 FUNC_3("%s - dma channel status dump\n", VAR_1->name);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  FUNC_3("   cmds: %-12s: 0x%08x\n",
    VAR_2[VAR_4], FUNC_2(VAR_1->cmds_start + 4 * VAR_4));
 for (VAR_6 = 1, VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_3 = FUNC_2(VAR_1->cmds_start + 4 * (VAR_4 + 11));
  FUNC_4("  risc%d: ", VAR_4);
  if (--VAR_6)
   FUNC_4("0x%08x [ arg #%d ]\n", VAR_3, VAR_6);
  else
   VAR_6 = FUNC_1(VAR_3);
 }
 for (VAR_4 = 0; VAR_4 < 16; VAR_4 += VAR_6) {
  VAR_3 = FUNC_2(VAR_1->ctrl_start + 4 * VAR_4);
  FUNC_3("  iq %x: ", VAR_4);
  VAR_6 = FUNC_1(VAR_3);
  for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++) {
   VAR_3 = FUNC_2(VAR_1->ctrl_start + 4 * (VAR_4 + VAR_5));
   FUNC_4("  iq %x: 0x%08x [ arg #%d ]\n",
    VAR_4 + VAR_5, VAR_3, VAR_5);
  }
 }

 FUNC_3("fifo: 0x%08x -> 0x%x\n",
   VAR_1->fifo_start, VAR_1->fifo_start + VAR_1->fifo_size);
 FUNC_3("ctrl: 0x%08x -> 0x%x\n",
   VAR_1->ctrl_start, VAR_1->ctrl_start + 6 * 16);
 FUNC_3("  ptr1_reg: 0x%08x\n", FUNC_2(VAR_1->ptr1_reg));
 FUNC_3("  ptr2_reg: 0x%08x\n", FUNC_2(VAR_1->ptr2_reg));
 FUNC_3("  cnt1_reg: 0x%08x\n", FUNC_2(VAR_1->cnt1_reg));
 FUNC_3("  cnt2_reg: 0x%08x\n", FUNC_2(VAR_1->cnt2_reg));
}
