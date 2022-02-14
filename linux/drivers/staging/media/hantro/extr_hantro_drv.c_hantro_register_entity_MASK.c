
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int name; int minor; } ;
struct media_pad {int dummy; } ;
struct TYPE_3__ {int minor; int major; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct media_entity {char* name; int function; TYPE_2__ info; int obj_type; } ;
struct media_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ,int ,char*,int ,char const*) ;
 int FUNC_1 (struct media_device*,struct media_entity*) ;
 int FUNC_2 (struct media_entity*,int,struct media_pad*) ;

__attribute__((used)) static int FUNC_3(struct media_device *VAR_5,
      struct media_entity *VAR_6,
      const char *VAR_7,
      struct media_pad *VAR_8, int VAR_9,
      int VAR_10, struct video_device *VAR_11)
{
 char *VAR_12;
 int VAR_13;

 VAR_6->obj_type = VAR_2;
 if (VAR_10 == VAR_3) {
  VAR_6->info.dev.major = VAR_4;
  VAR_6->info.dev.minor = VAR_11->minor;
 }

 VAR_12 = FUNC_0(VAR_5->dev, VAR_1, "%s-%s", VAR_11->name,
         VAR_7);
 if (!VAR_12)
  return -VAR_0;

 VAR_6->name = VAR_12;
 VAR_6->function = VAR_10;

 VAR_13 = FUNC_2(VAR_6, VAR_9, VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_5, VAR_6);
 if (VAR_13)
  return VAR_13;

 return 0;
}
