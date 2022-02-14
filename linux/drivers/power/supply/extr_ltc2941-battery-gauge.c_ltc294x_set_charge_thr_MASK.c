
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ltc294x_info {scalar_t__ Qlsb; int client; } ;
typedef int s32 ;
typedef enum ltc294x_reg { ____Placeholder_ltc294x_reg } ltc294x_reg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ltc294x_info const*,int) ;
 int FUNC_3 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_4(const struct ltc294x_info *VAR_1,
     enum ltc294x_reg VAR_2, int VAR_3)
{
 u8 VAR_4[2];
 s32 VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_3);

 if (VAR_1->Qlsb < 0)
  VAR_5 += 0xFFFF;
 if ((VAR_5 < 0) || (VAR_5 > 0xFFFF))
  return -VAR_0;


 VAR_4[0] = FUNC_1(VAR_5);
 VAR_4[1] = FUNC_0(VAR_5);
 return FUNC_3(VAR_1->client, VAR_2, &VAR_4[0], 2);
}
