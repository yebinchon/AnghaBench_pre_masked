
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct us_data*,char*,unsigned char) ;
 int FUNC_1 (struct us_data*,int ,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3);

 FUNC_0(VAR_2, "0x%02X\n", *VAR_3);
 return VAR_4;
}
