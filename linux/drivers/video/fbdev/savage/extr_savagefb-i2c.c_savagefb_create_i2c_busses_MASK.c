
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* getscl; void* getsda; void* setscl; void* setsda; } ;
struct TYPE_8__ {struct savagefb_par* par; TYPE_3__ algo; int ioaddr; void* reg; } ;
struct TYPE_6__ {int vbase; } ;
struct savagefb_par {int chip; TYPE_4__ chan; TYPE_2__ mmio; TYPE_1__* pcidev; } ;
struct fb_info {struct savagefb_par* par; } ;
struct TYPE_5__ {int revision; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;





 int FUNC_0 (int,struct savagefb_par*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (TYPE_4__*,char*) ;

void FUNC_2(struct fb_info *VAR_11)
{
 struct savagefb_par *VAR_12 = VAR_11->par;
 VAR_12->chan.par = VAR_12;

 switch (VAR_12->chip) {
 case 132:
 case 131:
 case 128:
  VAR_12->chan.reg = VAR_1;
  VAR_12->chan.ioaddr = VAR_12->mmio.vbase;
  VAR_12->chan.algo.setsda = VAR_6;
  VAR_12->chan.algo.setscl = VAR_5;
  VAR_12->chan.algo.getsda = VAR_4;
  VAR_12->chan.algo.getscl = VAR_3;
  break;
 case 129:
  VAR_12->chan.reg = VAR_0;
  if (VAR_12->pcidev->revision > 1 && !(FUNC_0(0xa6, VAR_12) & 0x40))
   VAR_12->chan.reg = VAR_1;
  VAR_12->chan.ioaddr = VAR_12->mmio.vbase;
  VAR_12->chan.algo.setsda = VAR_6;
  VAR_12->chan.algo.setscl = VAR_5;
  VAR_12->chan.algo.getsda = VAR_4;
  VAR_12->chan.algo.getscl = VAR_3;
  break;
 case 130:
  VAR_12->chan.reg = VAR_2;
  VAR_12->chan.ioaddr = VAR_12->mmio.vbase;
  VAR_12->chan.algo.setsda = VAR_10;
  VAR_12->chan.algo.setscl = VAR_9;
  VAR_12->chan.algo.getsda = VAR_8;
  VAR_12->chan.algo.getscl = VAR_7;
  break;
 default:
  VAR_12->chan.par = ((void*)0);
 }

 FUNC_1(&VAR_12->chan, "SAVAGE DDC2");
}
