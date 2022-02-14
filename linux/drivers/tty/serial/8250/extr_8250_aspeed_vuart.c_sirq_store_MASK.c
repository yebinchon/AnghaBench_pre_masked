
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_vuart {scalar_t__ regs; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct aspeed_vuart* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct aspeed_vuart *VAR_7 = FUNC_0(VAR_3);
 unsigned long VAR_8;
 int VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_1(VAR_5, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8 <<= VAR_2;
 VAR_8 &= VAR_1;

 VAR_10 = FUNC_2(VAR_7->regs + VAR_0);
 VAR_10 &= ~VAR_1;
 VAR_10 |= VAR_8;
 FUNC_3(VAR_10, VAR_7->regs + VAR_0);

 return VAR_6;
}
