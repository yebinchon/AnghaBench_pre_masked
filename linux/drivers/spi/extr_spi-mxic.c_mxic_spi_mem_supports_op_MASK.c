
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int buswidth; int nbytes; } ;
struct TYPE_8__ {int buswidth; scalar_t__ nbytes; } ;
struct TYPE_6__ {int buswidth; scalar_t__ nbytes; } ;
struct TYPE_5__ {int buswidth; } ;
struct spi_mem_op {TYPE_3__ addr; TYPE_4__ dummy; TYPE_2__ data; TYPE_1__ cmd; } ;
struct spi_mem {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct spi_mem *VAR_0,
         const struct spi_mem_op *VAR_1)
{
 if (VAR_1->data.buswidth > 4 || VAR_1->addr.buswidth > 4 ||
     VAR_1->dummy.buswidth > 4 || VAR_1->cmd.buswidth > 4)
  return 0;

 if (VAR_1->data.nbytes && VAR_1->dummy.nbytes &&
     VAR_1->data.buswidth != VAR_1->dummy.buswidth)
  return 0;

 if (VAR_1->addr.nbytes > 7)
  return 0;

 return 1;
}
