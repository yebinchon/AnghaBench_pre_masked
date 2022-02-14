
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_fmc2_nfc {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct stm32_fmc2_nfc *VAR_3, bool VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_3->io_base + VAR_0);

 VAR_5 &= ~VAR_2;
 if (VAR_4)
  VAR_5 |= FUNC_0(VAR_1);
 FUNC_2(VAR_5, VAR_3->io_base + VAR_0);
}
