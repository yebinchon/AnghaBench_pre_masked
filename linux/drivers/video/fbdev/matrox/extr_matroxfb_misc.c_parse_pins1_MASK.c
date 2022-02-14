
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int mctlwtst; } ;
struct TYPE_10__ {int system; } ;
struct TYPE_14__ {TYPE_6__ reg; TYPE_3__ pll; } ;
struct TYPE_11__ {int ref_freq; } ;
struct TYPE_12__ {TYPE_4__ pll; } ;
struct TYPE_8__ {unsigned int vcomax; } ;
struct TYPE_9__ {TYPE_1__ pixel; } ;
struct matrox_fb_info {TYPE_7__ values; TYPE_5__ features; TYPE_2__ limits; } ;
struct matrox_bios {int* pins; } ;


 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(struct matrox_fb_info *VAR_0,
         const struct matrox_bios *VAR_1)
{
 unsigned int VAR_2;

 switch (VAR_1->pins[22]) {
  case 0: VAR_2 = 175000; break;
  case 1: VAR_2 = 220000; break;
  default: VAR_2 = 240000; break;
 }
 if (FUNC_0(VAR_1->pins + 24)) {
  VAR_2 = FUNC_0(VAR_1->pins + 24) * 10;
 }
 VAR_0->limits.pixel.vcomax = VAR_2;
 VAR_0->values.pll.system = FUNC_0(VAR_1->pins + 28) ?
  FUNC_0(VAR_1->pins + 28) * 10 : 50000;

 VAR_0->features.pll.ref_freq = 14318;
 VAR_0->values.reg.mctlwtst = 0x00030101;
 return 0;
}
