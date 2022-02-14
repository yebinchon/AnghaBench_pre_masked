
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buswidth; scalar_t__ nbytes; } ;
struct TYPE_5__ {scalar_t__ buswidth; scalar_t__ nbytes; } ;
struct TYPE_4__ {scalar_t__ buswidth; } ;
struct spi_mem_op {TYPE_3__ data; TYPE_2__ addr; TYPE_1__ cmd; } ;
struct atmel_qspi_mode {scalar_t__ cmd_buswidth; scalar_t__ addr_buswidth; scalar_t__ data_buswidth; } ;



__attribute__((used)) static inline bool FUNC_0(const struct spi_mem_op *VAR_0,
         const struct atmel_qspi_mode *VAR_1)
{
 if (VAR_0->cmd.buswidth != VAR_1->cmd_buswidth)
  return 0;

 if (VAR_0->addr.nbytes && VAR_0->addr.buswidth != VAR_1->addr_buswidth)
  return 0;

 if (VAR_0->data.nbytes && VAR_0->data.buswidth != VAR_1->data_buswidth)
  return 0;

 return 1;
}
