
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_nor_flash_parameter {int erase_map; } ;
struct spi_nor {int dummy; } ;
struct sfdp_parameter_header {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct sfdp_parameter_header const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct spi_nor*,int *,int) ;
 int FUNC_7 (struct spi_nor*,struct spi_nor_flash_parameter*,int const*) ;
 int FUNC_8 (struct spi_nor*,int ,size_t,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct spi_nor *VAR_2,
         const struct sfdp_parameter_header *VAR_3,
         struct spi_nor_flash_parameter *VAR_4)
{
 const u32 *VAR_5;
 u32 *VAR_6;
 size_t VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10;


 VAR_7 = VAR_3->length * sizeof(*VAR_6);
 VAR_6 = FUNC_4(VAR_7, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_3);
 VAR_10 = FUNC_8(VAR_2, VAR_8, VAR_7, VAR_6);
 if (VAR_10)
  goto out;


 for (VAR_9 = 0; VAR_9 < VAR_3->length; VAR_9++)
  VAR_6[VAR_9] = FUNC_5(VAR_6[VAR_9]);

 VAR_5 = FUNC_6(VAR_2, VAR_6, VAR_3->length);
 if (FUNC_0(VAR_5)) {
  VAR_10 = FUNC_1(VAR_5);
  goto out;
 }

 VAR_10 = FUNC_7(VAR_2, VAR_4, VAR_5);
 if (VAR_10)
  goto out;

 FUNC_9(&VAR_4->erase_map);

out:
 FUNC_3(VAR_6);
 return VAR_10;
}
