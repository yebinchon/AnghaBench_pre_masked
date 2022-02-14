
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int name; int * lock; int release; int * v4l2_dev; } ;
struct cx231xx {char* name; scalar_t__ tuner_type; int lock; int v4l2_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,char*,char*,char const*) ;
 int FUNC_1 (struct video_device*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct video_device*,struct cx231xx*) ;

__attribute__((used)) static void FUNC_3(struct cx231xx *VAR_6,
  struct video_device *VAR_7,
  const struct video_device *VAR_8,
  const char *VAR_9)
{
 *VAR_7 = *VAR_8;
 VAR_7->v4l2_dev = &VAR_6->v4l2_dev;
 VAR_7->release = VAR_5;
 VAR_7->lock = &VAR_6->lock;

 FUNC_0(VAR_7->name, sizeof(VAR_7->name), "%s %s", VAR_6->name, VAR_9);

 FUNC_2(VAR_7, VAR_6);
 if (VAR_6->tuner_type == VAR_0) {
  FUNC_1(VAR_7, VAR_1);
  FUNC_1(VAR_7, VAR_3);
  FUNC_1(VAR_7, VAR_2);
  FUNC_1(VAR_7, VAR_4);
 }
}
