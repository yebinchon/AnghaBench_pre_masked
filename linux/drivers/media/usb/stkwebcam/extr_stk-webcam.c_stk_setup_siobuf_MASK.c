
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {int length; int index; TYPE_1__ m; int memory; int field; int flags; int type; } ;
struct stk_sio_buffer {TYPE_2__ v4lbuf; struct stk_camera* dev; scalar_t__ mapcount; int * buffer; int list; } ;
struct stk_camera {int frame_size; struct stk_sio_buffer* sio_bufs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct stk_camera *VAR_5, int VAR_6)
{
 struct stk_sio_buffer *VAR_7 = VAR_5->sio_bufs + VAR_6;
 FUNC_0(&VAR_7->list);
 VAR_7->v4lbuf.length = FUNC_1(VAR_5->frame_size);
 VAR_7->buffer = FUNC_2(VAR_7->v4lbuf.length);
 if (VAR_7->buffer == ((void*)0))
  return -VAR_0;
 VAR_7->mapcount = 0;
 VAR_7->dev = VAR_5;
 VAR_7->v4lbuf.index = VAR_6;
 VAR_7->v4lbuf.type = VAR_2;
 VAR_7->v4lbuf.flags = VAR_1;
 VAR_7->v4lbuf.field = VAR_3;
 VAR_7->v4lbuf.memory = VAR_4;
 VAR_7->v4lbuf.m.offset = 2*VAR_6*VAR_7->v4lbuf.length;
 return 0;
}
