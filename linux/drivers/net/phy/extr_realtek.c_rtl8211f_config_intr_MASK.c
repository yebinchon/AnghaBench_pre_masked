
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct phy_device {scalar_t__ interrupts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_3)
{
 u16 VAR_4;

 if (VAR_3->interrupts == VAR_0)
  VAR_4 = VAR_1;
 else
  VAR_4 = 0;

 return FUNC_0(VAR_3, 0xa42, VAR_2, VAR_4);
}
