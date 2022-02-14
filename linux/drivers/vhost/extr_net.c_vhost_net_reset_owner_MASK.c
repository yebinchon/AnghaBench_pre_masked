
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vhost_umem {int dummy; } ;
struct TYPE_4__ {int mutex; } ;
struct vhost_net {TYPE_1__ dev; } ;
struct socket {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct socket*) ;
 long FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct vhost_umem*) ;
 struct vhost_umem* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct vhost_net*) ;
 int FUNC_8 (struct vhost_net*,struct socket**,struct socket**) ;
 int FUNC_9 (struct vhost_net*) ;

__attribute__((used)) static long FUNC_10(struct vhost_net *VAR_1)
{
 struct socket *VAR_2 = ((void*)0);
 struct socket *VAR_3 = ((void*)0);
 long VAR_4;
 struct vhost_umem *VAR_5;

 FUNC_0(&VAR_1->dev.mutex);
 VAR_4 = FUNC_3(&VAR_1->dev);
 if (VAR_4)
  goto done;
 VAR_5 = FUNC_5();
 if (!VAR_5) {
  VAR_4 = -VAR_0;
  goto done;
 }
 FUNC_8(VAR_1, &VAR_2, &VAR_3);
 FUNC_7(VAR_1);
 FUNC_6(&VAR_1->dev);
 FUNC_4(&VAR_1->dev, VAR_5);
 FUNC_9(VAR_1);
done:
 FUNC_1(&VAR_1->dev.mutex);
 if (VAR_2)
  FUNC_2(VAR_2);
 if (VAR_3)
  FUNC_2(VAR_3);
 return VAR_4;
}
