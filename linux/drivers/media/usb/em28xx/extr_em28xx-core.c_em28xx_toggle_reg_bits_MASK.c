
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct em28xx {int dummy; } ;


 int FUNC_0 (struct em28xx*,int ) ;
 int FUNC_1 (struct em28xx*,int ,int) ;

int FUNC_2(struct em28xx *VAR_0, u16 VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = (~VAR_3 & VAR_2) | (VAR_3 & ~VAR_2);

 return FUNC_1(VAR_0, VAR_1, VAR_4);
}
