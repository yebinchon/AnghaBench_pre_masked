
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {int generation; int cap_lc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tb_switch*,int*) ;
 int FUNC_1 (struct tb_switch*,int*,int ,scalar_t__,int) ;
 int FUNC_2 (struct tb_switch*,int*,int ,scalar_t__,int) ;

int FUNC_3(struct tb_switch *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14;

 if (VAR_8->generation < 2)
  return 0;

 VAR_12 = FUNC_0(VAR_8, &VAR_14);
 if (VAR_12)
  return VAR_12;


 VAR_11 = VAR_14 & VAR_1;
 VAR_9 = (VAR_14 & VAR_4) >> VAR_5;
 VAR_10 = (VAR_14 & VAR_2) >> VAR_3;


 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  unsigned int VAR_15 = VAR_8->cap_lc + VAR_9 + VAR_13 * VAR_10;
  u32 VAR_16;

  VAR_12 = FUNC_1(VAR_8, &VAR_16, VAR_0,
     VAR_15 + VAR_6, 1);
  if (VAR_12)
   return VAR_12;

  VAR_16 |= VAR_7;
  VAR_12 = FUNC_2(VAR_8, &VAR_16, VAR_0,
      VAR_15 + VAR_6, 1);
  if (VAR_12)
   return VAR_12;
 }

 return 0;
}
