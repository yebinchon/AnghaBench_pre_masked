
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ priv; } ;
struct dp83867_private {scalar_t__ port_mirroring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct phy_device*,int ,int ,int ) ;
 int FUNC_1 (struct phy_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_4)
{
 struct dp83867_private *VAR_5 =
  (struct dp83867_private *)VAR_4->priv;

 if (VAR_5->port_mirroring == VAR_3)
  FUNC_1(VAR_4, VAR_2, VAR_0,
     VAR_1);
 else
  FUNC_0(VAR_4, VAR_2, VAR_0,
       VAR_1);
 return 0;
}
