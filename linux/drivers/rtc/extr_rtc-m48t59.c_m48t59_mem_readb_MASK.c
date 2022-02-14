
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct m48t59_private {scalar_t__ ioaddr; } ;
struct device {int dummy; } ;


 struct m48t59_private* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u8
FUNC_2(struct device *VAR_0, u32 VAR_1)
{
 struct m48t59_private *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->ioaddr+VAR_1);
}
