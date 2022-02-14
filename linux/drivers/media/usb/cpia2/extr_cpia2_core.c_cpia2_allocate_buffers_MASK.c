
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct framebuf {int dummy; } ;
struct camera_data {int num_frames; int frame_size; TYPE_1__* workbuff; TYPE_1__* curbuff; TYPE_1__* buffers; scalar_t__ frame_buffer; } ;
struct TYPE_6__ {int num; struct TYPE_6__* next; scalar_t__ max_length; scalar_t__ length; void* status; scalar_t__ data; } ;


 int FUNC_0 (char*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct camera_data *VAR_3)
{
 int VAR_4;

 if(!VAR_3->buffers) {
  u32 VAR_5 = VAR_3->num_frames*sizeof(struct framebuf);
  VAR_3->buffers = FUNC_3(VAR_5, VAR_2);
  if(!VAR_3->buffers) {
   FUNC_1("couldn't kmalloc frame buffer structures\n");
   return -VAR_0;
  }
 }

 if(!VAR_3->frame_buffer) {
  VAR_3->frame_buffer = FUNC_4(VAR_3->frame_size*VAR_3->num_frames);
  if (!VAR_3->frame_buffer) {
   FUNC_1("couldn't vmalloc frame buffer data area\n");
   FUNC_2(VAR_3->buffers);
   VAR_3->buffers = ((void*)0);
   return -VAR_0;
  }
 }

 for(VAR_4=0; VAR_4<VAR_3->num_frames-1; ++VAR_4) {
  VAR_3->buffers[VAR_4].next = &VAR_3->buffers[VAR_4+1];
  VAR_3->buffers[VAR_4].data = VAR_3->frame_buffer +VAR_4*VAR_3->frame_size;
  VAR_3->buffers[VAR_4].status = VAR_1;
  VAR_3->buffers[VAR_4].length = 0;
  VAR_3->buffers[VAR_4].max_length = 0;
  VAR_3->buffers[VAR_4].num = VAR_4;
 }
 VAR_3->buffers[VAR_4].next = VAR_3->buffers;
 VAR_3->buffers[VAR_4].data = VAR_3->frame_buffer +VAR_4*VAR_3->frame_size;
 VAR_3->buffers[VAR_4].status = VAR_1;
 VAR_3->buffers[VAR_4].length = 0;
 VAR_3->buffers[VAR_4].max_length = 0;
 VAR_3->buffers[VAR_4].num = VAR_4;
 VAR_3->curbuff = VAR_3->buffers;
 VAR_3->workbuff = VAR_3->curbuff->next;
 FUNC_0("buffers=%p, curbuff=%p, workbuff=%p\n", VAR_3->buffers, VAR_3->curbuff,
     VAR_3->workbuff);
 return 0;
}
