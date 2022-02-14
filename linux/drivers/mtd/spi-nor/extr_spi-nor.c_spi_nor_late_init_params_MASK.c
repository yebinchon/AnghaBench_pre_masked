
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * locking_ops; } ;
struct spi_nor {int flags; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct spi_nor *VAR_2)
{




 if (VAR_2->flags & VAR_0 && !VAR_2->params.locking_ops)
  VAR_2->params.locking_ops = &VAR_1;
}
