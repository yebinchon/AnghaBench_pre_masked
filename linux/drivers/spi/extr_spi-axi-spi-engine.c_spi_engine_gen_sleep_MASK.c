
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_engine_program {int dummy; } ;
struct spi_engine {int ref_clk; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct spi_engine_program*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct spi_engine_program *VAR_0, bool VAR_1,
 struct spi_engine *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_2->ref_clk);
 unsigned int VAR_6;

 if (VAR_4 == 0)
  return;

 VAR_6 = FUNC_0(VAR_4 * VAR_5, (VAR_3 + 1) * 2);
 while (VAR_6) {
  unsigned int VAR_7 = FUNC_3(VAR_6, 256U);

  FUNC_4(VAR_0, VAR_1, FUNC_1(VAR_7 - 1));
  VAR_6 -= VAR_7;
 }
}
