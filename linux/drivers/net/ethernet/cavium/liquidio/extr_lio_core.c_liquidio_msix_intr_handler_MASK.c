
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct octeon_ioq_vector {size_t droq_index; struct octeon_device* oct_dev; } ;
struct octeon_droq {int dummy; } ;
struct TYPE_2__ {int (* msix_interrupt_handler ) (struct octeon_ioq_vector*) ;} ;
struct octeon_device {TYPE_1__ fn_list; struct octeon_droq** droq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct octeon_droq*,int) ;
 int FUNC_1 (struct octeon_ioq_vector*) ;

irqreturn_t
FUNC_2(int VAR_3 __attribute__((unused)), void *VAR_4)
{
 struct octeon_ioq_vector *VAR_5 = (struct octeon_ioq_vector *)VAR_4;
 struct octeon_device *VAR_6 = VAR_5->oct_dev;
 struct octeon_droq *VAR_7 = VAR_6->droq[VAR_5->droq_index];
 u64 VAR_8;

 VAR_8 = VAR_6->fn_list.msix_interrupt_handler(VAR_5);

 if (VAR_8 & VAR_2 || VAR_8 & VAR_1)
  FUNC_0(VAR_7, VAR_8);

 return VAR_0;
}
