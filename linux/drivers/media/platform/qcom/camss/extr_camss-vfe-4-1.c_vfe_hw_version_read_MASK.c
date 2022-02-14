
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfe_device {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vfe_device *VAR_1, struct device *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1->base + VAR_0);

 FUNC_0(VAR_2, "VFE HW Version = 0x%08x\n", VAR_3);
}
