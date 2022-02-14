
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct camif_dev {int * clock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 struct camif_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2)
{
 struct camif_dev *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->clock[VAR_1]);

 FUNC_0(VAR_3->clock[VAR_0]);
 return 0;
}
