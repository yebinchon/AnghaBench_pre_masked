
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 unsigned int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (unsigned int) ;
 int VAR_6 ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned long VAR_9;

 FUNC_8(VAR_0, 0xff);

 if (FUNC_5(VAR_3, VAR_4)) {
  FUNC_0("time_before: %ld\n", VAR_4 - VAR_3);





  FUNC_3(&VAR_5, VAR_9);
  VAR_8 = FUNC_6();
  VAR_8 |= VAR_1;
  FUNC_7(VAR_8);


  VAR_8 &= ~(VAR_1);
  FUNC_7(VAR_8);
  FUNC_4(&VAR_5, VAR_9);

  FUNC_1(&VAR_6, VAR_3 + VAR_2);
 } else
  FUNC_2("I will reset your machine\n");
}
