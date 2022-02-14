
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_queue {int rcv_state; int left; scalar_t__ offset; int rcv_hash; } ;
struct nvmet_tcp_cmd {struct nvmet_tcp_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct nvmet_tcp_cmd*) ;

__attribute__((used)) static void FUNC_1(struct nvmet_tcp_cmd *VAR_2)
{
 struct nvmet_tcp_queue *VAR_3 = VAR_2->queue;

 FUNC_0(VAR_3->rcv_hash, VAR_2);
 VAR_3->offset = 0;
 VAR_3->left = VAR_1;
 VAR_3->rcv_state = VAR_0;
}
