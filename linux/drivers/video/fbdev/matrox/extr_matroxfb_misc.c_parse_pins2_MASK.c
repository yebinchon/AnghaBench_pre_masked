
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int ref_freq; } ;
struct TYPE_16__ {TYPE_7__ pll; } ;
struct TYPE_13__ {int system; } ;
struct TYPE_12__ {int mctlwtst; } ;
struct TYPE_14__ {TYPE_5__ pll; TYPE_4__ reg; } ;
struct TYPE_10__ {int vcomax; } ;
struct TYPE_9__ {int vcomax; } ;
struct TYPE_11__ {TYPE_2__ system; TYPE_1__ pixel; } ;
struct matrox_fb_info {TYPE_8__ features; TYPE_6__ values; TYPE_3__ limits; } ;
struct matrox_bios {int* pins; } ;



__attribute__((used)) static int FUNC_0(struct matrox_fb_info *VAR_0,
         const struct matrox_bios *VAR_1)
{
 VAR_0->limits.pixel.vcomax =
 VAR_0->limits.system.vcomax = (VAR_1->pins[41] == 0xFF) ? 230000 : ((VAR_1->pins[41] + 100) * 1000);
 VAR_0->values.reg.mctlwtst = ((VAR_1->pins[51] & 0x01) ? 0x00000001 : 0) |
       ((VAR_1->pins[51] & 0x02) ? 0x00000100 : 0) |
       ((VAR_1->pins[51] & 0x04) ? 0x00010000 : 0) |
       ((VAR_1->pins[51] & 0x08) ? 0x00020000 : 0);
 VAR_0->values.pll.system = (VAR_1->pins[43] == 0xFF) ? 50000 : ((VAR_1->pins[43] + 100) * 1000);
 VAR_0->features.pll.ref_freq = 14318;
 return 0;
}
