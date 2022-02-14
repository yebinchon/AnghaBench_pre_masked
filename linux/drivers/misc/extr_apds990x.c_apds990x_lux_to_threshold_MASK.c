
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int afactor; int cf1; int irf1; int cf2; int irf2; } ;
struct TYPE_3__ {int ga; int df; } ;
struct apds990x_chip {int lux_calib; size_t again_next; int lux_ir; size_t again_meas; int lux_clear; int a_max_result; TYPE_2__ rcf; TYPE_1__ cf; scalar_t__ atime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static u16 FUNC_0(struct apds990x_chip *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 if (VAR_5 == 0)
  return 0;
 else if (VAR_5 == VAR_2)
  return VAR_2;
 VAR_5 = VAR_5 * (VAR_0 / 4) / (VAR_4->lux_calib / 4);


 VAR_7 = ((u32)VAR_4->atime * (u32)VAR_3[VAR_4->again_next] *
  VAR_1 * 64) / (VAR_4->cf.ga * VAR_4->cf.df);

 VAR_6 = VAR_5 * VAR_7 / 64;





 VAR_8 = (u32)VAR_4->lux_ir * (u32)VAR_3[VAR_4->again_next] /
  (u32)VAR_3[VAR_4->again_meas];





 if (VAR_4->lux_clear * VAR_1 >=
  VAR_4->rcf.afactor * VAR_4->lux_ir)
  VAR_6 = (VAR_4->rcf.cf1 * VAR_6 + VAR_4->rcf.irf1 * VAR_8) /
   VAR_1;
 else
  VAR_6 = (VAR_4->rcf.cf2 * VAR_6 + VAR_4->rcf.irf2 * VAR_8) /
   VAR_1;

 if (VAR_6 >= VAR_4->a_max_result)
  VAR_6 = VAR_4->a_max_result - 1;
 return VAR_6;
}
