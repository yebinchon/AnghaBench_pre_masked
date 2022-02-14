
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ltc294x_info {scalar_t__ id; int client; } ;
typedef enum ltc294x_reg { ____Placeholder_ltc294x_reg } ltc294x_reg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int*,int) ;

__attribute__((used)) static int FUNC_1(const struct ltc294x_info *VAR_3, int *VAR_4)
{
 enum ltc294x_reg VAR_5;
 int VAR_6;
 u8 VAR_7[2];
 u32 VAR_8;

 if (VAR_3->id == VAR_0) {
  VAR_5 = VAR_1;
  VAR_8 = 6000;
 } else {
  VAR_5 = VAR_2;
  VAR_8 = 5100;
 }
 VAR_6 = FUNC_0(VAR_3->client, VAR_5, &VAR_7[0], 2);
 VAR_8 *= (VAR_7[0] << 8) | VAR_7[1];

 *VAR_4 = VAR_8 / 0xFFFF - 2722;
 return VAR_6;
}
