
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct st_data_s {struct tty_struct* tty; } ;
struct TYPE_2__ {int (* write_room ) (struct tty_struct*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct st_data_s *VAR_0)
{
 struct tty_struct *VAR_1;
 if (FUNC_2(VAR_0 == ((void*)0) || VAR_0->tty == ((void*)0))) {
  FUNC_0("tty unavailable to perform write");
  return -1;
 }
 VAR_1 = VAR_0->tty;
 return VAR_1->ops->write_room(VAR_1);
}
