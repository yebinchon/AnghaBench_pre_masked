
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct venus_inst {TYPE_1__* tss; } ;
struct vb2_buffer {int timestamp; } ;
struct vb2_v4l2_buffer {int timecode; int flags; struct vb2_buffer vb2_buf; } ;
struct TYPE_2__ {int used; scalar_t__ ts_us; int ts_ns; int tc; int flags; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct venus_inst *VAR_0, u64 VAR_1,
      struct vb2_v4l2_buffer *VAR_2)
{
 struct vb2_buffer *VAR_3 = &VAR_2->vb2_buf;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->tss); ++VAR_4) {
  if (!VAR_0->tss[VAR_4].used)
   continue;

  if (VAR_0->tss[VAR_4].ts_us != VAR_1)
   continue;

  VAR_0->tss[VAR_4].used = 0;
  VAR_2->flags |= VAR_0->tss[VAR_4].flags;
  VAR_2->timecode = VAR_0->tss[VAR_4].tc;
  VAR_3->timestamp = VAR_0->tss[VAR_4].ts_ns;
  break;
 }
}
