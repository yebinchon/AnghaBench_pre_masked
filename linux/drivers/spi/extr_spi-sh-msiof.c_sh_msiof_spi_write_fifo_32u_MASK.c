
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_msiof_spi_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct sh_msiof_spi_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sh_msiof_spi_priv *VAR_1,
     const void *VAR_2, int VAR_3, int VAR_4)
{
 const u32 *VAR_5 = VAR_2;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_1(VAR_1, VAR_0, FUNC_0(&VAR_5[VAR_6]) << VAR_4);
}
