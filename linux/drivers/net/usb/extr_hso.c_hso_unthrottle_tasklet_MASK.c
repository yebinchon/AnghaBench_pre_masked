
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hso_serial {int serial_lock; TYPE_1__* parent; } ;
struct TYPE_2__ {int port_spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hso_serial*) ;
 int FUNC_1 (struct hso_serial*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct hso_serial *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->serial_lock, VAR_2);
 if ((VAR_1->parent->port_spec & VAR_0))
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
 FUNC_3(&VAR_1->serial_lock, VAR_2);
}
