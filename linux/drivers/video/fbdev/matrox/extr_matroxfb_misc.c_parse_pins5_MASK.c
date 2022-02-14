
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


typedef int u_int32_t ;
struct TYPE_20__ {int mctlwtst; int maccess; int mctlwtst_core; void* memrdbk; void* memmisc; void* opt3; void* opt2; void* opt; } ;
struct TYPE_19__ {int ddr; int dll; int emrswen; } ;
struct TYPE_16__ {int system; int video; } ;
struct TYPE_11__ {TYPE_9__ reg; TYPE_8__ memory; TYPE_5__ pll; } ;
struct TYPE_17__ {int ref_freq; } ;
struct TYPE_18__ {TYPE_6__ pll; } ;
struct TYPE_14__ {unsigned int vcomax; unsigned int vcomin; } ;
struct TYPE_13__ {unsigned int vcomax; unsigned int vcomin; } ;
struct TYPE_12__ {int vcomax; int vcomin; } ;
struct TYPE_15__ {TYPE_3__ system; TYPE_2__ video; TYPE_1__ pixel; } ;
struct matrox_fb_info {int max_pixel_clock_panellink; TYPE_10__ values; TYPE_7__ features; TYPE_4__ limits; } ;
struct matrox_bios {int* pins; } ;


 void* FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(struct matrox_fb_info *VAR_0,
         const struct matrox_bios *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1->pins[4]?8000:6000;

 VAR_0->limits.pixel.vcomax = (VAR_1->pins[ 38] == 0xFF) ? 600000 : VAR_1->pins[ 38] * VAR_2;
 VAR_0->limits.system.vcomax = (VAR_1->pins[ 36] == 0xFF) ? VAR_0->limits.pixel.vcomax : VAR_1->pins[ 36] * VAR_2;
 VAR_0->limits.video.vcomax = (VAR_1->pins[ 37] == 0xFF) ? VAR_0->limits.system.vcomax : VAR_1->pins[ 37] * VAR_2;
 VAR_0->limits.pixel.vcomin = (VAR_1->pins[123] == 0xFF) ? 256000 : VAR_1->pins[123] * VAR_2;
 VAR_0->limits.system.vcomin = (VAR_1->pins[121] == 0xFF) ? VAR_0->limits.pixel.vcomin : VAR_1->pins[121] * VAR_2;
 VAR_0->limits.video.vcomin = (VAR_1->pins[122] == 0xFF) ? VAR_0->limits.system.vcomin : VAR_1->pins[122] * VAR_2;
 VAR_0->values.pll.system =
 VAR_0->values.pll.video = (VAR_1->pins[ 92] == 0xFF) ? 284000 : VAR_1->pins[ 92] * 4000;
 VAR_0->values.reg.opt = FUNC_0(VAR_1->pins + 48);
 VAR_0->values.reg.opt2 = FUNC_0(VAR_1->pins + 52);
 VAR_0->values.reg.opt3 = FUNC_0(VAR_1->pins + 94);
 VAR_0->values.reg.mctlwtst = FUNC_0(VAR_1->pins + 98);
 VAR_0->values.reg.memmisc = FUNC_0(VAR_1->pins + 102);
 VAR_0->values.reg.memrdbk = FUNC_0(VAR_1->pins + 106);
 VAR_0->features.pll.ref_freq = (VAR_1->pins[110] & 0x01) ? 14318 : 27000;
 VAR_0->values.memory.ddr = (VAR_1->pins[114] & 0x60) == 0x20;
 VAR_0->values.memory.dll = (VAR_1->pins[115] & 0x02) != 0;
 VAR_0->values.memory.emrswen = (VAR_1->pins[115] & 0x01) != 0;
 VAR_0->values.reg.maccess = VAR_0->values.memory.emrswen ? 0x00004000 : 0x00000000;
 if (VAR_1->pins[115] & 4) {
  VAR_0->values.reg.mctlwtst_core = VAR_0->values.reg.mctlwtst;
 } else {
  u_int32_t VAR_3[] = { 0, 1, 5, 6, 7, 5, 2, 3 };
  VAR_0->values.reg.mctlwtst_core = (VAR_0->values.reg.mctlwtst & ~7) |
        VAR_3[VAR_0->values.reg.mctlwtst & 7];
 }
 VAR_0->max_pixel_clock_panellink = VAR_1->pins[47] * 4000;
 return 0;
}
