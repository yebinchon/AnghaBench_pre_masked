
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smiapp_sensor {scalar_t__* limits; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct smiapp_sensor*,unsigned int*,int) ;
 int FUNC_1 (struct smiapp_sensor*,size_t,int) ;

__attribute__((used)) static int FUNC_2(struct smiapp_sensor *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2, &VAR_3, 1);
  if (VAR_4 < 0)
   return VAR_4;
 }

 if (VAR_2->limits[VAR_1] == 0)
  FUNC_1(VAR_2, VAR_1, 16);

 return 0;
}
