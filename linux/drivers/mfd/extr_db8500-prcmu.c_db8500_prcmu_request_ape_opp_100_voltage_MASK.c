
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ header; int ape_voltage_status; } ;
struct TYPE_4__ {int lock; TYPE_1__ ack; int work; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int ) ;

int FUNC_9(bool VAR_8)
{
 int VAR_9 = 0;
 u8 VAR_10;
 static unsigned int VAR_11;

 FUNC_3(&VAR_6.lock);

 if (VAR_8) {
  if (0 != VAR_11++)
   goto unlock_and_return;
  VAR_10 = VAR_2;
 } else {
  if (VAR_11 == 0) {
   VAR_9 = -VAR_0;
   goto unlock_and_return;
  } else if (1 != VAR_11--) {
   goto unlock_and_return;
  }
  VAR_10 = VAR_1;
 }

 while (FUNC_5(VAR_4) & FUNC_1(1))
  FUNC_2();

 FUNC_7(VAR_10, (VAR_7 + VAR_5));

 FUNC_8(FUNC_1(1), VAR_3);
 FUNC_6(&VAR_6.work);

 if ((VAR_6.ack.header != VAR_10) ||
  ((VAR_6.ack.ape_voltage_status & FUNC_0(0)) != 0))
  VAR_9 = -VAR_0;

unlock_and_return:
 FUNC_4(&VAR_6.lock);

 return VAR_9;
}
