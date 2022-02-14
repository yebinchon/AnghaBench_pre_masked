
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ltc294x_info {int id; int client; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(const struct ltc294x_info *VAR_1, int *VAR_2)
{
 int VAR_3;
 u8 VAR_4[2];
 u32 VAR_5;

 VAR_3 = FUNC_0(VAR_1->client,
  VAR_0, &VAR_4[0], 2);
 VAR_5 = (VAR_4[0] << 8) | VAR_4[1];
 switch (VAR_1->id) {
 case 129:
  VAR_5 *= 23600 * 2;
  VAR_5 /= 0xFFFF;
  VAR_5 *= 1000 / 2;
  break;
 case 128:
  VAR_5 *= 70800 / 5*4;
  VAR_5 /= 0xFFFF;
  VAR_5 *= 1000 * 5/4;
  break;
 default:
  VAR_5 *= 6000 * 10;
  VAR_5 /= 0xFFFF;
  VAR_5 *= 1000 / 10;
  break;
 }
 *VAR_2 = VAR_5;
 return VAR_3;
}
