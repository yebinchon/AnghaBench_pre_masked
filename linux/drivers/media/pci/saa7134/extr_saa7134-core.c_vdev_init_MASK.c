
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int name; int release; int * v4l2_dev; } ;
struct saa7134_dev {char* name; size_t board; int v4l2_dev; } ;
struct TYPE_2__ {char* name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int,char*,char*,char*,char*) ;
 struct video_device* FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct video_device*,struct saa7134_dev*) ;

__attribute__((used)) static struct video_device *FUNC_3(struct saa7134_dev *VAR_2,
          struct video_device *VAR_3,
          char *VAR_4)
{
 struct video_device *VAR_5;

 VAR_5 = FUNC_1();
 if (((void*)0) == VAR_5)
  return ((void*)0);
 *VAR_5 = *VAR_3;
 VAR_5->v4l2_dev = &VAR_2->v4l2_dev;
 VAR_5->release = VAR_1;
 FUNC_0(VAR_5->name, sizeof(VAR_5->name), "%s %s (%s)",
   VAR_2->name, VAR_4, VAR_0[VAR_2->board].name);
 FUNC_2(VAR_5, VAR_2);
 return VAR_5;
}
