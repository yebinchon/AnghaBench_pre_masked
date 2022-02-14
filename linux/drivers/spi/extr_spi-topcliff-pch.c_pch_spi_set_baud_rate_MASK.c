
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_master*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct spi_master *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_1 / (VAR_5 * 2);


 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;

 FUNC_0(VAR_4, VAR_3, VAR_6, VAR_0);
}
