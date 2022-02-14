
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dir; int buswidth; } ;
struct TYPE_8__ {int buswidth; scalar_t__ nbytes; } ;
struct TYPE_7__ {int buswidth; scalar_t__ nbytes; } ;
struct TYPE_6__ {int buswidth; } ;
struct spi_mem_op {TYPE_1__ data; TYPE_4__ dummy; TYPE_3__ addr; TYPE_2__ cmd; } ;
struct spi_mem {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct spi_mem*,int ,int) ;

bool FUNC_1(struct spi_mem *VAR_2,
     const struct spi_mem_op *VAR_3)
{
 if (FUNC_0(VAR_2, VAR_3->cmd.buswidth, 1))
  return 0;

 if (VAR_3->addr.nbytes &&
     FUNC_0(VAR_2, VAR_3->addr.buswidth, 1))
  return 0;

 if (VAR_3->dummy.nbytes &&
     FUNC_0(VAR_2, VAR_3->dummy.buswidth, 1))
  return 0;

 if (VAR_3->data.dir != VAR_1 &&
     FUNC_0(VAR_2, VAR_3->data.buswidth,
       VAR_3->data.dir == VAR_0))
  return 0;

 return 1;
}
