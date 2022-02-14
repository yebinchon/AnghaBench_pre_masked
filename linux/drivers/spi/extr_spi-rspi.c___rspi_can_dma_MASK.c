
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {scalar_t__ len; } ;
struct rspi_data {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ fifo_size; } ;



__attribute__((used)) static bool FUNC_0(const struct rspi_data *VAR_0,
      const struct spi_transfer *VAR_1)
{
 return VAR_1->len > VAR_0->ops->fifo_size;
}
