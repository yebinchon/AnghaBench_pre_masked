
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_dev {int dummy; } ;
struct device {int * bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rio_dev*,int ) ;
 struct rio_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, void *VAR_3)
{
 struct rio_dev *VAR_4 = FUNC_1(VAR_2);

 if (VAR_2->bus == &VAR_1)
  FUNC_0(VAR_4, VAR_0);
 return 0;
}
