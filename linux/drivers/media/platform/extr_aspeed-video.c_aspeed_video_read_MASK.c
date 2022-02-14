
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct aspeed_video {int dev; scalar_t__ base; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct aspeed_video *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_0->base + VAR_1);

 FUNC_0(VAR_0->dev, "read %03x[%08x]\n", VAR_1, VAR_2);
 return VAR_2;
}
