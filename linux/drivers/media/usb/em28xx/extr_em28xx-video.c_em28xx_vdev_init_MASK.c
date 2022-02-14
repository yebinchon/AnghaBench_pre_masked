
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int name; scalar_t__ tvnorms; int * lock; int * v4l2_dev; } ;
struct em28xx {TYPE_2__* intf; scalar_t__ is_webcam; int lock; TYPE_1__* v4l2; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int v4l2_dev; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,char*,char*,char const*) ;
 int FUNC_2 (struct video_device*,struct em28xx*) ;

__attribute__((used)) static void FUNC_3(struct em28xx *VAR_0,
        struct video_device *VAR_1,
        const struct video_device *VAR_2,
        const char *VAR_3)
{
 *VAR_1 = *VAR_2;
 VAR_1->v4l2_dev = &VAR_0->v4l2->v4l2_dev;
 VAR_1->lock = &VAR_0->lock;
 if (VAR_0->is_webcam)
  VAR_1->tvnorms = 0;

 FUNC_1(VAR_1->name, sizeof(VAR_1->name), "%s %s",
   FUNC_0(&VAR_0->intf->dev), VAR_3);

 FUNC_2(VAR_1, VAR_0);
}
