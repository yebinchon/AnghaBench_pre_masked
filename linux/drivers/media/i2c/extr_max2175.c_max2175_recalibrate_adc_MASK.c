
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max2175 {int dummy; } ;


 int FUNC_0 (struct max2175*,int,int,int,int,int) ;
 int FUNC_1 (struct max2175*,int,int) ;
 int FUNC_2 (struct max2175*,char*) ;

__attribute__((used)) static int FUNC_3(struct max2175 *VAR_0)
{
 int VAR_1;


 FUNC_1(VAR_0, 150, 0xff);
 FUNC_1(VAR_0, 205, 0xff);
 FUNC_1(VAR_0, 147, 0x20);
 FUNC_1(VAR_0, 147, 0x00);
 FUNC_1(VAR_0, 202, 0x20);
 FUNC_1(VAR_0, 202, 0x00);

 VAR_1 = FUNC_0(VAR_0, 69, 4, 3, 3, 50000);
 if (VAR_1)
  FUNC_2(VAR_0, "adc recalibration failed\n");

 return VAR_1;
}
