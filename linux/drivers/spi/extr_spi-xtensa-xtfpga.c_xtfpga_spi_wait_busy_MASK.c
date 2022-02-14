
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_spi {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct xtfpga_spi*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct xtfpga_spi *VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; FUNC_2(VAR_2, VAR_1) &&
      VAR_3 < VAR_0; ++VAR_3)
  FUNC_1(1);
 FUNC_0(VAR_3 == VAR_0);
}
