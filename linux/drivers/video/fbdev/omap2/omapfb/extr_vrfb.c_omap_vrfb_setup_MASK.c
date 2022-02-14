
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct vrfb {size_t context; int xres; int yres; int xoffset; int yoffset; unsigned int bytespp; int yuv_mode; } ;
struct TYPE_2__ {unsigned long physical_ba; int size; int control; } ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_3 (int,size_t) ;
 int FUNC_4 (unsigned long,size_t) ;
 int FUNC_5 (int,size_t) ;

void FUNC_6(struct vrfb *VAR_10, unsigned long VAR_11,
  u16 VAR_12, u16 VAR_13,
  unsigned VAR_14, bool VAR_15)
{
 unsigned VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 u8 VAR_19 = VAR_10->context;
 u32 VAR_20;
 u32 VAR_21;

 FUNC_2("omapfb_set_vrfb(%d, %lx, %dx%d, %d, %d)\n", VAR_19, VAR_11,
   VAR_12, VAR_13, VAR_14, VAR_15);



 if (VAR_15) {
  VAR_14 *= 2;
  VAR_12 /= 2;
 }

 if (VAR_14 == 4)
  VAR_16 = 2;
 else if (VAR_14 == 2)
  VAR_16 = 1;
 else {
  FUNC_1();
  return;
 }

 VAR_17 = FUNC_0(VAR_12 * VAR_14, VAR_7) / VAR_14;
 VAR_18 = FUNC_0(VAR_13, VAR_5);

 FUNC_2("vrfb w %u, h %u bytespp %d\n", VAR_17, VAR_18, VAR_14);

 VAR_20 = VAR_17 << VAR_1;
 VAR_20 |= VAR_18 << VAR_0;

 VAR_21 = VAR_16 << VAR_3;
 VAR_21 |= VAR_8 << VAR_4;
 VAR_21 |= VAR_6 << VAR_2;

 VAR_9[VAR_19].physical_ba = VAR_11;
 VAR_9[VAR_19].size = VAR_20;
 VAR_9[VAR_19].control = VAR_21;

 FUNC_4(VAR_11, VAR_19);
 FUNC_5(VAR_20, VAR_19);
 FUNC_3(VAR_21, VAR_19);

 FUNC_2("vrfb offset pixels %d, %d\n",
   VAR_17 - VAR_12, VAR_18 - VAR_13);

 VAR_10->xres = VAR_12;
 VAR_10->yres = VAR_13;
 VAR_10->xoffset = VAR_17 - VAR_12;
 VAR_10->yoffset = VAR_18 - VAR_13;
 VAR_10->bytespp = VAR_14;
 VAR_10->yuv_mode = VAR_15;
}
