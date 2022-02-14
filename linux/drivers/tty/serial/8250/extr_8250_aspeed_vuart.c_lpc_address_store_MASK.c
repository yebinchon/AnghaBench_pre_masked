
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_vuart {scalar_t__ regs; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct aspeed_vuart* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct aspeed_vuart *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_7 >> 8, VAR_6->regs + VAR_0);
 FUNC_2(VAR_7 >> 0, VAR_6->regs + VAR_1);

 return VAR_5;
}
