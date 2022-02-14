
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vfe_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct vfe_device *VAR_1, u8 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->base + VAR_0);

 return (VAR_3 >> VAR_2) & 0x1;
}
