
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* quad_enable ) (struct spi_nor*) ;} ;
struct spi_nor {TYPE_1__ params; int write_proto; int read_proto; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_2(struct spi_nor *VAR_0)
{
 if (!VAR_0->params.quad_enable)
  return 0;

 if (!(FUNC_0(VAR_0->read_proto) == 4 ||
       FUNC_0(VAR_0->write_proto) == 4))
  return 0;

 return VAR_0->params.quad_enable(VAR_0);
}
