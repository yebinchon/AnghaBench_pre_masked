
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int name; int * lock; int release; int * v4l2_dev; } ;
struct tm6000_core {char* name; int lock; int v4l2_dev; } ;


 int FUNC_0 (int ,int,char*,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (struct video_device*,struct tm6000_core*) ;

__attribute__((used)) static void FUNC_2(struct tm6000_core *VAR_1,
  struct video_device *VAR_2,
  const struct video_device
  *VAR_3, const char *VAR_4)
{
 *VAR_2 = *VAR_3;
 VAR_2->v4l2_dev = &VAR_1->v4l2_dev;
 VAR_2->release = VAR_0;
 VAR_2->lock = &VAR_1->lock;

 FUNC_0(VAR_2->name, sizeof(VAR_2->name), "%s %s", VAR_1->name, VAR_4);

 FUNC_1(VAR_2, VAR_1);
}
