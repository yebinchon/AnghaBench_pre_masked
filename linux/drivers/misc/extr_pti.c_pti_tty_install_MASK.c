
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; struct pti_tty* driver_data; } ;
struct tty_driver {int dummy; } ;
struct pti_tty {int * mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pti_tty*) ;
 struct pti_tty* FUNC_1 (int,int ) ;
 void* FUNC_2 (int,int *) ;
 int FUNC_3 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(struct tty_driver *VAR_4, struct tty_struct *VAR_5)
{
 int VAR_6 = VAR_5->index;
 struct pti_tty *VAR_7;
 int VAR_8 = FUNC_3(VAR_4, VAR_5);

 if (VAR_8 == 0) {
  VAR_7 = FUNC_1(sizeof(struct pti_tty), VAR_2);
  if (VAR_7 == ((void*)0))
   return -VAR_0;

  if (VAR_6 == VAR_3)
   VAR_7->mc = FUNC_2(0, ((void*)0));
  else
   VAR_7->mc = FUNC_2(2, ((void*)0));

  if (VAR_7->mc == ((void*)0)) {
   FUNC_0(VAR_7);
   return -VAR_1;
  }
  VAR_5->driver_data = VAR_7;
 }

 return VAR_8;
}
