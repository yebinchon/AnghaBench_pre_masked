
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_dlci {scalar_t__ state; int modem_rx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_2)
{
 struct gsm_dlci *VAR_3 = VAR_2->driver_data;
 if (VAR_3->state == VAR_0)
  return -VAR_1;
 return VAR_3->modem_rx;
}
