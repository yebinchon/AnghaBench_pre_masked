
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct b53_device {int dummy; } ;
typedef int phy_interface_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct b53_device*,int) ;
 int FUNC_2 (struct b53_device*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct b53_device*,scalar_t__,int ,int ,int ) ;

void FUNC_4(struct b53_device *VAR_4, int VAR_5, unsigned int VAR_6,
    phy_interface_t VAR_7, bool VAR_8)
{
 u8 VAR_9 = FUNC_1(VAR_4, VAR_5);
 u16 VAR_10;

 if (VAR_9 == VAR_0)
  return;

 VAR_10 = FUNC_2(VAR_4, VAR_9, FUNC_0(VAR_2),
         VAR_3);
 if (VAR_8)
  VAR_10 &= ~VAR_1;
 else
  VAR_10 |= VAR_1;
 FUNC_3(VAR_4, VAR_9, FUNC_0(VAR_2),
    VAR_3, VAR_10);
}
