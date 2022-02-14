
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct videobuf_queue {int dummy; } ;
struct TYPE_2__ {unsigned int size; scalar_t__ baddr; unsigned int bsize; unsigned int width; unsigned int height; int field; scalar_t__ state; } ;
struct cx18_videobuf_buffer {scalar_t__ tvnorm; TYPE_1__ vb; scalar_t__ bytes_used; } ;
struct cx18_stream {scalar_t__ pixelformat; unsigned int vb_bytes_per_frame; struct cx18* cx; } ;
struct cx18 {scalar_t__ std; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct videobuf_queue*,struct cx18_stream*,struct cx18_videobuf_buffer*) ;
 int FUNC_1 (struct videobuf_queue*,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(struct videobuf_queue *VAR_5,
 struct cx18_stream *VAR_6,
 struct cx18_videobuf_buffer *VAR_7,
 u32 VAR_8,
 unsigned int VAR_9, unsigned int VAR_10,
 enum v4l2_field VAR_11)
{
 struct cx18 *VAR_12 = VAR_6->cx;
 int VAR_13 = 0;


 VAR_7->bytes_used = 0;

 if ((VAR_9 < 48) || (VAR_10 < 32))
  return -VAR_0;

 VAR_7->vb.size = (VAR_9 * VAR_10 * 2);
 if ((VAR_7->vb.baddr != 0) && (VAR_7->vb.bsize < VAR_7->vb.size))
  return -VAR_0;


 if (VAR_7->vb.width != VAR_9 || VAR_7->vb.height != VAR_10 ||
     VAR_7->vb.field != VAR_11 || VAR_6->pixelformat != VAR_8 ||
     VAR_7->tvnorm != VAR_12->std) {

  VAR_7->vb.width = VAR_9;
  VAR_7->vb.height = VAR_10;
  VAR_7->vb.field = VAR_11;
  VAR_7->tvnorm = VAR_12->std;
  VAR_6->pixelformat = VAR_8;



  if (VAR_6->pixelformat == VAR_2)
   VAR_6->vb_bytes_per_frame = VAR_10 * 720 * 3 / 2;
  else
   VAR_6->vb_bytes_per_frame = VAR_10 * 720 * 2;
  FUNC_0(VAR_5, VAR_6, VAR_7);
 }

 if ((VAR_7->vb.baddr != 0) && (VAR_7->vb.bsize < VAR_7->vb.size))
  return -VAR_0;

 if (VAR_7->vb.field == 0)
  VAR_7->vb.field = VAR_1;

 if (VAR_3 == VAR_7->vb.state) {
  VAR_7->vb.width = VAR_9;
  VAR_7->vb.height = VAR_10;
  VAR_7->vb.field = VAR_11;
  VAR_7->tvnorm = VAR_12->std;
  VAR_6->pixelformat = VAR_8;



  if (VAR_6->pixelformat == VAR_2)
   VAR_6->vb_bytes_per_frame = VAR_10 * 720 * 3 / 2;
  else
   VAR_6->vb_bytes_per_frame = VAR_10 * 720 * 2;
  VAR_13 = FUNC_1(VAR_5, &VAR_7->vb, ((void*)0));
  if (VAR_13 != 0)
   goto fail;
 }
 VAR_7->vb.state = VAR_4;
 return 0;

fail:
 FUNC_0(VAR_5, VAR_6, VAR_7);
 return VAR_13;

}
