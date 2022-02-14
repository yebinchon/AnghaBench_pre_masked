
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ state; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct phy_device *VAR_3)
{
 FUNC_2(&VAR_3->lock);

 if (VAR_3->state != VAR_1 && VAR_3->state != VAR_0) {
  FUNC_0(1, "called from state %s\n",
       FUNC_5(VAR_3->state));
  goto out;
 }


 FUNC_1(VAR_3);

 VAR_3->state = VAR_2;

 FUNC_4(VAR_3);
out:
 FUNC_3(&VAR_3->lock);
}
