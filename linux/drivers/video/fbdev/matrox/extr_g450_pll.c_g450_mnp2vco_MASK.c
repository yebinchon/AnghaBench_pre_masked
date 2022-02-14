
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int ref_freq; } ;
struct TYPE_4__ {TYPE_1__ pll; } ;
struct matrox_fb_info {TYPE_2__ features; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct matrox_fb_info *VAR_0,
     unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;

 VAR_2 = ((VAR_1 >> 16) & 0x0FF) + 1;
 VAR_3 = ((VAR_1 >> 7) & 0x1FE) + 4;
 return (VAR_0->features.pll.ref_freq * VAR_3 + (VAR_2 >> 1)) / VAR_2;
}
