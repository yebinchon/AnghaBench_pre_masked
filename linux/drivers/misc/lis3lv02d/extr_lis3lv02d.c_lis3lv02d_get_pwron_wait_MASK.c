
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int pwron_delay; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct lis3lv02d*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct lis3lv02d *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2 == 0, "device returned spurious data"))
  return -VAR_0;


 FUNC_2(VAR_1->pwron_delay / VAR_2);
 return 0;
}
