
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uvc_video_queue {int buf_used; } ;
struct uvc_video {struct uvc_video_queue queue; } ;
struct uvc_buffer {int bytesused; void* mem; } ;


 int FUNC_0 (int *,void*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int
FUNC_2(struct uvc_video *VAR_0, struct uvc_buffer *VAR_1,
  u8 *VAR_2, int VAR_3)
{
 struct uvc_video_queue *VAR_4 = &VAR_0->queue;
 unsigned int VAR_5;
 void *VAR_6;


 VAR_6 = VAR_1->mem + VAR_4->buf_used;
 VAR_5 = FUNC_1((unsigned int)VAR_3, VAR_1->bytesused - VAR_4->buf_used);

 FUNC_0(VAR_2, VAR_6, VAR_5);
 VAR_4->buf_used += VAR_5;

 return VAR_5;
}
