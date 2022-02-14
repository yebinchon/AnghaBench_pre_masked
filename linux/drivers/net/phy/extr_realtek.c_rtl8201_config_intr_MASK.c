
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ interrupts; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct phy_device*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_2)
{
 u16 VAR_3;

 if (VAR_2->interrupts == VAR_0)
  VAR_3 = FUNC_0(13) | FUNC_0(12) | FUNC_0(11);
 else
  VAR_3 = 0;

 return FUNC_1(VAR_2, 0x7, VAR_1, VAR_3);
}
