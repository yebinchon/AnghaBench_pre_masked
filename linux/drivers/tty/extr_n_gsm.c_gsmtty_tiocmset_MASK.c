
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_dlci {unsigned int modem_tx; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gsm_dlci*,int ) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2,
 unsigned int VAR_3, unsigned int VAR_4)
{
 struct gsm_dlci *VAR_5 = VAR_2->driver_data;
 unsigned int VAR_6 = VAR_5->modem_tx;

 if (VAR_5->state == VAR_0)
  return -VAR_1;
 VAR_6 &= ~VAR_4;
 VAR_6 |= VAR_3;

 if (VAR_6 != VAR_5->modem_tx) {
  VAR_5->modem_tx = VAR_6;
  return FUNC_0(VAR_5, 0);
 }
 return 0;
}
