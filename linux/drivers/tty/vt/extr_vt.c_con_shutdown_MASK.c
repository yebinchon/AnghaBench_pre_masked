
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tty; } ;
struct vc_data {TYPE_1__ port; } ;
struct tty_struct {struct vc_data* driver_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct vc_data *VAR_1 = VAR_0->driver_data;
 FUNC_0(VAR_1 == ((void*)0));
 FUNC_1();
 VAR_1->port.tty = ((void*)0);
 FUNC_2();
}
