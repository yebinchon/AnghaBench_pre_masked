
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_qspi {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct stm32_qspi *VAR_3)
{
 u32 VAR_4;

 return FUNC_0(VAR_3->io_base + VAR_0, VAR_4,
       !(VAR_4 & VAR_1), 1,
       VAR_2);
}
