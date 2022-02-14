
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int receive_room; TYPE_1__* disc_data; } ;
struct TYPE_2__ {int opencalled; int * kref_tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct tty_struct*) ;
 int * FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_5)
{
 int VAR_6 = -VAR_0;

 FUNC_0(&VAR_3);
 if (VAR_4->opencalled == 0) {

  VAR_4->kref_tty = FUNC_3(VAR_5);
  if (VAR_4->kref_tty == ((void*)0)) {
   VAR_6 = -VAR_1;
  } else {
   VAR_4->opencalled = 1;
   VAR_5->disc_data = VAR_4;
   VAR_5->receive_room = VAR_2;
   FUNC_2(VAR_5);
   VAR_6 = 0;
  }
 }
 FUNC_1(&VAR_3);
 return VAR_6;
}
