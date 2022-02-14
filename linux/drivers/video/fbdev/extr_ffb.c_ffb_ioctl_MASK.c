
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffb_par {int fbsize; } ;
struct fb_info {scalar_t__ par; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned long,struct fb_info*,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct ffb_par *VAR_4 = (struct ffb_par *)VAR_1->par;

 return FUNC_0(VAR_2, VAR_3, VAR_1,
       VAR_0, 24, VAR_4->fbsize);
}
