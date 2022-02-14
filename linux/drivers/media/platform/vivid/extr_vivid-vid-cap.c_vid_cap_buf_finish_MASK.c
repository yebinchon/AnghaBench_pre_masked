
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int* std_cap; size_t input; } ;
struct v4l2_timecode {unsigned int frames; unsigned int seconds; unsigned int minutes; unsigned int hours; scalar_t__ flags; int type; } ;
struct vb2_v4l2_buffer {unsigned int sequence; int flags; struct v4l2_timecode timecode; } ;
struct vb2_buffer {int vb2_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct vivid_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct vivid_dev*) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_4)
{
 struct vb2_v4l2_buffer *VAR_5 = FUNC_0(VAR_4);
 struct vivid_dev *VAR_6 = FUNC_1(VAR_4->vb2_queue);
 struct v4l2_timecode *VAR_7 = &VAR_5->timecode;
 unsigned VAR_8 = 25;
 unsigned VAR_9 = VAR_5->sequence;

 if (!FUNC_2(VAR_6))
  return;





 VAR_5->flags |= VAR_0;
 if (VAR_6->std_cap[VAR_6->input] & VAR_1)
  VAR_8 = 30;
 VAR_7->type = (VAR_8 == 30) ? VAR_3 : VAR_2;
 VAR_7->flags = 0;
 VAR_7->frames = VAR_9 % VAR_8;
 VAR_7->seconds = (VAR_9 / VAR_8) % 60;
 VAR_7->minutes = (VAR_9 / (60 * VAR_8)) % 60;
 VAR_7->hours = (VAR_9 / (60 * 60 * VAR_8)) % 24;
}
