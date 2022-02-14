
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ltc294x_info {scalar_t__ id; int r_sense; int client; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(const struct ltc294x_info *VAR_2, int *VAR_3)
{
 int VAR_4;
 u8 VAR_5[2];
 s32 VAR_6;

 VAR_4 = FUNC_0(VAR_2->client,
  VAR_0, &VAR_5[0], 2);
 VAR_6 = (VAR_5[0] << 8) | VAR_5[1];
 VAR_6 -= 0x7FFF;
 if (VAR_2->id == VAR_1)
  VAR_6 *= 64000;
 else
  VAR_6 *= 60000;



 *VAR_3 = 1000 * (VAR_6 / (VAR_2->r_sense * 0x7FFF));
 return VAR_4;
}
