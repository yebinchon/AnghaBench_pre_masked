
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfe_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 *VAR_7 = FUNC_0(VAR_6->base + VAR_4);
 *VAR_8 = FUNC_0(VAR_6->base + VAR_5);

 FUNC_2(*VAR_7, VAR_6->base + VAR_0);
 FUNC_2(*VAR_8, VAR_6->base + VAR_1);

 FUNC_1();
 FUNC_2(VAR_3, VAR_6->base + VAR_2);
}
