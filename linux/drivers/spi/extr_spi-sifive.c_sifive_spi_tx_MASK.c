
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sifive_spi {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sifive_spi*,int ) ;
 int FUNC_2 (struct sifive_spi*,int ,int const) ;

__attribute__((used)) static void FUNC_3(struct sifive_spi *VAR_3, const u8 *VAR_4)
{
 FUNC_0((FUNC_1(VAR_3, VAR_0)
    & VAR_2) != 0);
 FUNC_2(VAR_3, VAR_0,
    *VAR_4 & VAR_1);
}
