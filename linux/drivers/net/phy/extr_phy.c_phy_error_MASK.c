
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int lock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static void FUNC_4(struct phy_device *VAR_1)
{
 FUNC_0(1);

 FUNC_1(&VAR_1->lock);
 VAR_1->state = VAR_0;
 FUNC_2(&VAR_1->lock);

 FUNC_3(VAR_1);
}
