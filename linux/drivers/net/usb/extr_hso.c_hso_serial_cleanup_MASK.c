
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct hso_serial* driver_data; } ;
struct hso_serial {TYPE_1__* parent; } ;
struct TYPE_2__ {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1)
{
 struct hso_serial *VAR_2 = VAR_1->driver_data;

 if (!VAR_2)
  return;

 FUNC_0(&VAR_2->parent->ref, VAR_0);
}
