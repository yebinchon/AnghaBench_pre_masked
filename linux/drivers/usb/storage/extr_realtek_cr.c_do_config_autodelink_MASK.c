
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct us_data*,int*,int) ;
 int FUNC_1 (struct us_data*,int,int*,int) ;
 int FUNC_2 (struct us_data*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_1(VAR_1, 0xFE47, &VAR_5, 1);
 if (VAR_4 < 0)
  return -VAR_0;

 if (VAR_2) {
  if (VAR_3)
   VAR_5 |= 0x03;
  else
   VAR_5 |= 0x01;
 } else {
  VAR_5 &= ~0x03;
 }

 FUNC_2(VAR_1, "set 0xfe47 to 0x%x\n", VAR_5);


 VAR_4 = FUNC_0(VAR_1, &VAR_5, 1);
 if (VAR_4 < 0)
  return -VAR_0;

 return 0;
}
