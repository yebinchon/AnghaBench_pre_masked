
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int entity; } ;
struct camss_video {TYPE_1__* camss; int lock; int q_lock; } ;
struct TYPE_2__ {int ref_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct camss_video* FUNC_4 (struct video_device*) ;

__attribute__((used)) static void FUNC_5(struct video_device *VAR_0)
{
 struct camss_video *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(&VAR_0->entity);

 FUNC_3(&VAR_1->q_lock);
 FUNC_3(&VAR_1->lock);

 if (FUNC_0(&VAR_1->camss->ref_count))
  FUNC_1(VAR_1->camss);
}
