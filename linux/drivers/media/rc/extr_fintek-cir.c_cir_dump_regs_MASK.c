
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fintek_dev {int logical_dev_cir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fintek_dev*,int ) ;
 int FUNC_1 (struct fintek_dev*) ;
 int FUNC_2 (struct fintek_dev*) ;
 int FUNC_3 (struct fintek_dev*,int ) ;
 int FUNC_4 (struct fintek_dev*,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(struct fintek_dev *VAR_9)
{
 FUNC_2(VAR_9);
 FUNC_4(VAR_9, VAR_9->logical_dev_cir);

 FUNC_5("%s: Dump CIR logical device registers:\n", VAR_8);
 FUNC_5(" * CR CIR BASE ADDR: 0x%x\n",
  (FUNC_3(VAR_9, VAR_1) << 8) |
  FUNC_3(VAR_9, VAR_2));
 FUNC_5(" * CR CIR IRQ NUM:   0x%x\n",
  FUNC_3(VAR_9, VAR_3));

 FUNC_1(VAR_9);

 FUNC_5("%s: Dump CIR registers:\n", VAR_8);
 FUNC_5(" * STATUS:     0x%x\n",
  FUNC_0(VAR_9, VAR_5));
 FUNC_5(" * CONTROL:    0x%x\n",
  FUNC_0(VAR_9, VAR_0));
 FUNC_5(" * RX_DATA:    0x%x\n",
  FUNC_0(VAR_9, VAR_4));
 FUNC_5(" * TX_CONTROL: 0x%x\n",
  FUNC_0(VAR_9, VAR_6));
 FUNC_5(" * TX_DATA:    0x%x\n",
  FUNC_0(VAR_9, VAR_7));
}
