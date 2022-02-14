
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smiapp_sensor {int dummy; } ;


 int FUNC_0 (struct smiapp_sensor*,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct smiapp_sensor *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_0(VAR_0, 0x3205, 0x04);
 if (VAR_1 < 0)
  return VAR_1;


 FUNC_1(2000, 2050);


 VAR_1 = FUNC_0(VAR_0, 0x3205, 0x00);
 if (VAR_1 < 0)
  return VAR_1;

 return FUNC_0(VAR_0, 0x3328, 0x80);
}
