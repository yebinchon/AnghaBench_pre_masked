
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ltc294x_info {int client; } ;
typedef enum ltc294x_reg { ____Placeholder_ltc294x_reg } ltc294x_reg ;


 int FUNC_0 (int ,int,int*,int) ;

__attribute__((used)) static int FUNC_1(const struct ltc294x_info *VAR_0,
     enum ltc294x_reg VAR_1)
 {
 int VAR_2;
 u8 VAR_3[2];

 VAR_2 = FUNC_0(VAR_0->client, VAR_1, &VAR_3[0], 2);
 if (VAR_2 < 0)
  return VAR_2;
 return (VAR_3[0] << 8) + VAR_3[1];
}
