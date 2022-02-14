
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int devcmd_lock; int vdev; } ;




 int FUNC_0 () ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct enic *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->devcmd_lock);
 switch (FUNC_4(VAR_0->vdev)) {
 case 129:
  VAR_1 = FUNC_5(VAR_0->vdev,
   FUNC_0());
  break;
 case 128:
  VAR_1 = FUNC_5(VAR_0->vdev,
   FUNC_1(VAR_0));
  break;
 default:
  VAR_1 = FUNC_5(VAR_0->vdev, -1 );
  break;
 }
 FUNC_3(&VAR_0->devcmd_lock);

 return VAR_1;
}
