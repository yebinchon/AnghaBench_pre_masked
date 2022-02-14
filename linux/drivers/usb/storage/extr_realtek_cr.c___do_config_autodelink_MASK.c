
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct us_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int*,int,int ) ;
 int FUNC_2 (struct us_data*,int ,int*,int,int*,int,int ,int *) ;
 int FUNC_3 (struct us_data*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_5, u8 *VAR_6, u16 VAR_7)
{
 int VAR_8;
 u8 VAR_9[12] = {0};
 u8 *VAR_10;

 FUNC_3(VAR_5, "addr = 0xfe47, len = %d\n", VAR_7);

 VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_2);
 if (!VAR_10)
  return VAR_3;

 VAR_9[0] = 0xF0;
 VAR_9[1] = 0x0E;
 VAR_9[2] = 0xfe;
 VAR_9[3] = 0x47;
 VAR_9[4] = (u8)(VAR_7 >> 8);
 VAR_9[5] = (u8)VAR_7;

 VAR_8 = FUNC_2(VAR_5, 0, VAR_9, 12, VAR_10, VAR_7, VAR_0, ((void*)0));
 FUNC_0(VAR_10);
 if (VAR_8 != VAR_4) {
  return -VAR_1;
 }

 return 0;
}
