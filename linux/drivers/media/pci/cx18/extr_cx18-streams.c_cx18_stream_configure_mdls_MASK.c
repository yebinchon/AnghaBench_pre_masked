
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx18_stream {int type; int mdl_size; int bufs_per_mdl; int buf_size; TYPE_2__* cx; int pixelformat; } ;
struct TYPE_3__ {int height; } ;
struct TYPE_4__ {int is_60hz; TYPE_1__ cxhdl; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx18_stream*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct cx18_stream*) ;

__attribute__((used)) static void FUNC_3(struct cx18_stream *VAR_4)
{
 FUNC_2(VAR_4);

 switch (VAR_4->type) {
 case 128:





  if (VAR_4->pixelformat == VAR_0)
   VAR_4->mdl_size = 720 * VAR_4->cx->cxhdl.height * 3 / 2;
  else
   VAR_4->mdl_size = 720 * VAR_4->cx->cxhdl.height * 2;
  VAR_4->bufs_per_mdl = VAR_4->mdl_size / VAR_4->buf_size;
  if (VAR_4->mdl_size % VAR_4->buf_size)
   VAR_4->bufs_per_mdl++;
  break;
 case 129:
  VAR_4->bufs_per_mdl = 1;
  if (FUNC_1(VAR_4->cx)) {
   VAR_4->mdl_size = (VAR_4->cx->is_60hz ? 12 : 18)
             * 2 * VAR_1;
  } else {





   VAR_4->mdl_size = VAR_4->cx->is_60hz
       ? (21 - 4 + 1) * 2 * VAR_3
       : (23 - 2 + 1) * 2 * VAR_2;
  }
  break;
 default:
  VAR_4->bufs_per_mdl = 1;
  VAR_4->mdl_size = VAR_4->buf_size * VAR_4->bufs_per_mdl;
  break;
 }

 FUNC_0(VAR_4);
}
