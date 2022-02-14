
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_sender {size_t msgsz; int list; int tsk; } ;
struct msg_queue {int q_senders; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct msg_queue *VAR_2,
     struct msg_sender *VAR_3, size_t VAR_4)
{
 VAR_3->tsk = VAR_1;
 VAR_3->msgsz = VAR_4;
 FUNC_0(VAR_0);
 FUNC_1(&VAR_3->list, &VAR_2->q_senders);
}
