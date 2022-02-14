
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smiapp_sensor {int dummy; } ;
struct smiapp_reg_8 {int member_0; int member_1; } ;


 int FUNC_0 (struct smiapp_reg_8 const*) ;
 int FUNC_1 (struct smiapp_sensor*,struct smiapp_reg_8 const*,int ) ;

__attribute__((used)) static int FUNC_2(struct smiapp_sensor *VAR_0)
{

 static const struct smiapp_reg_8 VAR_1[] = {




  { 0x3302, 0x01 },
  { 0x302d, 0x00 },
  { 0x3b08, 0x8c },
 };

 return FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1));
}
