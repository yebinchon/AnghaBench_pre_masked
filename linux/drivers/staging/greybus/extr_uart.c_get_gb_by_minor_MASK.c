
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_tty {int mutex; int port; scalar_t__ disconnected; } ;


 struct gb_tty* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct gb_tty *FUNC_4(unsigned int VAR_2)
{
 struct gb_tty *VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(&VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(&VAR_3->mutex);
  if (VAR_3->disconnected) {
   FUNC_2(&VAR_3->mutex);
   VAR_3 = ((void*)0);
  } else {
   FUNC_3(&VAR_3->port);
   FUNC_2(&VAR_3->mutex);
  }
 }
 FUNC_2(&VAR_0);
 return VAR_3;
}
