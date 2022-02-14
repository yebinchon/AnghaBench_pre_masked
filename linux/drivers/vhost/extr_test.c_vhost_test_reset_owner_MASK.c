
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vhost_umem {int dummy; } ;
struct TYPE_4__ {int mutex; } ;
struct vhost_test {TYPE_1__ dev; } ;


 long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct vhost_umem*) ;
 struct vhost_umem* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct vhost_test*) ;
 int FUNC_7 (struct vhost_test*,void**) ;

__attribute__((used)) static long FUNC_8(struct vhost_test *VAR_1)
{
 void *VAR_2 = ((void*)0);
 long VAR_3;
 struct vhost_umem *VAR_4;

 FUNC_0(&VAR_1->dev.mutex);
 VAR_3 = FUNC_2(&VAR_1->dev);
 if (VAR_3)
  goto done;
 VAR_4 = FUNC_4();
 if (!VAR_4) {
  VAR_3 = -VAR_0;
  goto done;
 }
 FUNC_7(VAR_1, &VAR_2);
 FUNC_6(VAR_1);
 FUNC_5(&VAR_1->dev);
 FUNC_3(&VAR_1->dev, VAR_4);
done:
 FUNC_1(&VAR_1->dev.mutex);
 return VAR_3;
}
