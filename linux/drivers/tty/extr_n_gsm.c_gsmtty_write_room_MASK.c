
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_dlci {scalar_t__ state; int fifo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_3)
{
 struct gsm_dlci *VAR_4 = VAR_3->driver_data;
 if (VAR_4->state == VAR_0)
  return -VAR_1;
 return VAR_2 - FUNC_0(VAR_4->fifo);
}
