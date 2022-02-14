
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_info {TYPE_1__* pub; } ;
struct TYPE_2__ {int radio_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_c_info*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool FUNC_2(struct brcms_c_info *VAR_1)
{
 FUNC_0(VAR_1);

 return FUNC_1(VAR_1->pub->radio_disabled, VAR_0) ?
   1 : 0;
}
