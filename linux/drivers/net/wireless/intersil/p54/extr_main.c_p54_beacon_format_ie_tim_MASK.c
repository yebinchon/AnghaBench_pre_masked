
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int* FUNC_1 (struct sk_buff*,int) ;
 int* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2)
{





 u8 *VAR_3;
 u8 VAR_4;
 u8 VAR_5;
 u8 *VAR_6;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3)
  return 0;

 VAR_4 = VAR_3[1];
 VAR_5 = VAR_3[3];
 VAR_6 = VAR_3 + 2 + VAR_4;

 if (VAR_4 < 3)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_6, FUNC_2(VAR_2) - VAR_6);
 VAR_3 = FUNC_2(VAR_2) - (VAR_4 + 2);


 VAR_3[0] = VAR_1;
 VAR_3[1] = 3;
 VAR_3[2] = 0;
 VAR_3[3] = VAR_5;
 VAR_3[4] = 0;

 if (VAR_4 > 3)
  FUNC_3(VAR_2, VAR_2->len - (VAR_4 - 3));

 return 0;
}
