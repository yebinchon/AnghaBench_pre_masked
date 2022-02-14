
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_streaming {int queue; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {struct uvc_fh* private_data; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static unsigned long FUNC_2(struct file *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3, unsigned long VAR_4,
  unsigned long VAR_5)
{
 struct uvc_fh *VAR_6 = VAR_1->private_data;
 struct uvc_streaming *VAR_7 = VAR_6->stream;

 FUNC_1(VAR_0, "uvc_v4l2_get_unmapped_area\n");

 return FUNC_0(&VAR_7->queue, VAR_4);
}
