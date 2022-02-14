
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsaf_device {int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct dsaf_device *VAR_3, int VAR_4)
{
 bool VAR_5 = FUNC_0(VAR_3->dsaf_ver);

 if (VAR_4 == VAR_2) {
  if (VAR_5)
   return VAR_0;
  else
   return VAR_1;
 }
 return 0;
}
