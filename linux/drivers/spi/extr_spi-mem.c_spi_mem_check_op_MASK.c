
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int buswidth; scalar_t__ nbytes; } ;
struct TYPE_6__ {int buswidth; scalar_t__ nbytes; } ;
struct TYPE_5__ {int buswidth; scalar_t__ nbytes; } ;
struct TYPE_8__ {int buswidth; } ;
struct spi_mem_op {TYPE_3__ data; TYPE_2__ dummy; TYPE_1__ addr; TYPE_4__ cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct spi_mem_op *VAR_1)
{
 if (!VAR_1->cmd.buswidth)
  return -VAR_0;

 if ((VAR_1->addr.nbytes && !VAR_1->addr.buswidth) ||
     (VAR_1->dummy.nbytes && !VAR_1->dummy.buswidth) ||
     (VAR_1->data.nbytes && !VAR_1->data.buswidth))
  return -VAR_0;

 if (!FUNC_0(VAR_1->cmd.buswidth) ||
     !FUNC_0(VAR_1->addr.buswidth) ||
     !FUNC_0(VAR_1->dummy.buswidth) ||
     !FUNC_0(VAR_1->data.buswidth))
  return -VAR_0;

 return 0;
}
