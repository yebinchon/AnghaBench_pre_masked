
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int (* priv ) (struct phy_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6, VAR_4);

 if (VAR_7 & VAR_5) {




  VAR_7 = FUNC_0(VAR_6, VAR_3);
  VAR_7 |= (VAR_2 | VAR_1);
  VAR_7 &= ~VAR_0;
  FUNC_1(VAR_6, VAR_3, VAR_7);

  VAR_6->priv = FUNC_2;
 } else {
  VAR_6->priv = ((void*)0);
 }
 return 0;
}
