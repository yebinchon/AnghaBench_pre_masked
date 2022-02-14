
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct pic32_sqi {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct pic32_sqi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_4)
{
 struct pic32_sqi *VAR_5 = FUNC_1(VAR_4);


 FUNC_0(VAR_5->regs + VAR_2, VAR_3);

 FUNC_0(VAR_5->regs + VAR_0, VAR_1);

 return 0;
}
