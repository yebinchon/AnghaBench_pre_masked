
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tape_device*,int ,int) ;

int
FUNC_1(struct tape_device *VAR_4, int VAR_5)
{
 int VAR_6;




 if ((VAR_6 = FUNC_0(VAR_4, VAR_3, 1)) < 0)
  return VAR_6;







 do {
  if ((VAR_6 = FUNC_0(VAR_4, VAR_1, 1)) < 0)
   return VAR_6;
  if ((VAR_6 = FUNC_0(VAR_4, VAR_2, 1)) < 0)
   return VAR_6;
 } while (VAR_6 == 0);

 return FUNC_0(VAR_4, VAR_0, 1);
}
