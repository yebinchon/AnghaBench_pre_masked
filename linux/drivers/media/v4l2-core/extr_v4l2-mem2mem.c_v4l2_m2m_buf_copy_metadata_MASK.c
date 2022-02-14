
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int copied_timestamp; int timestamp; } ;
struct vb2_v4l2_buffer {int flags; TYPE_1__ vb2_buf; int field; int timecode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(const struct vb2_v4l2_buffer *VAR_5,
    struct vb2_v4l2_buffer *VAR_6,
    bool VAR_7)
{
 u32 VAR_8 = VAR_3 | VAR_4;

 if (VAR_7)
  VAR_8 |= VAR_1 | VAR_2 |
   VAR_0;

 VAR_6->vb2_buf.timestamp = VAR_5->vb2_buf.timestamp;

 if (VAR_5->flags & VAR_3)
  VAR_6->timecode = VAR_5->timecode;
 VAR_6->field = VAR_5->field;
 VAR_6->flags &= ~VAR_8;
 VAR_6->flags |= VAR_5->flags & VAR_8;
 VAR_6->vb2_buf.copied_timestamp = 1;
}
