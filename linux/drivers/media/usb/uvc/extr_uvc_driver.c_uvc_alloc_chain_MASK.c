
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_chain {int prio; struct uvc_device* dev; int ctrl_mutex; int entities; } ;
struct uvc_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct uvc_video_chain* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct uvc_video_chain *FUNC_4(struct uvc_device *VAR_1)
{
 struct uvc_video_chain *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_0(&VAR_2->entities);
 FUNC_2(&VAR_2->ctrl_mutex);
 VAR_2->dev = VAR_1;
 FUNC_3(&VAR_2->prio);

 return VAR_2;
}
