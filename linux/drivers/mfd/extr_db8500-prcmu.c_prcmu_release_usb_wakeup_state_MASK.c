
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ header; int ape_voltage_status; } ;
struct TYPE_4__ {int lock; TYPE_1__ ack; int work; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int ) ;

int FUNC_9(void)
{
 int VAR_7 = 0;

 FUNC_3(&VAR_5.lock);

 while (FUNC_5(VAR_3) & FUNC_1(1))
  FUNC_2();

 FUNC_7(VAR_1,
  (VAR_6 + VAR_4));

 FUNC_8(FUNC_1(1), VAR_2);
 FUNC_6(&VAR_5.work);

 if ((VAR_5.ack.header != VAR_1) ||
  ((VAR_5.ack.ape_voltage_status & FUNC_0(0)) != 0))
  VAR_7 = -VAR_0;

 FUNC_4(&VAR_5.lock);

 return VAR_7;
}
