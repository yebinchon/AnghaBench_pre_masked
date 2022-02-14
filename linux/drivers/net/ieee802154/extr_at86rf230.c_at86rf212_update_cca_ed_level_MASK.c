
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct at86rf230_local {TYPE_3__* hw; } ;
struct TYPE_6__ {TYPE_2__* phy; } ;
struct TYPE_4__ {void** cca_ed_levels; void* cca_ed_levels_size; } ;
struct TYPE_5__ {void* cca_ed_level; TYPE_1__ supported; } ;


 void* FUNC_0 (void**) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 void** VAR_1 ;
 void** VAR_2 ;
 int FUNC_2 (struct at86rf230_local*,int ,unsigned int*) ;

__attribute__((used)) static inline int
FUNC_3(struct at86rf230_local *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 switch (VAR_4) {
 case -98:
  VAR_3->hw->phy->supported.cca_ed_levels = VAR_2;
  VAR_3->hw->phy->supported.cca_ed_levels_size = FUNC_0(VAR_2);
  VAR_3->hw->phy->cca_ed_level = VAR_2[VAR_5];
  break;
 case -100:
  VAR_3->hw->phy->supported.cca_ed_levels = VAR_1;
  VAR_3->hw->phy->supported.cca_ed_levels_size = FUNC_0(VAR_1);
  VAR_3->hw->phy->cca_ed_level = VAR_1[VAR_5];
  break;
 default:
  FUNC_1(1);
 }

 return 0;
}
