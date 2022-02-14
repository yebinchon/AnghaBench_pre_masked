
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct smiapp_sensor {int dummy; } ;


 int FUNC_0 (struct smiapp_sensor*,unsigned int,int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct smiapp_sensor *VAR_0, u16 VAR_1,
     u16 VAR_2, u32 *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 *VAR_3 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  u32 VAR_6;

  VAR_5 = FUNC_0(VAR_0, VAR_1 + VAR_4, 1, &VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
  *VAR_3 |= VAR_6 << ((VAR_2 - VAR_4 - 1) << 3);
 }

 return 0;
}
