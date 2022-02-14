
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* convert_addr ) (struct spi_nor*,int ) ;} ;
struct spi_nor {TYPE_1__ params; } ;
typedef int loff_t ;


 int FUNC_0 (struct spi_nor*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct spi_nor *VAR_0, loff_t VAR_1)
{
 if (!VAR_0->params.convert_addr)
  return VAR_1;

 return VAR_0->params.convert_addr(VAR_0, VAR_1);
}
