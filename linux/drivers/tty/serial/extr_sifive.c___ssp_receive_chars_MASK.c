
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rx; } ;
struct TYPE_6__ {int lock; TYPE_1__* state; TYPE_2__ icount; } ;
struct sifive_serial_port {TYPE_3__ port; } ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct sifive_serial_port*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int ,unsigned char,int ) ;

__attribute__((used)) static void FUNC_5(struct sifive_serial_port *VAR_2)
{
 unsigned char VAR_3;
 char VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_0; VAR_5 > 0; --VAR_5) {
  VAR_3 = FUNC_0(VAR_2, &VAR_4);
  if (VAR_4)
   break;

  VAR_2->port.icount.rx++;
  FUNC_4(&VAR_2->port, 0, 0, VAR_3, VAR_1);
 }

 FUNC_2(&VAR_2->port.lock);
 FUNC_3(&VAR_2->port.state->port);
 FUNC_1(&VAR_2->port.lock);
}
