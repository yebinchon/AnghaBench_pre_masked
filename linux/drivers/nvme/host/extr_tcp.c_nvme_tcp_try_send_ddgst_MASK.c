
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_request {int offset; int ddgst; struct nvme_tcp_queue* queue; } ;
struct nvme_tcp_queue {int sock; } ;
struct msghdr {int msg_flags; } ;
struct kvec {scalar_t__ iov_len; int * iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct msghdr*,struct kvec*,int,scalar_t__) ;
 int FUNC_1 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct nvme_tcp_request *VAR_4)
{
 struct nvme_tcp_queue *VAR_5 = VAR_4->queue;
 int VAR_6;
 struct msghdr VAR_7 = { .msg_flags = VAR_1 | VAR_2 };
 struct kvec VAR_8 = {
  .iov_base = &VAR_4->ddgst + VAR_4->offset,
  .iov_len = VAR_3 - VAR_4->offset
 };

 VAR_6 = FUNC_0(VAR_5->sock, &VAR_7, &VAR_8, 1, VAR_8.iov_len);
 if (FUNC_2(VAR_6 <= 0))
  return VAR_6;

 if (VAR_4->offset + VAR_6 == VAR_3) {
  FUNC_1(VAR_5);
  return 1;
 }

 VAR_4->offset += VAR_6;
 return -VAR_0;
}
