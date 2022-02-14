
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sram_channel {unsigned int cmds_start; int ctrl_start; unsigned int ptr1_reg; unsigned int ptr2_reg; unsigned int cnt1_reg; unsigned int cnt2_reg; int fifo_size; int fifo_start; int name; } ;
struct cx25821_dev {int * i2c_bus; int name; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (char const* const*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_2 (int *,int ,unsigned int*) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int ,unsigned int,...) ;
 int FUNC_7 (char*,unsigned int,...) ;

void FUNC_8(struct cx25821_dev *VAR_11,
         const struct sram_channel *VAR_12)
{
 static const char * const VAR_13[] = {
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

 u32 VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;

 FUNC_6("\n%s: %s - dma Audio channel status dump\n",
  VAR_11->name, VAR_12->name);

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_13); VAR_17++)
  FUNC_6("%s: cmds + 0x%2x:   %-15s: 0x%08x\n",
   VAR_11->name, VAR_17 * 4, VAR_13[VAR_17],
   FUNC_4(VAR_12->cmds_start + 4 * VAR_17));

 VAR_18 = VAR_17 * 4;
 for (VAR_17 = 0; VAR_17 < 4;) {
  VAR_14 = FUNC_4(VAR_12->cmds_start + 4 * (VAR_17 + 14));
  FUNC_7("cmds + 0x%2x:   risc%d: ", VAR_18 + VAR_17 * 4, VAR_17);
  VAR_17 += FUNC_3(VAR_14);
 }

 for (VAR_17 = 0; VAR_17 < (64 >> 2); VAR_17 += VAR_19) {
  VAR_14 = FUNC_4(VAR_12->ctrl_start + 4 * VAR_17);


  FUNC_7("ctrl + 0x%2x (0x%08x): iq %x: ",
   VAR_17 * 4, VAR_12->ctrl_start + 4 * VAR_17, VAR_17);
  VAR_19 = FUNC_3(VAR_14);

  for (VAR_18 = 1; VAR_18 < VAR_19; VAR_18++) {
   VAR_14 = FUNC_4(VAR_12->ctrl_start + 4 * (VAR_17 + VAR_18));
   FUNC_7("ctrl + 0x%2x :   iq %x: 0x%08x [ arg #%d ]\n",
    4 * (VAR_17 + VAR_18), VAR_17 + VAR_18, VAR_14, VAR_18);
  }
 }

 FUNC_7("        :   fifo: 0x%08x -> 0x%x\n",
  VAR_12->fifo_start, VAR_12->fifo_start + VAR_12->fifo_size);
 FUNC_7("        :   ctrl: 0x%08x -> 0x%x\n",
  VAR_12->ctrl_start, VAR_12->ctrl_start + 6 * 16);
 FUNC_7("        :   ptr1_reg: 0x%08x\n",
  FUNC_4(VAR_12->ptr1_reg));
 FUNC_7("        :   ptr2_reg: 0x%08x\n",
  FUNC_4(VAR_12->ptr2_reg));
 FUNC_7("        :   cnt1_reg: 0x%08x\n",
  FUNC_4(VAR_12->cnt1_reg));
 FUNC_7("        :   cnt2_reg: 0x%08x\n",
  FUNC_4(VAR_12->cnt2_reg));

 for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
  VAR_14 = FUNC_4(VAR_12->cmds_start + 56 + (VAR_17 * 4));
  FUNC_7("instruction %d = 0x%x\n", VAR_17, VAR_14);
 }


 VAR_14 = FUNC_4(VAR_1);
 FUNC_7("\nread cdt loc=0x%x\n", VAR_14);
 for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {
  VAR_19 = FUNC_4(VAR_14 + VAR_17 * 4);
  FUNC_5("0x%x ", VAR_19);
 }
 FUNC_5("\n\n");

 VAR_15 = FUNC_4(VAR_2);
 FUNC_1(" CLK_RST = 0x%x\n\n", VAR_15);

 VAR_15 = FUNC_4(VAR_4);
 FUNC_1(" PLL_A_POST_STAT_BIST = 0x%x\n\n", VAR_15);
 VAR_15 = FUNC_4(VAR_3);
 FUNC_1(" PLL_A_INT_FRAC = 0x%x\n\n", VAR_15);

 VAR_15 = FUNC_4(VAR_6);
 FUNC_1(" PLL_B_POST_STAT_BIST = 0x%x\n\n", VAR_15);
 VAR_15 = FUNC_4(VAR_5);
 FUNC_1(" PLL_B_INT_FRAC = 0x%x\n\n", VAR_15);

 VAR_15 = FUNC_4(VAR_8);
 FUNC_1(" PLL_C_POST_STAT_BIST = 0x%x\n\n", VAR_15);
 VAR_15 = FUNC_4(VAR_7);
 FUNC_1(" PLL_C_INT_FRAC = 0x%x\n\n", VAR_15);

 VAR_15 = FUNC_4(VAR_10);
 FUNC_1(" PLL_D_POST_STAT_BIST = 0x%x\n\n", VAR_15);
 VAR_15 = FUNC_4(VAR_9);
 FUNC_1(" PLL_D_INT_FRAC = 0x%x\n\n", VAR_15);

 VAR_15 = FUNC_2(&VAR_11->i2c_bus[0], VAR_0, &VAR_16);
 FUNC_1(" AFE_AB_DIAG_CTRL (0x10900090) = 0x%x\n\n", VAR_15);
}
