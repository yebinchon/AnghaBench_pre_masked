
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct hva_stream {int bytesused; int size; scalar_t__ vaddr; } ;
struct hva_h264_task {int dummy; } ;
struct hva_h264_ctx {int rec_frame; int ref_frame; TYPE_1__* task; } ;
struct hva_frame {int dummy; } ;
struct hva_ctx {int stream_num; scalar_t__ priv; } ;
struct TYPE_2__ {scalar_t__ vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct hva_ctx*,scalar_t__,int *,int ,int *) ;
 scalar_t__ FUNC_1 (struct hva_h264_task*) ;
 scalar_t__ FUNC_2 (struct hva_h264_task*) ;
 int FUNC_3 (struct hva_ctx*,struct hva_h264_task*,struct hva_frame*,struct hva_stream*) ;
 int FUNC_4 (struct hva_ctx*,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hva_ctx *VAR_1, struct hva_frame *VAR_2,
      struct hva_stream *VAR_3)
{
 struct hva_h264_ctx *VAR_4 = (struct hva_h264_ctx *)VAR_1->priv;
 struct hva_h264_task *VAR_5 = (struct hva_h264_task *)VAR_4->task->vaddr;
 u32 VAR_6 = 0;
 int VAR_7 = 0;

 VAR_7 = FUNC_3(VAR_1, VAR_5, VAR_2, VAR_3);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_4(VAR_1, VAR_0, VAR_4->task);
 if (VAR_7)
  goto err;

 VAR_1->stream_num++;
 VAR_3->bytesused += FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_5);

 if (VAR_6)
  FUNC_0(VAR_1, VAR_6,
           (u8 *)VAR_3->vaddr,
           VAR_3->size,
           &VAR_3->bytesused);


 FUNC_5(VAR_4->ref_frame, VAR_4->rec_frame);

 return 0;
err:
 VAR_3->bytesused = 0;
 return VAR_7;
}
