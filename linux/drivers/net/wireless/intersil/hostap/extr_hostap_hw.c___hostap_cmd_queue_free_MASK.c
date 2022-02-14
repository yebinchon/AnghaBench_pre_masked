
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hostap_cmd_queue {int del_req; int usecnt; int list; } ;
struct TYPE_3__ {int cmd_queue_len; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (struct hostap_cmd_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(local_info_t *VAR_0,
        struct hostap_cmd_queue *VAR_1,
        int VAR_2)
{
 if (VAR_2) {
  VAR_1->del_req = 1;
  if (!FUNC_2(&VAR_1->list)) {
   FUNC_1(&VAR_1->list);
   VAR_0->cmd_queue_len--;
  }
 }

 if (FUNC_3(&VAR_1->usecnt) && VAR_1->del_req)
  FUNC_0(VAR_1);
}
