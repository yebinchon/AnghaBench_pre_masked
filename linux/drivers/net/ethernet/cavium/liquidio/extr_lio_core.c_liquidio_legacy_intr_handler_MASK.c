
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* process_interrupt_regs ) (struct octeon_device*) ;int (* enable_interrupt ) (struct octeon_device*,int ) ;int (* disable_interrupt ) (struct octeon_device*,int ) ;} ;
struct octeon_device {TYPE_1__ fn_list; int status; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (struct octeon_device*,int ) ;

__attribute__((used)) static
irqreturn_t FUNC_5(int VAR_3 __attribute__((unused)),
      void *VAR_4)
{
 struct octeon_device *VAR_5 = (struct octeon_device *)VAR_4;
 irqreturn_t VAR_6;


 VAR_5->fn_list.disable_interrupt(VAR_5, VAR_1);

 VAR_6 = VAR_5->fn_list.process_interrupt_regs(VAR_5);

 if (VAR_6 == VAR_0)
  FUNC_1(VAR_5);


 if (!(FUNC_0(&VAR_5->status) == VAR_2))
  VAR_5->fn_list.enable_interrupt(VAR_5, VAR_1);

 return VAR_6;
}
