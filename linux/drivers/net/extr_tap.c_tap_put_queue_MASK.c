
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int sk; int next; int tap; scalar_t__ enabled; } ;
struct tap_dev {int numqueues; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 struct tap_dev* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct tap_queue*) ;

__attribute__((used)) static void FUNC_9(struct tap_queue *VAR_0)
{
 struct tap_dev *VAR_1;

 FUNC_4();
 VAR_1 = FUNC_3(VAR_0->tap);

 if (VAR_1) {
  if (VAR_0->enabled)
   FUNC_0(FUNC_8(VAR_0));

  VAR_1->numqueues--;
  FUNC_1(VAR_0->tap, ((void*)0));
  FUNC_6(&VAR_0->sk);
  FUNC_2(&VAR_0->next);
 }

 FUNC_5();

 FUNC_7();
 FUNC_6(&VAR_0->sk);
}
