
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int oq; } ;
struct octeon_device {TYPE_2__** droq; TYPE_1__ io_qmask; } ;
struct TYPE_4__ {int max_count; } ;


 int FUNC_0 (size_t) ;
 size_t FUNC_1 (struct octeon_device*) ;

int FUNC_2(struct octeon_device *VAR_0, u32 VAR_1)
{
 if (VAR_0 && (VAR_1 < FUNC_1(VAR_0)) &&
     (VAR_0->io_qmask.oq & FUNC_0(VAR_1)))
  return VAR_0->droq[VAR_1]->max_count;
 return -1;
}
