
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct us_data*,int,int*,int) ;
 int FUNC_1 (struct us_data*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_1, 0xFE77, &VAR_3, 1);
 if (VAR_2 < 0)
  return -VAR_0;

 VAR_3 |= 0x04;
 VAR_2 = FUNC_1(VAR_1, 0xFE77, &VAR_3, 1);
 if (VAR_2 < 0)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1, 0xFE77, &VAR_3, 1);
 if (VAR_2 < 0)
  return -VAR_0;

 if (!(VAR_3 & 0x04))
  return -VAR_0;

 return 0;
}
