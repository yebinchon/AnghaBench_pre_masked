
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int v4l2_dev; } ;
struct cobalt_stream {int vdev; scalar_t__ is_output; } ;
struct cobalt {struct cobalt_stream* streams; } ;



 int FUNC_0 (unsigned int) ;

 int FUNC_1 (int,char*,unsigned int,...) ;
 unsigned int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct cobalt*,int ,int) ;
 struct cobalt* FUNC_4 (int ) ;
 int FUNC_5 (int *,void*) ;

__attribute__((used)) static void FUNC_6(struct v4l2_subdev *VAR_0,
     unsigned int VAR_1, void *VAR_2)
{
 struct cobalt *VAR_3 = FUNC_4(VAR_0->v4l2_dev);
 unsigned VAR_4 = FUNC_2(VAR_0);
 struct cobalt_stream *VAR_5 = &VAR_3->streams[VAR_4];
 bool VAR_6 = VAR_2 ? *((int *)VAR_2) : 0;

 if (VAR_5->is_output)
  return;

 switch (VAR_1) {
 case 129:
  FUNC_3(VAR_3,
   FUNC_0(VAR_4), VAR_6);
  FUNC_1(1, "Set hotplug for adv %d to %d\n", VAR_4, VAR_6);
  break;
 case 128:
  FUNC_1(1, "Format changed for adv %d\n", VAR_4);
  FUNC_5(&VAR_5->vdev, VAR_2);
  break;
 default:
  break;
 }
}
