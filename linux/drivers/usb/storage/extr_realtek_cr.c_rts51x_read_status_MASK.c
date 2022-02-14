
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (struct us_data*,int,int*,int,int*,int,int ,int*) ;
 int FUNC_4 (struct us_data*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_5,
         u8 VAR_6, u8 *VAR_7, int VAR_8, int *VAR_9)
{
 int VAR_10;
 u8 VAR_11[12] = { 0 };
 u8 *VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_2);
 if (VAR_12 == ((void*)0))
  return VAR_3;

 FUNC_4(VAR_5, "lun = %d\n", VAR_6);

 VAR_11[0] = 0xF0;
 VAR_11[1] = 0x09;

 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_11, 12,
           VAR_12, VAR_8, VAR_0, VAR_9);
 if (VAR_10 != VAR_4) {
  FUNC_0(VAR_12);
  return -VAR_1;
 }

 FUNC_2(VAR_7, VAR_12, VAR_8);
 FUNC_0(VAR_12);
 return 0;
}
