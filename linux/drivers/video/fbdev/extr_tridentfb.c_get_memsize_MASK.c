
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int chip_id; int io_virt; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct tridentfb_par*,int ) ;
 unsigned char FUNC_2 (int ,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct tridentfb_par *VAR_5)
{
 unsigned char VAR_6, VAR_7;
 unsigned int VAR_8;


 if (VAR_4)
  VAR_8 = VAR_4 * VAR_0;
 else
  switch (VAR_5->chip_id) {
  case 128:
   VAR_8 = 2560 * VAR_0;
   break;
  default:
   VAR_6 = FUNC_1(VAR_5, VAR_2) & 0x0F;
   switch (VAR_6) {

   case 0x01:
    VAR_8 = 512 * VAR_0;
    break;
   case 0x02:
    VAR_8 = 6 * VAR_1;
    break;
   case 0x03:
    VAR_8 = 1 * VAR_1;
    break;
   case 0x04:
    VAR_8 = 8 * VAR_1;
    break;
   case 0x06:
    VAR_8 = 10 * VAR_1;
    break;
   case 0x07:
    VAR_8 = 2 * VAR_1;
    break;
   case 0x08:
    VAR_8 = 12 * VAR_1;
    break;
   case 0x0A:
    VAR_8 = 14 * VAR_1;
    break;
   case 0x0C:
    VAR_8 = 16 * VAR_1;
    break;
   case 0x0E:

    VAR_7 = FUNC_2(VAR_5->io_virt, 0xC1);
    switch (VAR_7) {
    case 0x00:
     VAR_8 = 20 * VAR_1;
     break;
    case 0x01:
     VAR_8 = 24 * VAR_1;
     break;
    case 0x10:
     VAR_8 = 28 * VAR_1;
     break;
    case 0x11:
     VAR_8 = 32 * VAR_1;
     break;
    default:
     VAR_8 = 1 * VAR_1;
     break;
    }
    break;

   case 0x0F:
    VAR_8 = 4 * VAR_1;
    break;
   default:
    VAR_8 = 1 * VAR_1;
    break;
   }
  }

 VAR_8 -= VAR_3 * VAR_0;
 FUNC_0("framebuffer size = %d Kb\n", VAR_8 / VAR_0);
 return VAR_8;
}
