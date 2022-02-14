
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct enic {int devcmd_lock; int vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *,int *) ;

int FUNC_3(struct enic *VAR_1, u16 VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->devcmd_lock);
 VAR_3 = FUNC_2(VAR_1->vdev, VAR_0, &VAR_2, ((void*)0));
 FUNC_1(&VAR_1->devcmd_lock);

 return VAR_3;
}
