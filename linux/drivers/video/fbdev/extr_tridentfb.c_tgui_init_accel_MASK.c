
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {scalar_t__ io_virt; } ;


 int FUNC_0 (unsigned char,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct tridentfb_par*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct tridentfb_par *VAR_0, int VAR_1, int VAR_2)
{
 unsigned char VAR_3 = VAR_2 == 24 ? 3 : (VAR_2 >> 4);


 FUNC_2(VAR_0, 0x2148, 0);
 FUNC_2(VAR_0, 0x214C, FUNC_1(4095, 2047));

 switch ((VAR_1 * VAR_2) / 8) {
 case 8192:
 case 512:
  VAR_3 |= 0x00;
  break;
 case 1024:
  VAR_3 |= 0x04;
  break;
 case 2048:
  VAR_3 |= 0x08;
  break;
 case 4096:
  VAR_3 |= 0x0C;
  break;
 }

 FUNC_0(VAR_3, VAR_0->io_virt + 0x2122);
}
