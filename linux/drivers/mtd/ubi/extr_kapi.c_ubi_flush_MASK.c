
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int dummy; } ;


 int VAR_0 ;
 struct ubi_device* FUNC_0 (int) ;
 int FUNC_1 (struct ubi_device*) ;
 int FUNC_2 (struct ubi_device*,int,int) ;

int FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
 struct ubi_device *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
 FUNC_1(VAR_4);
 return VAR_5;
}
