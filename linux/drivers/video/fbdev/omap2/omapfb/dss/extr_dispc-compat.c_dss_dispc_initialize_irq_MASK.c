
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last_reset; } ;
struct TYPE_5__ {int error_work; int irq_error_mask; int registered_isr; int irq_lock; TYPE_1__ irq_stats; int irq_stats_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_9 ;
 int FUNC_9 (int ,int ,int) ;
 int VAR_10 ;
 int FUNC_10 (int *) ;

int FUNC_11(void)
{
 int VAR_11;







 FUNC_10(&VAR_6.irq_lock);

 FUNC_9(VAR_6.registered_isr, 0,
   sizeof(VAR_6.registered_isr));

 VAR_6.irq_error_mask = VAR_0;
 if (FUNC_8(VAR_4))
  VAR_6.irq_error_mask |= VAR_1;
 if (FUNC_8(VAR_5))
  VAR_6.irq_error_mask |= VAR_2;
 if (FUNC_7() > 3)
  VAR_6.irq_error_mask |= VAR_3;





 FUNC_3(FUNC_4());

 FUNC_1(&VAR_6.error_work, VAR_8);

 FUNC_2();

 VAR_11 = FUNC_5(VAR_10, &VAR_6);
 if (VAR_11) {
  FUNC_0("dispc_request_irq failed\n");
  return VAR_11;
 }

 return 0;
}
