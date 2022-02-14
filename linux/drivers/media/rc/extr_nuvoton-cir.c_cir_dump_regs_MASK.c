
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(struct nvt_dev *VAR_22)
{
 FUNC_3(VAR_22);
 FUNC_4(VAR_22, VAR_20);

 FUNC_5("%s: Dump CIR logical device registers:\n", VAR_21);
 FUNC_5(" * CR CIR ACTIVE :   0x%x\n",
  FUNC_1(VAR_22, VAR_19));
 FUNC_5(" * CR CIR BASE ADDR: 0x%x\n",
  (FUNC_1(VAR_22, VAR_16) << 8) |
  FUNC_1(VAR_22, VAR_17));
 FUNC_5(" * CR CIR IRQ NUM:   0x%x\n",
  FUNC_1(VAR_22, VAR_18));

 FUNC_2(VAR_22);

 FUNC_5("%s: Dump CIR registers:\n", VAR_21);
 FUNC_5(" * IRCON:     0x%x\n", FUNC_0(VAR_22, VAR_5));
 FUNC_5(" * IRSTS:     0x%x\n", FUNC_0(VAR_22, VAR_9));
 FUNC_5(" * IREN:      0x%x\n", FUNC_0(VAR_22, VAR_6));
 FUNC_5(" * RXFCONT:   0x%x\n", FUNC_0(VAR_22, VAR_10));
 FUNC_5(" * CP:        0x%x\n", FUNC_0(VAR_22, VAR_1));
 FUNC_5(" * CC:        0x%x\n", FUNC_0(VAR_22, VAR_0));
 FUNC_5(" * SLCH:      0x%x\n", FUNC_0(VAR_22, VAR_11));
 FUNC_5(" * SLCL:      0x%x\n", FUNC_0(VAR_22, VAR_12));
 FUNC_5(" * FIFOCON:   0x%x\n", FUNC_0(VAR_22, VAR_4));
 FUNC_5(" * IRFIFOSTS: 0x%x\n", FUNC_0(VAR_22, VAR_7));
 FUNC_5(" * SRXFIFO:   0x%x\n", FUNC_0(VAR_22, VAR_13));
 FUNC_5(" * TXFCONT:   0x%x\n", FUNC_0(VAR_22, VAR_15));
 FUNC_5(" * STXFIFO:   0x%x\n", FUNC_0(VAR_22, VAR_14));
 FUNC_5(" * FCCH:      0x%x\n", FUNC_0(VAR_22, VAR_2));
 FUNC_5(" * FCCL:      0x%x\n", FUNC_0(VAR_22, VAR_3));
 FUNC_5(" * IRFSM:     0x%x\n", FUNC_0(VAR_22, VAR_8));
}
