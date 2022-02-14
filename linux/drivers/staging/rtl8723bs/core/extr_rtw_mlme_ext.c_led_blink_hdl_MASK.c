
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;
struct LedBlink_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

u8 FUNC_0(struct adapter *VAR_2, unsigned char *VAR_3)
{
 struct LedBlink_param *VAR_4;

 if (!VAR_3)
  return VAR_0;

 VAR_4 = (struct LedBlink_param *)VAR_3;
 return VAR_1;
}
