
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sram_channel {unsigned int name; int fifo_size; scalar_t__ cnt2_reg; scalar_t__ cnt1_reg; scalar_t__ ptr2_reg; scalar_t__ ptr1_reg; scalar_t__ ctrl_start; int fifo_start; scalar_t__ cmds_start; } ;
struct cx23885_dev {int name; } ;


 unsigned int FUNC_0 (char**) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ,...) ;

void FUNC_4(struct cx23885_dev *VAR_0,
          struct sram_channel *VAR_1)
{
 static char *VAR_2[] = {
  "init risc lo",
  "init risc hi",
  "cdt base",
  "cdt size",
  "iq base",
  "iq size",
  "risc pc lo",
  "risc pc hi",
  "iq wr ptr",
  "iq rd ptr",
  "cdt current",
  "pci target lo",
  "pci target hi",
  "line / byte",
 };
 u32 VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;

 FUNC_3("%s: %s - dma channel status dump\n",
  VAR_0->name, VAR_1->name);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  FUNC_3("%s:   cmds: %-15s: 0x%08x\n",
   VAR_0->name, VAR_2[VAR_4],
   FUNC_2(VAR_1->cmds_start + 4*VAR_4));

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_3 = FUNC_2(VAR_1->cmds_start + 4 * (VAR_4 + 14));
  FUNC_3("%s:   risc%d: ", VAR_0->name, VAR_4);
  FUNC_1(VAR_3);
 }
 for (VAR_4 = 0; VAR_4 < (64 >> 2); VAR_4 += VAR_6) {
  VAR_3 = FUNC_2(VAR_1->ctrl_start + 4 * VAR_4);


  FUNC_3("%s:   (0x%08x) iq %x: ", VAR_0->name,
   VAR_1->ctrl_start + 4 * VAR_4, VAR_4);
  VAR_6 = FUNC_1(VAR_3);
  for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++) {
   VAR_3 = FUNC_2(VAR_1->ctrl_start + 4 * (VAR_4 + VAR_5));
   FUNC_3("%s:   iq %x: 0x%08x [ arg #%d ]\n",
    VAR_0->name, VAR_4+VAR_5, VAR_3, VAR_5);
  }
 }

 FUNC_3("%s: fifo: 0x%08x -> 0x%x\n",
  VAR_0->name, VAR_1->fifo_start, VAR_1->fifo_start+VAR_1->fifo_size);
 FUNC_3("%s: ctrl: 0x%08x -> 0x%x\n",
  VAR_0->name, VAR_1->ctrl_start, VAR_1->ctrl_start + 6*16);
 FUNC_3("%s:   ptr1_reg: 0x%08x\n",
  VAR_0->name, FUNC_2(VAR_1->ptr1_reg));
 FUNC_3("%s:   ptr2_reg: 0x%08x\n",
  VAR_0->name, FUNC_2(VAR_1->ptr2_reg));
 FUNC_3("%s:   cnt1_reg: 0x%08x\n",
  VAR_0->name, FUNC_2(VAR_1->cnt1_reg));
 FUNC_3("%s:   cnt2_reg: 0x%08x\n",
  VAR_0->name, FUNC_2(VAR_1->cnt2_reg));
}
