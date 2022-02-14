
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int page_lock; } ;


 int FUNC_0 (struct net_device*,int ) ;
 struct ei_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct ei_device *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;





 FUNC_3(&VAR_1->page_lock, VAR_2);
 FUNC_0(VAR_0, 0);
 FUNC_4(&VAR_1->page_lock, VAR_2);
 FUNC_2(VAR_0);
 return 0;
}
