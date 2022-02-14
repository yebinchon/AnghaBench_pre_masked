
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int cmd_complete; scalar_t__ ipc_base; scalar_t__ irq_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 int VAR_6;

 if (VAR_3.irq_mode) {
  VAR_6 = FUNC_1();
  FUNC_2(VAR_6 | VAR_1, VAR_3.ipc_base + VAR_0);
 }
 FUNC_0(&VAR_3.cmd_complete);

 return VAR_2;
}
