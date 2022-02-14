
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ns83820 {int misc_lock; scalar_t__ base; int IMR_cache; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_4)
{
 struct net_device *VAR_5 = (void *)VAR_4;
 struct ns83820 *VAR_6 = FUNC_0(VAR_5);
 FUNC_2(VAR_5);
 FUNC_5(VAR_3, VAR_6->base + VAR_0);

 FUNC_3(&VAR_6->misc_lock);
 VAR_6->IMR_cache |= VAR_2;
 FUNC_5(VAR_6->IMR_cache, VAR_6->base + VAR_1);
 FUNC_4(&VAR_6->misc_lock);

 FUNC_2(VAR_5);
 FUNC_1(VAR_5);
}
