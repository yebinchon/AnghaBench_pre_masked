
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int serdes_lane; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b53_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b53_device *VAR_2, u8 VAR_3)
{
 if (VAR_2->serdes_lane == VAR_3)
  return;

 FUNC_0(VAR_3 > 1);

 FUNC_1(VAR_2, VAR_0,
        VAR_1, VAR_3);
 VAR_2->serdes_lane = VAR_3;
}
