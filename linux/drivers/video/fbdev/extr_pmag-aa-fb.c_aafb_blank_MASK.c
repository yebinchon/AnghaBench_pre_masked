
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fb_info {struct aafb_par* par; } ;
struct aafb_par {int bt455; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct fb_info *VAR_1)
{
 struct aafb_par *VAR_2 = VAR_1->par;
 u8 VAR_3 = VAR_0 ? 0x00 : 0x0f;

 FUNC_0(VAR_2->bt455, 1, VAR_3);
 return 0;
}
