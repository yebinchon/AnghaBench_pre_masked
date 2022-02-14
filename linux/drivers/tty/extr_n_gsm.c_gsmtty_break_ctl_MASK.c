
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_dlci {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gsm_dlci*,int) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2, int VAR_3)
{
 struct gsm_dlci *VAR_4 = VAR_2->driver_data;
 int VAR_5 = 0;
 if (VAR_4->state == VAR_0)
  return -VAR_1;

 if (VAR_3 == -1)

  VAR_5 = 0x0F;
 else if (VAR_3 > 0) {
  VAR_5 = VAR_3 / 200;
  if (VAR_5 > 0x0F)
   VAR_5 = 0x0F;
 }
 return FUNC_0(VAR_4, VAR_5);
}
