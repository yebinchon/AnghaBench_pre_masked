
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct stm32_fmc2_nfc {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct stm32_fmc2_nfc *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->io_base + VAR_0);

 return VAR_3 & VAR_1;
}
