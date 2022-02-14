
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int ring_thread_wait; } ;


 int FUNC_0 (int ,int ) ;
 long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 long FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct solo_dev*) ;
 int FUNC_7 () ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(void *VAR_4)
{
 struct solo_dev *VAR_5 = VAR_4;
 FUNC_0(VAR_3, VAR_2);

 FUNC_5();
 FUNC_1(&VAR_5->ring_thread_wait, &VAR_3);

 for (;;) {
  long VAR_6 = FUNC_4(VAR_1);

  if (VAR_6 == -VAR_0 || FUNC_2())
   break;
  FUNC_6(VAR_5);
  FUNC_7();
 }

 FUNC_3(&VAR_5->ring_thread_wait, &VAR_3);

 return 0;
}
