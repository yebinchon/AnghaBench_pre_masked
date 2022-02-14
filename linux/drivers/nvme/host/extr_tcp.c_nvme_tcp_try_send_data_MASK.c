
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nvme_tcp_request {scalar_t__ offset; int state; int ddgst; struct nvme_tcp_queue* queue; } ;
struct nvme_tcp_queue {int snd_hash; scalar_t__ data_digest; int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,struct page*,size_t,size_t,int) ;
 int FUNC_2 (struct nvme_tcp_request*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct page*,size_t,int) ;
 int FUNC_5 (struct nvme_tcp_queue*) ;
 int FUNC_6 (struct nvme_tcp_request*,size_t) ;
 size_t FUNC_7 (struct nvme_tcp_request*) ;
 size_t FUNC_8 (struct nvme_tcp_request*) ;
 struct page* FUNC_9 (struct nvme_tcp_request*) ;
 int FUNC_10 (int ,struct page*,size_t,size_t,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct nvme_tcp_request *VAR_5)
{
 struct nvme_tcp_queue *VAR_6 = VAR_5->queue;

 while (1) {
  struct page *VAR_7 = FUNC_9(VAR_5);
  size_t VAR_8 = FUNC_8(VAR_5);
  size_t VAR_9 = FUNC_7(VAR_5);
  bool VAR_10 = FUNC_6(VAR_5, VAR_9);
  int VAR_11, VAR_12 = VAR_1;

  if (VAR_10 && !VAR_6->data_digest)
   VAR_12 |= VAR_2;
  else
   VAR_12 |= VAR_3;


  if (FUNC_11(FUNC_0(VAR_7))) {
   VAR_11 = FUNC_10(VAR_6->sock, VAR_7, VAR_8, VAR_9,
     VAR_12);
  } else {
   VAR_11 = FUNC_1(VAR_6->sock, VAR_7, VAR_8, VAR_9,
     VAR_12);
  }
  if (VAR_11 <= 0)
   return VAR_11;

  FUNC_2(VAR_5, VAR_11);
  if (VAR_6->data_digest)
   FUNC_4(VAR_6->snd_hash, VAR_7,
     VAR_8, VAR_11);


  if (VAR_10 && VAR_11 == VAR_9) {
   if (VAR_6->data_digest) {
    FUNC_3(VAR_6->snd_hash,
     &VAR_5->ddgst);
    VAR_5->state = VAR_4;
    VAR_5->offset = 0;
   } else {
    FUNC_5(VAR_6);
   }
   return 1;
  }
 }
 return -VAR_0;
}
