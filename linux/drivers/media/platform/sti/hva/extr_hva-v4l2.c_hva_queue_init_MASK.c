
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int buf_struct_size; int dev; int min_buffers_needed; int type; } ;
struct hva_stream {int dummy; } ;
struct hva_frame {int dummy; } ;
struct hva_ctx {TYPE_1__* hva_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hva_ctx*,struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(void *VAR_4, struct vb2_queue *VAR_5,
     struct vb2_queue *VAR_6)
{
 struct hva_ctx *VAR_7 = VAR_4;
 int VAR_8;

 VAR_5->type = VAR_3;
 VAR_5->buf_struct_size = sizeof(struct hva_frame);
 VAR_5->min_buffers_needed = VAR_0;
 VAR_5->dev = VAR_7->hva_dev->dev;

 VAR_8 = FUNC_0(VAR_7, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_6->type = VAR_2;
 VAR_6->buf_struct_size = sizeof(struct hva_stream);
 VAR_6->min_buffers_needed = VAR_1;
 VAR_6->dev = VAR_7->hva_dev->dev;

 return FUNC_0(VAR_7, VAR_6);
}
