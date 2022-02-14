
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int * disc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int FUNC_2 (struct tty_struct*) ;
 int * FUNC_3 (struct tty_struct*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_3);
 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_3(VAR_4);
  if (VAR_2 == ((void*)0)) {
   VAR_5 = -VAR_1;
  } else {
   VAR_4->disc_data = VAR_2;
   FUNC_2(VAR_4);
   VAR_5 = 0;
  }
 }
 FUNC_1(&VAR_3);

 return VAR_5;
}
