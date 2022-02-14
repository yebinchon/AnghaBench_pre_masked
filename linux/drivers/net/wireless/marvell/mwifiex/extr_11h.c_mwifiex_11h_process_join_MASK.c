
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int is_11h_active; } ;
struct mwifiex_private {TYPE_1__ state_11h; } ;
struct mwifiex_bssdescriptor {int cap_info_bitmap; scalar_t__ sensed_11h; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_private*,int) ;
 int FUNC_1 (struct mwifiex_private*,int **,struct mwifiex_bssdescriptor*) ;

void FUNC_2(struct mwifiex_private *VAR_1, u8 **VAR_2,
         struct mwifiex_bssdescriptor *VAR_3)
{
 if (VAR_3->sensed_11h) {



  FUNC_0(VAR_1, 1);
  VAR_1->state_11h.is_11h_active = 1;
  VAR_3->cap_info_bitmap |= VAR_0;
  FUNC_1(VAR_1, VAR_2, VAR_3);
 } else {

  FUNC_0(VAR_1, 0);
  VAR_1->state_11h.is_11h_active = 0;
  VAR_3->cap_info_bitmap &= ~VAR_0;
 }
}
