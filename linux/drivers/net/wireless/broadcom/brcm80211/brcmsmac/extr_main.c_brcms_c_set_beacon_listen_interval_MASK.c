
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct brcms_c_info {TYPE_1__* pub; int bcn_li_bcn; } ;
struct TYPE_2__ {scalar_t__ up; } ;


 int FUNC_0 (struct brcms_c_info*) ;

void FUNC_1(struct brcms_c_info *VAR_0, u8 VAR_1)
{
 VAR_0->bcn_li_bcn = VAR_1;
 if (VAR_0->pub->up)
  FUNC_0(VAR_0);
}
