
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct au1200fb_device {int fb_phys; } ;
struct TYPE_10__ {int winenable; TYPE_2__* window; } ;
struct TYPE_9__ {int Xres; int Yres; } ;
struct TYPE_8__ {TYPE_1__* w; } ;
struct TYPE_7__ {int winctrl0; int winctrl1; scalar_t__ winbufctrl; int winbuf1; int winbuf0; } ;
struct TYPE_6__ {int xres; int yres; int xpos; int ypos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2 (struct au1200fb_device *VAR_7, int VAR_8,
 int VAR_9, int VAR_10)
{
 uint32 VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 int VAR_15, VAR_16;



 VAR_11 = VAR_4->window[VAR_8].winctrl0;
 VAR_12 = VAR_4->window[VAR_8].winctrl1;
 VAR_11 &= (VAR_0 | VAR_1);
 VAR_12 &= ~(VAR_2 | VAR_3);


 VAR_15 = VAR_6->w[VAR_8].xres;
 VAR_16 = VAR_6->w[VAR_8].yres;
 if ((VAR_9 + VAR_6->w[VAR_8].xres) > VAR_5->Xres) {

  VAR_15 = VAR_5->Xres - VAR_9;

 }

 if ((VAR_10 + VAR_6->w[VAR_8].yres) > VAR_5->Yres) {

  VAR_16 = VAR_5->Yres - VAR_10;

 }

 if (VAR_9 < 0) {

  VAR_15 = VAR_6->w[VAR_8].xres + VAR_9;
  VAR_14 += (((0 - VAR_9) * FUNC_0(VAR_4->window[VAR_8].winctrl1))/8);
  VAR_9 = 0;

 }

 if (VAR_10 < 0) {

  VAR_16 = VAR_6->w[VAR_8].yres + VAR_10;

  VAR_10 = 0;

 }


 VAR_6->w[VAR_8].xpos = VAR_9;
 VAR_6->w[VAR_8].ypos = VAR_10;

 VAR_15 -= 1;
 VAR_16 -= 1;
 VAR_11 |= (VAR_9 << 21);
 VAR_11 |= (VAR_10 << 10);
 VAR_12 |= (VAR_15 << 11);
 VAR_12 |= (VAR_16 << 0);


 VAR_13 = VAR_4->winenable & (1 << VAR_8);
 FUNC_1();
 VAR_4->winenable &= ~(1 << VAR_8);
 VAR_4->window[VAR_8].winctrl0 = VAR_11;
 VAR_4->window[VAR_8].winctrl1 = VAR_12;
 VAR_4->window[VAR_8].winbuf0 =
 VAR_4->window[VAR_8].winbuf1 = VAR_7->fb_phys;
 VAR_4->window[VAR_8].winbufctrl = 0;
 VAR_4->winenable |= VAR_13;
 FUNC_1();

 return 0;
}
