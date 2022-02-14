
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ser_device* disc_data; } ;
struct ser_device {struct tty_struct* tty; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ser_device*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct ser_device *VAR_1;

 VAR_1 = VAR_0->disc_data;
 FUNC_0(VAR_1 == ((void*)0));
 FUNC_1(VAR_1->tty != VAR_0);
 FUNC_2(VAR_1);
}
