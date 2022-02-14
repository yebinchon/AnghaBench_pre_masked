
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sqhd_disabled; } ;
struct nvmet_tcp_queue {int * snd_cmd; TYPE_1__ nvme_sq; int sock; } ;
struct nvmet_tcp_cmd {int offset; struct nvmet_tcp_queue* queue; int exp_ddgst; } ;
struct msghdr {int msg_flags; } ;
struct kvec {int iov_len; int * iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_1 (struct nvmet_tcp_cmd*) ;
 int FUNC_2 (struct nvmet_tcp_cmd*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct nvmet_tcp_cmd *VAR_2)
{
 struct nvmet_tcp_queue *VAR_3 = VAR_2->queue;
 struct msghdr VAR_4 = { .msg_flags = VAR_0 };
 struct kvec VAR_5 = {
  .iov_base = &VAR_2->exp_ddgst + VAR_2->offset,
  .iov_len = VAR_1 - VAR_2->offset
 };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->sock, &VAR_4, &VAR_5, 1, VAR_5.iov_len);
 if (FUNC_3(VAR_6 <= 0))
  return VAR_6;

 VAR_2->offset += VAR_6;

 if (VAR_3->nvme_sq.sqhd_disabled) {
  VAR_2->queue->snd_cmd = ((void*)0);
  FUNC_2(VAR_2);
 } else {
  FUNC_1(VAR_2);
 }
 return 1;
}
