
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct pti_tty* driver_data; } ;
struct pti_tty {int mc; } ;


 int FUNC_0 (struct pti_tty*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct pti_tty *VAR_1 = VAR_0->driver_data;
 if (VAR_1 == ((void*)0))
  return;
 FUNC_1(VAR_1->mc);
 FUNC_0(VAR_1);
 VAR_0->driver_data = ((void*)0);
}
