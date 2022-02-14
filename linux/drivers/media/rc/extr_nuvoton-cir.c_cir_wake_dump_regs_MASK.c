
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvt_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct nvt_dev*,int ) ;
 int FUNC_1 (struct nvt_dev*,int ) ;
 int FUNC_2 (struct nvt_dev*) ;
 int FUNC_3 (struct nvt_dev*) ;
 int FUNC_4 (struct nvt_dev*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(struct nvt_dev *VAR_22)
{
 u8 VAR_23, VAR_24;

 FUNC_3(VAR_22);
 FUNC_4(VAR_22, VAR_20);

 FUNC_6("%s: Dump CIR WAKE logical device registers:\n",
  VAR_21);
 FUNC_6(" * CR CIR WAKE ACTIVE :   0x%x\n",
  FUNC_1(VAR_22, VAR_19));
 FUNC_6(" * CR CIR WAKE BASE ADDR: 0x%x\n",
  (FUNC_1(VAR_22, VAR_16) << 8) |
  FUNC_1(VAR_22, VAR_17));
 FUNC_6(" * CR CIR WAKE IRQ NUM:   0x%x\n",
  FUNC_1(VAR_22, VAR_18));

 FUNC_2(VAR_22);

 FUNC_6("%s: Dump CIR WAKE registers\n", VAR_21);
 FUNC_6(" * IRCON:          0x%x\n",
  FUNC_0(VAR_22, VAR_5));
 FUNC_6(" * IRSTS:          0x%x\n",
  FUNC_0(VAR_22, VAR_8));
 FUNC_6(" * IREN:           0x%x\n",
  FUNC_0(VAR_22, VAR_6));
 FUNC_6(" * FIFO CMP DEEP:  0x%x\n",
  FUNC_0(VAR_22, VAR_1));
 FUNC_6(" * FIFO CMP TOL:   0x%x\n",
  FUNC_0(VAR_22, VAR_2));
 FUNC_6(" * FIFO COUNT:     0x%x\n",
  FUNC_0(VAR_22, VAR_3));
 FUNC_6(" * SLCH:           0x%x\n",
  FUNC_0(VAR_22, VAR_12));
 FUNC_6(" * SLCL:           0x%x\n",
  FUNC_0(VAR_22, VAR_13));
 FUNC_6(" * FIFOCON:        0x%x\n",
  FUNC_0(VAR_22, VAR_0));
 FUNC_6(" * SRXFSTS:        0x%x\n",
  FUNC_0(VAR_22, VAR_14));
 FUNC_6(" * SAMPLE RX FIFO: 0x%x\n",
  FUNC_0(VAR_22, VAR_11));
 FUNC_6(" * WR FIFO DATA:   0x%x\n",
  FUNC_0(VAR_22, VAR_15));
 FUNC_6(" * RD FIFO ONLY:   0x%x\n",
  FUNC_0(VAR_22, VAR_9));
 FUNC_6(" * RD FIFO ONLY IDX: 0x%x\n",
  FUNC_0(VAR_22, VAR_10));
 FUNC_6(" * FIFO IGNORE:    0x%x\n",
  FUNC_0(VAR_22, VAR_4));
 FUNC_6(" * IRFSM:          0x%x\n",
  FUNC_0(VAR_22, VAR_7));

 VAR_24 = FUNC_0(VAR_22, VAR_3);
 FUNC_6("%s: Dump CIR WAKE FIFO (len %d)\n", VAR_21, VAR_24);
 FUNC_6("* Contents =");
 for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++)
  FUNC_5(" %02x",
   FUNC_0(VAR_22, VAR_9));
 FUNC_5("\n");
}
