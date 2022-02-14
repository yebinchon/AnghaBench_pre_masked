
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x25_asy {TYPE_2__* dev; struct tty_struct* tty; } ;
struct tty_struct {int receive_room; struct x25_asy* disc_data; TYPE_1__* ops; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int * write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 struct x25_asy* FUNC_2 () ;
 int FUNC_3 (struct x25_asy*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_3)
{
 struct x25_asy *VAR_4;
 int VAR_5;

 if (VAR_3->ops->write == ((void*)0))
  return -VAR_2;


 VAR_4 = FUNC_2();
 if (VAR_4 == ((void*)0))
  return -VAR_1;

 VAR_4->tty = VAR_3;
 VAR_3->disc_data = VAR_4;
 VAR_3->receive_room = 65536;
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);


 VAR_4->dev->type = VAR_0;


 VAR_5 = FUNC_4(VAR_4->dev);
 if (VAR_5) {
  FUNC_3(VAR_4);
  return VAR_5;
 }

 return 0;
}
