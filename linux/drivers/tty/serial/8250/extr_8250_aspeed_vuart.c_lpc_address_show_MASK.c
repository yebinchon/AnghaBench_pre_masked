
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_vuart {scalar_t__ regs; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct aspeed_vuart* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 struct aspeed_vuart *VAR_6 = FUNC_0(VAR_3);
 u16 VAR_7;

 VAR_7 = (FUNC_1(VAR_6->regs + VAR_0) << 8) |
  (FUNC_1(VAR_6->regs + VAR_1));

 return FUNC_2(VAR_5, VAR_2 - 1, "0x%x\n", VAR_7);
}
