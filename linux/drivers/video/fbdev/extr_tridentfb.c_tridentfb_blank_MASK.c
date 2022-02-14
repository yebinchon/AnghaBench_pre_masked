
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {scalar_t__ flatpanel; } ;
struct fb_info {struct tridentfb_par* par; } ;







 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct tridentfb_par*,int ) ;
 int FUNC_2 (struct tridentfb_par*,int) ;
 int FUNC_3 (struct tridentfb_par*,unsigned char,int) ;
 int FUNC_4 (struct tridentfb_par*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_5(int VAR_1, struct fb_info *VAR_2)
{
 unsigned char VAR_3, VAR_4;
 struct tridentfb_par *VAR_5 = VAR_2->par;

 FUNC_0("enter\n");
 if (VAR_5->flatpanel)
  return 0;
 FUNC_3(VAR_5, 0x04, 0x83C8);
 VAR_3 = FUNC_2(VAR_5, 0x83C6) & 0xFC;
 VAR_4 = FUNC_1(VAR_5, VAR_0) & 0xFC;
 switch (VAR_1) {
 case 129:

 case 131:

  VAR_3 |= 0x03;
  VAR_4 |= 0x00;
  break;
 case 132:

  VAR_3 |= 0x02;
  VAR_4 |= 0x01;
  break;
 case 128:

  VAR_3 |= 0x02;
  VAR_4 |= 0x02;
  break;
 case 130:

  VAR_3 |= 0x00;
  VAR_4 |= 0x03;
  break;
 }

 FUNC_4(VAR_5, VAR_0, VAR_4);
 FUNC_3(VAR_5, 4, 0x83C8);
 FUNC_3(VAR_5, VAR_3, 0x83C6);

 FUNC_0("exit\n");


 return (VAR_1 == 131) ? 1 : 0;
}
