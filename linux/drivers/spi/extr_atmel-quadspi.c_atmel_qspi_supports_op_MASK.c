
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nbytes; } ;
struct TYPE_5__ {int nbytes; scalar_t__ buswidth; } ;
struct TYPE_4__ {scalar_t__ buswidth; } ;
struct spi_mem_op {TYPE_3__ dummy; TYPE_2__ addr; TYPE_1__ cmd; } ;
struct spi_mem {int dummy; } ;


 scalar_t__ FUNC_0 (struct spi_mem_op const*) ;

__attribute__((used)) static bool FUNC_1(struct spi_mem *VAR_0,
       const struct spi_mem_op *VAR_1)
{
 if (FUNC_0(VAR_1) < 0)
  return 0;


 if (VAR_1->addr.nbytes == 2 && VAR_1->cmd.buswidth != VAR_1->addr.buswidth &&
  VAR_1->dummy.nbytes == 0)
  return 0;

 return 1;
}
