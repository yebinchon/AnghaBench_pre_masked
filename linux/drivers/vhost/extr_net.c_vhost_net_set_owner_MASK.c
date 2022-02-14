
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; } ;
struct vhost_net {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct vhost_net*) ;
 int FUNC_5 (struct vhost_net*) ;
 int FUNC_6 (struct vhost_net*) ;

__attribute__((used)) static long FUNC_7(struct vhost_net *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->dev.mutex);
 if (FUNC_2(&VAR_1->dev)) {
  VAR_2 = -VAR_0;
  goto out;
 }
 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_3(&VAR_1->dev);
 if (VAR_2)
  FUNC_4(VAR_1);
 FUNC_5(VAR_1);
out:
 FUNC_1(&VAR_1->dev.mutex);
 return VAR_2;
}
