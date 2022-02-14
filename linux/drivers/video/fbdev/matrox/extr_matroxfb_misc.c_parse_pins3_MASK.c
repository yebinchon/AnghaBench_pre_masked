
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


struct TYPE_13__ {int ref_freq; } ;
struct TYPE_14__ {TYPE_6__ pll; } ;
struct TYPE_11__ {int mctlwtst; int memrdbk; int opt; int opt2; } ;
struct TYPE_12__ {TYPE_4__ reg; } ;
struct TYPE_9__ {int vcomax; } ;
struct TYPE_8__ {int vcomax; } ;
struct TYPE_10__ {TYPE_2__ system; TYPE_1__ pixel; } ;
struct matrox_fb_info {TYPE_7__ features; TYPE_5__ values; TYPE_3__ limits; } ;
struct matrox_bios {int* pins; } ;


 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(struct matrox_fb_info *VAR_0,
         const struct matrox_bios *VAR_1)
{
 VAR_0->limits.pixel.vcomax =
 VAR_0->limits.system.vcomax = (VAR_1->pins[36] == 0xFF) ? 230000 : ((VAR_1->pins[36] + 100) * 1000);
 VAR_0->values.reg.mctlwtst = FUNC_0(VAR_1->pins + 48) == 0xFFFFFFFF ?
  0x01250A21 : FUNC_0(VAR_1->pins + 48);

 VAR_0->values.reg.memrdbk = ((VAR_1->pins[57] << 21) & 0x1E000000) |
       ((VAR_1->pins[57] << 22) & 0x00C00000) |
       ((VAR_1->pins[56] << 1) & 0x000001E0) |
       ( VAR_1->pins[56] & 0x0000000F);
 VAR_0->values.reg.opt = (VAR_1->pins[54] & 7) << 10;
 VAR_0->values.reg.opt2 = VAR_1->pins[58] << 12;
 VAR_0->features.pll.ref_freq = (VAR_1->pins[52] & 0x20) ? 14318 : 27000;
 return 0;
}
