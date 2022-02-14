
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa168fb_info {int pix_fmt; int panel_rbswap; scalar_t__ reg_base; scalar_t__ active; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pxa168fb_info *VAR_3)
{
 u32 VAR_4;




 VAR_4 = FUNC_1(VAR_3->reg_base + VAR_1);
 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_3->active ? FUNC_0(1) : FUNC_0(0);





 if (VAR_3->pix_fmt == VAR_2)
  VAR_4 |= 0x10000000;




 VAR_4 &= ~(0xF << 16);
 VAR_4 |= (VAR_3->pix_fmt >> 1) << 16;






 VAR_4 &= ~(1 << 12);
 VAR_4 |= ((VAR_3->pix_fmt & 1) ^ (VAR_3->panel_rbswap)) << 12;

 FUNC_2(VAR_4, VAR_3->reg_base + VAR_1);
}
