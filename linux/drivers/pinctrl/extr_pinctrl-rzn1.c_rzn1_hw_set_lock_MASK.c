
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rzn1_pinctrl {int lev1_protect_phys; int lev2_protect_phys; TYPE_1__* lev2; TYPE_2__* lev1; } ;
struct TYPE_4__ {int status_protect; } ;
struct TYPE_3__ {int status_protect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct rzn1_pinctrl *VAR_2, u8 VAR_3, u8 VAR_4)
{





 if (VAR_3 & VAR_0) {
  u32 VAR_5 = VAR_2->lev1_protect_phys | !(VAR_4 & VAR_0);

  FUNC_0(VAR_5, &VAR_2->lev1->status_protect);
 }

 if (VAR_3 & VAR_1) {
  u32 VAR_6 = VAR_2->lev2_protect_phys | !(VAR_4 & VAR_1);

  FUNC_0(VAR_6, &VAR_2->lev2->status_protect);
 }
}
