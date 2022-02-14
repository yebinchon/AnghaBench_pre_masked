
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct enic {int devcmd_lock; } ;
typedef int __be16 ;


 int FUNC_0 (struct enic*,int ) ;
 struct enic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct net_device *VAR_0, __be16 VAR_1, u16 VAR_2)
{
 struct enic *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_3->devcmd_lock);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 FUNC_3(&VAR_3->devcmd_lock);

 return VAR_4;
}
