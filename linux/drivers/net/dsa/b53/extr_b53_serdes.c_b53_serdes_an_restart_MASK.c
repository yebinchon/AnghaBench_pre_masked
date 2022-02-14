
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct b53_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct b53_device*,int) ;
 int FUNC_2 (struct b53_device*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct b53_device*,scalar_t__,int ,int ,int ) ;

void FUNC_4(struct b53_device *VAR_4, int VAR_5)
{
 u8 VAR_6 = FUNC_1(VAR_4, VAR_5);
 u16 VAR_7;

 if (VAR_6 == VAR_0)
  return;

 VAR_7 = FUNC_2(VAR_4, VAR_6, FUNC_0(VAR_2),
         VAR_3);
 VAR_7 |= VAR_1;
 FUNC_3(VAR_4, VAR_6, FUNC_0(VAR_2),
    VAR_3, VAR_7);
}
