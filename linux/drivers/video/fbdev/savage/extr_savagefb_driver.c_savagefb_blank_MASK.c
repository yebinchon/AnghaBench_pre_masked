
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct savagefb_par {scalar_t__ display_type; } ;
struct fb_info {struct savagefb_par* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 int FUNC_0 (int,struct savagefb_par*) ;
 int FUNC_1 (int,int,struct savagefb_par*) ;

__attribute__((used)) static int FUNC_2(int VAR_3, struct fb_info *VAR_4)
{
 struct savagefb_par *VAR_5 = VAR_4->par;
 u8 VAR_6 = 0, VAR_7 = 0;

 if (VAR_5->display_type == VAR_0) {
  FUNC_1(0x3c4, 0x08, VAR_5);
  VAR_6 = FUNC_0(0x3c5, VAR_5);
  VAR_6 |= 0x06;
  FUNC_1(0x3c5, VAR_6, VAR_5);
  FUNC_1(0x3c4, 0x0d, VAR_5);
  VAR_7 = FUNC_0(0x3c5, VAR_5);
  VAR_7 &= 0x50;

  switch (VAR_3) {
  case 129:
  case 131:
   break;
  case 128:
   VAR_7 |= 0x10;
   break;
  case 132:
   VAR_7 |= 0x40;
   break;
  case 130:
   VAR_7 |= 0x50;
   break;
  }

  FUNC_1(0x3c4, 0x0d, VAR_5);
  FUNC_1(0x3c5, VAR_7, VAR_5);
 }

 if (VAR_5->display_type == VAR_2 ||
     VAR_5->display_type == VAR_1) {
  switch(VAR_3) {
  case 129:
  case 131:
   FUNC_1(0x3c4, 0x31, VAR_5);
   FUNC_1(0x3c5, FUNC_0(0x3c5, VAR_5) | 0x10, VAR_5);
   break;
  case 128:
  case 132:
  case 130:
   FUNC_1(0x3c4, 0x31, VAR_5);
   FUNC_1(0x3c5, FUNC_0(0x3c5, VAR_5) & ~0x10, VAR_5);
   break;
  }
 }

 return (VAR_3 == 131) ? 1 : 0;
}
