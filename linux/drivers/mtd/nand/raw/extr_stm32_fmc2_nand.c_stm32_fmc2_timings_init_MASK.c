
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_fmc2_timings {int thiz; int thold_att; int twait; int tset_att; int thold_mem; int tset_mem; int tar; int tclr; } ;
struct stm32_fmc2_nfc {scalar_t__ io_base; } ;
struct stm32_fmc2_nand {struct stm32_fmc2_timings timings; } ;
struct nand_chip {int controller; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 struct stm32_fmc2_nand* FUNC_11 (struct nand_chip*) ;
 struct stm32_fmc2_nfc* FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct nand_chip *VAR_5)
{
 struct stm32_fmc2_nfc *VAR_6 = FUNC_12(VAR_5->controller);
 struct stm32_fmc2_nand *VAR_7 = FUNC_11(VAR_5);
 struct stm32_fmc2_timings *VAR_8 = &VAR_7->timings;
 u32 VAR_9 = FUNC_10(VAR_6->io_base + VAR_1);
 u32 VAR_10, VAR_11;


 VAR_9 &= ~VAR_3;
 VAR_9 |= FUNC_5(VAR_8->tclr);
 VAR_9 &= ~VAR_2;
 VAR_9 |= FUNC_4(VAR_8->tar);


 VAR_10 = FUNC_8(VAR_8->tset_mem);
 VAR_10 |= FUNC_9(VAR_8->twait);
 VAR_10 |= FUNC_7(VAR_8->thold_mem);
 VAR_10 |= FUNC_6(VAR_8->thiz);


 VAR_11 = FUNC_2(VAR_8->tset_att);
 VAR_11 |= FUNC_3(VAR_8->twait);
 VAR_11 |= FUNC_1(VAR_8->thold_att);
 VAR_11 |= FUNC_0(VAR_8->thiz);

 FUNC_13(VAR_9, VAR_6->io_base + VAR_1);
 FUNC_13(VAR_10, VAR_6->io_base + VAR_4);
 FUNC_13(VAR_11, VAR_6->io_base + VAR_0);
}
