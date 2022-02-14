
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct TYPE_6__ {scalar_t__ sqhd_disabled; } ;
struct nvmet_tcp_queue {TYPE_1__ nvme_sq; int * snd_cmd; scalar_t__ data_digest; int sock; } ;
struct TYPE_7__ {int sg; } ;
struct nvmet_tcp_cmd {int offset; int wbytes_done; TYPE_2__ req; int iov; struct nvmet_tcp_queue* queue; int state; TYPE_3__* cur_sg; } ;
struct TYPE_8__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct page*,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmet_tcp_cmd*) ;
 int FUNC_3 (struct nvmet_tcp_cmd*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 struct page* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nvmet_tcp_cmd *VAR_3)
{
 struct nvmet_tcp_queue *VAR_4 = VAR_3->queue;
 int VAR_5;

 while (VAR_3->cur_sg) {
  struct page *VAR_6 = FUNC_5(VAR_3->cur_sg);
  u32 VAR_7 = VAR_3->cur_sg->length - VAR_3->offset;

  VAR_5 = FUNC_0(VAR_3->queue->sock, VAR_6, VAR_3->offset,
     VAR_7, VAR_0 | VAR_1);
  if (VAR_5 <= 0)
   return VAR_5;

  VAR_3->offset += VAR_5;
  VAR_3->wbytes_done += VAR_5;


  if (VAR_3->offset == VAR_3->cur_sg->length) {
   VAR_3->cur_sg = FUNC_4(VAR_3->cur_sg);
   VAR_3->offset = 0;
  }
 }

 if (VAR_4->data_digest) {
  VAR_3->state = VAR_2;
  VAR_3->offset = 0;
 } else {
  if (VAR_4->nvme_sq.sqhd_disabled) {
   VAR_3->queue->snd_cmd = ((void*)0);
   FUNC_3(VAR_3);
  } else {
   FUNC_2(VAR_3);
  }
 }

 if (VAR_4->nvme_sq.sqhd_disabled) {
  FUNC_1(VAR_3->iov);
  FUNC_6(VAR_3->req.sg);
 }

 return 1;

}
