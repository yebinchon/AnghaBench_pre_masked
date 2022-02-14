
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* port; int flags; struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ no_room; } ;
struct TYPE_2__ {int * itty; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_1->disc_data;


 if (FUNC_3(VAR_2->no_room)) {
  VAR_2->no_room = 0;

  FUNC_0(VAR_1->port->itty == ((void*)0),
    "scheduling with invalid itty\n");




  FUNC_0(FUNC_1(VAR_0, &VAR_1->flags),
          "scheduling buffer work for halted ldisc\n");
  FUNC_2(VAR_1->port);
 }
}
