
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bh1770_chip {int lux_ga; int lux_cf; int lux_calib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct bh1770_chip *VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_2 * VAR_4->lux_ga) / VAR_3;

 VAR_5 = (VAR_5 * VAR_4->lux_cf) / VAR_1;

 VAR_5 = (VAR_5 * VAR_4->lux_calib) / VAR_0;
 return VAR_5;
}
