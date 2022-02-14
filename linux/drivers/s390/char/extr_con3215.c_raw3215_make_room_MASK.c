
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {unsigned int count; int cdev; int flags; int port; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct raw3215_info*) ;
 int FUNC_3 (struct raw3215_info*) ;
 int FUNC_4 (struct raw3215_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct raw3215_info *VAR_2, unsigned int VAR_3)
{
 while (VAR_0 - VAR_2->count < VAR_3) {



  if (FUNC_7(&VAR_2->port)) {
   FUNC_2(VAR_2);
   continue;
  }

  VAR_2->flags |= VAR_1;
  FUNC_3(VAR_2);
  FUNC_4(VAR_2);
  VAR_2->flags &= ~VAR_1;




  if (VAR_0 - VAR_2->count >= VAR_3)
   break;

  FUNC_6(FUNC_1(VAR_2->cdev));
  FUNC_8(100);
  FUNC_5(FUNC_1(VAR_2->cdev));
 }
}
