
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int name; int release; int * v4l2_dev; } ;
struct TYPE_3__ {size_t type; int v4l2_dev; } ;
struct bttv {int id; int revision; scalar_t__ tuner_type; TYPE_1__ c; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int ,int,char*,int,char*,char const*,int ) ;
 int FUNC_1 (struct video_device*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct video_device*,struct bttv*) ;

__attribute__((used)) static void FUNC_3(struct bttv *VAR_7,
        struct video_device *VAR_8,
        const struct video_device *VAR_9,
        const char *VAR_10)
{
 *VAR_8 = *VAR_9;
 VAR_8->v4l2_dev = &VAR_7->c.v4l2_dev;
 VAR_8->release = VAR_6;
 FUNC_2(VAR_8, VAR_7);
 FUNC_0(VAR_8->name, sizeof(VAR_8->name), "BT%d%s %s (%s)",
   VAR_7->id, (VAR_7->id==848 && VAR_7->revision==0x12) ? "A" : "",
   VAR_10, VAR_5[VAR_7->c.type].name);
 if (VAR_7->tuner_type == VAR_0) {
  FUNC_1(VAR_8, VAR_1);
  FUNC_1(VAR_8, VAR_3);
  FUNC_1(VAR_8, VAR_2);
  FUNC_1(VAR_8, VAR_4);
 }
}
