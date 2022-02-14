
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int opt; int opt2; int opt3; int mctlwtst_core; int mctlwtst; int memmisc; int memrdbk; int maccess; } ;
struct TYPE_19__ {int ddr; int dll; int emrswen; } ;
struct TYPE_16__ {int system; int video; } ;
struct TYPE_11__ {TYPE_9__ reg; TYPE_8__ memory; TYPE_5__ pll; } ;
struct TYPE_17__ {int ref_freq; } ;
struct TYPE_18__ {TYPE_6__ pll; } ;
struct TYPE_14__ {int vcomax; int vcomin; } ;
struct TYPE_13__ {int vcomax; int vcomin; } ;
struct TYPE_12__ {int vcomax; int vcomin; } ;
struct TYPE_15__ {TYPE_3__ video; TYPE_2__ system; TYPE_1__ pixel; } ;
struct matrox_fb_info {TYPE_10__ values; TYPE_7__ features; TYPE_4__ limits; } ;



__attribute__((used)) static void FUNC_0(struct matrox_fb_info *VAR_0)
{

 VAR_0->limits.pixel.vcomax =
 VAR_0->limits.system.vcomax =
 VAR_0->limits.video.vcomax = 600000;
 VAR_0->limits.pixel.vcomin =
 VAR_0->limits.system.vcomin =
 VAR_0->limits.video.vcomin = 256000;
 VAR_0->values.pll.system =
 VAR_0->values.pll.video = 284000;
 VAR_0->values.reg.opt = 0x404A1160;
 VAR_0->values.reg.opt2 = 0x0000AC00;
 VAR_0->values.reg.opt3 = 0x0090A409;
 VAR_0->values.reg.mctlwtst_core =
 VAR_0->values.reg.mctlwtst = 0x0C81462B;
 VAR_0->values.reg.memmisc = 0x80000004;
 VAR_0->values.reg.memrdbk = 0x01001103;
 VAR_0->features.pll.ref_freq = 27000;
 VAR_0->values.memory.ddr = 1;
 VAR_0->values.memory.dll = 1;
 VAR_0->values.memory.emrswen = 1;
 VAR_0->values.reg.maccess = 0x00004000;
}
