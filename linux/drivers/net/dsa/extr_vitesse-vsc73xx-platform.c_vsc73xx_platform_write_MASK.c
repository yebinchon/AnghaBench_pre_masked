
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct vsc73xx_platform {scalar_t__ base_addr; } ;
struct vsc73xx {struct vsc73xx_platform* priv; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct vsc73xx *VAR_1, u8 VAR_2, u8 VAR_3,
      u8 VAR_4, u32 VAR_5)
{
 struct vsc73xx_platform *VAR_6 = VAR_1->priv;
 u32 VAR_7;

 if (!FUNC_1(VAR_2, VAR_3))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5, VAR_6->base_addr + VAR_7);

 return 0;
}
