
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct dp83640_private* priv; } ;
struct dp83640_private {struct dp83640_clock* clock; } ;
struct dp83640_clock {int extreg_lock; int page; int phylist; scalar_t__ chosen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int ,int) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (int ,struct phy_device*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dp83640_clock*) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_3)
{
 struct dp83640_private *VAR_4 = VAR_3->priv;
 struct dp83640_clock *VAR_5 = VAR_4->clock;

 if (VAR_5->chosen && !FUNC_3(&VAR_5->phylist))
  FUNC_6(VAR_5);
 else {
  FUNC_4(&VAR_5->extreg_lock);
  FUNC_0(VAR_3, VAR_5->page, 1);
  FUNC_5(&VAR_5->extreg_lock);
 }

 FUNC_1(VAR_3, 1);

 FUNC_4(&VAR_5->extreg_lock);
 FUNC_2(0, VAR_3, VAR_0, VAR_1, VAR_2);
 FUNC_5(&VAR_5->extreg_lock);

 return 0;
}
