
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct fm10k_vf_info {int vf_flags; int glort; } ;
struct TYPE_2__ {int dglort_map; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fm10k_hw*,int) ;

__attribute__((used)) static s32 FUNC_1(struct fm10k_hw *VAR_3,
      struct fm10k_vf_info *VAR_4,
      u16 VAR_5, u8 VAR_6)
{
 u16 VAR_7 = (VAR_3->mac.dglort_map + VAR_5) & VAR_0;


 if (!FUNC_0(VAR_3, VAR_7))
  return VAR_1;

 VAR_4->vf_flags = VAR_6 | VAR_2;
 VAR_4->glort = VAR_7;

 return 0;
}
