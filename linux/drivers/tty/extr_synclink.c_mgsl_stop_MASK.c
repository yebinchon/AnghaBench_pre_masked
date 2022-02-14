
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct mgsl_struct* driver_data; } ;
struct mgsl_struct {int irq_spinlock; scalar_t__ tx_enabled; int device_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mgsl_struct*,int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct mgsl_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2)
{
 struct mgsl_struct *VAR_3 = VAR_2->driver_data;
 unsigned long VAR_4;

 if (FUNC_0(VAR_3, VAR_2->name, "mgsl_stop"))
  return;

 if ( VAR_1 >= VAR_0 )
  FUNC_1("mgsl_stop(%s)\n",VAR_3->device_name);

 FUNC_2(&VAR_3->irq_spinlock,VAR_4);
 if (VAR_3->tx_enabled)
   FUNC_4(VAR_3);
 FUNC_3(&VAR_3->irq_spinlock,VAR_4);

}
