
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_hw {int pg_state; } ;
struct mei_device {scalar_t__ pg_event; int wait_pg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct mei_me_hw* FUNC_0 (struct mei_device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mei_device *VAR_3)
{
 struct mei_me_hw *VAR_4 = FUNC_0(VAR_3);

 if (VAR_3->pg_event != VAR_1)
  return;

 VAR_3->pg_event = VAR_0;
 VAR_4->pg_state = VAR_2;
 if (FUNC_1(&VAR_3->wait_pg))
  FUNC_2(&VAR_3->wait_pg);
}
