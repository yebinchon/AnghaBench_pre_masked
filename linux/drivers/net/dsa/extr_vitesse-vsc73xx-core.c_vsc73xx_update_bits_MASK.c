
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vsc73xx {int dummy; } ;


 int FUNC_0 (struct vsc73xx*,int ,int ,int ,int*) ;
 int FUNC_1 (struct vsc73xx*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct vsc73xx *VAR_0, u8 VAR_1, u8 VAR_2,
          u8 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;


 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_6 = VAR_7 & ~VAR_4;
 VAR_6 |= VAR_5 & VAR_4;
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
}
