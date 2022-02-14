
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interrupts; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_2)
{
 int VAR_3 = 0;





 if (VAR_2->interrupts == VAR_1)
  VAR_3 = FUNC_0(VAR_2, VAR_0);

 return (VAR_3 < 0) ? VAR_3 : 0;
}
