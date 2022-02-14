
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int dummy; } ;


 int FUNC_0 (struct spi_nor*,int ,int *,int) ;
 int FUNC_1 (struct spi_nor*,int ) ;

__attribute__((used)) static int FUNC_2(struct spi_nor *VAR_0, u8 VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, 0);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
