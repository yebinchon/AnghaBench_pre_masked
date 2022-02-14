
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_vuart {scalar_t__ regs; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct aspeed_vuart* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 struct aspeed_vuart *VAR_7 = FUNC_0(VAR_4);
 u8 VAR_8;

 VAR_8 = FUNC_1(VAR_7->regs + VAR_0);
 VAR_8 &= VAR_1;
 VAR_8 >>= VAR_2;

 return FUNC_2(VAR_6, VAR_3 - 1, "%u\n", VAR_8);
}
