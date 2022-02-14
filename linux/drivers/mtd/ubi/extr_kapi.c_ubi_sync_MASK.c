
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int mtd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ubi_device* FUNC_1 (int) ;
 int FUNC_2 (struct ubi_device*) ;

int FUNC_3(int VAR_1)
{
 struct ubi_device *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 FUNC_0(VAR_2->mtd);
 FUNC_2(VAR_2);
 return 0;
}
