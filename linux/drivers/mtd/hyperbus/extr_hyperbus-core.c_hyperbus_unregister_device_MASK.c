
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hyperbus_device {scalar_t__ mtd; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct hyperbus_device *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0 && VAR_0->mtd) {
  VAR_1 = FUNC_1(VAR_0->mtd);
  FUNC_0(VAR_0->mtd);
 }

 return VAR_1;
}
