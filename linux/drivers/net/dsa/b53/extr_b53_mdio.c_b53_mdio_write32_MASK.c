
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mii_bus {int dummy; } ;
struct b53_device {struct mii_bus* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct b53_device*,int ,int ,int ) ;
 int FUNC_1 (struct mii_bus*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct b53_device *VAR_3, u8 VAR_4, u8 VAR_5,
       u32 VAR_6)
{
 struct mii_bus *VAR_7 = VAR_3->priv;
 unsigned int VAR_8;
 u32 VAR_9 = VAR_6;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  int VAR_10 = FUNC_1(VAR_7, VAR_0,
            VAR_2 + VAR_8,
            VAR_9 & 0xffff);
  if (VAR_10)
   return VAR_10;
  VAR_9 >>= 16;
 }

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_1);
}
