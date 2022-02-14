
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vfe_device {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_2, u8 VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_2->base +
       FUNC_0(VAR_3));

 VAR_5 &= ~(VAR_0);

 VAR_5 |= (VAR_4 << VAR_1)
  & VAR_0;

 FUNC_2(VAR_5,
         VAR_2->base + FUNC_0(VAR_3));
}
