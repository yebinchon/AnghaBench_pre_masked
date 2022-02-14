
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_device {int dev; int ept; } ;
struct TYPE_2__ {int notifier_call; } ;
struct glink_ssr {TYPE_1__ nb; int ept; int * dev; int completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct glink_ssr*) ;
 struct glink_ssr* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct rpmsg_device *VAR_3)
{
 struct glink_ssr *VAR_4;

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_4->completion);

 VAR_4->dev = &VAR_3->dev;
 VAR_4->ept = VAR_3->ept;
 VAR_4->nb.notifier_call = VAR_2;

 FUNC_0(&VAR_3->dev, VAR_4);

 return FUNC_3(&VAR_4->nb);
}
