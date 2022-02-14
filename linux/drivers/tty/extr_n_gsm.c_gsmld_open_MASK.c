
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int receive_room; struct gsm_mux* disc_data; TYPE_1__* ops; } ;
struct gsm_mux {int encoding; } ;
struct TYPE_2__ {int * write; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gsm_mux* FUNC_0 () ;
 int FUNC_1 (struct gsm_mux*) ;
 int FUNC_2 (struct tty_struct*,struct gsm_mux*) ;
 int FUNC_3 (struct gsm_mux*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2)
{
 struct gsm_mux *VAR_3;
 int VAR_4;

 if (VAR_2->ops->write == ((void*)0))
  return -VAR_0;


 VAR_3 = FUNC_0();
 if (VAR_3 == ((void*)0))
  return -VAR_1;

 VAR_2->disc_data = VAR_3;
 VAR_2->receive_room = 65536;


 VAR_3->encoding = 1;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 != 0) {
  FUNC_1(VAR_3);
  FUNC_3(VAR_3);
 }
 return VAR_4;
}
