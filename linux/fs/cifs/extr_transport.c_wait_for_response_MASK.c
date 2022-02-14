
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {scalar_t__ mid_state; } ;
struct TCP_Server_Info {int response_q; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct TCP_Server_Info *VAR_2, struct mid_q_entry *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->response_q,
        VAR_3->mid_state != VAR_1);
 if (VAR_4 < 0)
  return -VAR_0;

 return 0;
}
