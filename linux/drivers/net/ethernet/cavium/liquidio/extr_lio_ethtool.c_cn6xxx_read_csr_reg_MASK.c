
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int num_oqs; int pcie_port; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct octeon_device*,int) ;
 int FUNC_9 (struct octeon_device*,int) ;
 scalar_t__ FUNC_10 (char*,char*,...) ;

__attribute__((used)) static int FUNC_11(char *VAR_12, struct octeon_device *VAR_13)
{
 u32 VAR_14;
 int VAR_15, VAR_16 = 0;



 VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n\t Octeon CSR Registers\n\n");
 VAR_14 = VAR_8;
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n[%02x] (WIN_WR_ADDR_LO): %08x\n",
         VAR_8, FUNC_9(VAR_13, VAR_14));
 VAR_14 = VAR_7;
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%02x] (WIN_WR_ADDR_HI): %08x\n",
         VAR_7, FUNC_9(VAR_13, VAR_14));
 VAR_14 = VAR_6;
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%02x] (WIN_RD_ADDR_LO): %08x\n",
         VAR_6, FUNC_9(VAR_13, VAR_14));
 VAR_14 = VAR_5;
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%02x] (WIN_RD_ADDR_HI): %08x\n",
         VAR_5, FUNC_9(VAR_13, VAR_14));
 VAR_14 = VAR_10;
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%02x] (WIN_WR_DATA_LO): %08x\n",
         VAR_10, FUNC_9(VAR_13, VAR_14));
 VAR_14 = VAR_9;
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%02x] (WIN_WR_DATA_HI): %08x\n",
         VAR_9, FUNC_9(VAR_13, VAR_14));
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%02x] (WIN_WR_MASK_REG): %08x\n",
         VAR_11,
         FUNC_9(VAR_13, VAR_11));


 VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n[%x] (INT_ENABLE PORT 0): %08x\n",
         VAR_0, FUNC_9(VAR_13,
      VAR_0));
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n[%x] (INT_ENABLE PORT 1): %08x\n",
         VAR_1,
         FUNC_9(VAR_13, VAR_1));
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%x] (INT_SUM): %08x\n", VAR_2,
         FUNC_9(VAR_13, VAR_2));


 for (VAR_15 = 0; VAR_15 < VAR_13->num_oqs; VAR_15++) {
  VAR_14 = FUNC_7(VAR_15);
  VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n[%x] (PKTS_SENT_%d): %08x\n",
          VAR_14, VAR_15, FUNC_9(VAR_13, VAR_14));
  VAR_14 = FUNC_6(VAR_15);
  VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%x] (PKT_CREDITS_%d): %08x\n",
          VAR_14, VAR_15, FUNC_9(VAR_13, VAR_14));
 }
 VAR_14 = VAR_3;
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n[%x] (PKTS_SENT_INT_LEVEL): %08x\n",
         VAR_14, FUNC_9(VAR_13, VAR_14));
 VAR_14 = VAR_4;
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%x] (PKTS_SENT_TIME): %08x\n",
         VAR_14, FUNC_9(VAR_13, VAR_14));


 for (VAR_15 = 0; VAR_15 <= 3; VAR_15++) {
  u32 VAR_17;

  VAR_17 = FUNC_4(VAR_15);
  VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n[%x] (INSTR_DOORBELL_%d): %08x\n",
          VAR_17, VAR_15, FUNC_9(VAR_13, VAR_17));
  VAR_17 = FUNC_5(VAR_15);
  VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%x] (INSTR_COUNT_%d): %08x\n",
          VAR_17, VAR_15, FUNC_9(VAR_13, VAR_17));
 }



 VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n[%x] (DMA_CNT_0): %08x\n",
         FUNC_1(0),
         FUNC_9(VAR_13, FUNC_1(0)));
 VAR_14 = FUNC_2(0);
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%x] (DMA_INT_LEV_0): %08x\n",
         FUNC_2(0), FUNC_9(VAR_13, VAR_14));
 VAR_14 = FUNC_3(0);
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%x] (DMA_TIME_0): %08x\n",
         FUNC_3(0),
         FUNC_9(VAR_13, VAR_14));

 VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n[%x] (DMA_CNT_1): %08x\n",
         FUNC_1(1),
         FUNC_9(VAR_13, FUNC_1(1)));
 VAR_14 = FUNC_2(1);
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%x] (DMA_INT_LEV_1): %08x\n",
         FUNC_2(1),
         FUNC_9(VAR_13, VAR_14));
 VAR_14 = FUNC_2(1);
 VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%x] (DMA_TIME_1): %08x\n",
         FUNC_3(1),
         FUNC_9(VAR_13, VAR_14));



 VAR_16 += FUNC_10(VAR_12 + VAR_16, "\n");

 for (VAR_15 = 0; VAR_15 < 16; VAR_15++) {
  VAR_14 = FUNC_8(VAR_13, FUNC_0(VAR_15, VAR_13->pcie_port));
  VAR_16 += FUNC_10(VAR_12 + VAR_16, "[%llx] (BAR1_INDEX_%02d): %08x\n",
          FUNC_0(VAR_15, VAR_13->pcie_port), VAR_15, VAR_14);
 }

 return VAR_16;
}
