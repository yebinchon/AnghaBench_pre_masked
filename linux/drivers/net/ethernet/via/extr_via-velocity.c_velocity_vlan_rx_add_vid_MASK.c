
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct velocity_info {int lock; int active_vlans; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 struct velocity_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct velocity_info*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
        __be16 VAR_1, u16 VAR_2)
{
 struct velocity_info *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(&VAR_3->lock);
 FUNC_1(VAR_2, VAR_3->active_vlans);
 FUNC_4(VAR_3);
 FUNC_3(&VAR_3->lock);
 return 0;
}
