
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_fmc2_nfc {scalar_t__ io_base; int irq_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct stm32_fmc2_nfc *VAR_5,
          int VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_5->io_base + VAR_0);

 if (VAR_6 == VAR_4)
  VAR_7 |= VAR_2;
 else
  VAR_7 |= VAR_1;

 VAR_5->irq_state = VAR_3;

 FUNC_1(VAR_7, VAR_5->io_base + VAR_0);
}
