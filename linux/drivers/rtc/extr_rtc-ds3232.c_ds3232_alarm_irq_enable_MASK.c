
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds3232 {scalar_t__ irq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct ds3232* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, unsigned int VAR_2)
{
 struct ds3232 *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->irq <= 0)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
