
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_c_info {TYPE_2__* pub; TYPE_1__* stf; } ;
struct TYPE_4__ {scalar_t__ up; } ;
struct TYPE_3__ {int rxstreams; } ;


 scalar_t__ FUNC_0 (struct brcms_c_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct brcms_c_info*) ;
 int FUNC_2 (struct brcms_c_info*,int) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_1, int VAR_2)
{

 if (FUNC_0(VAR_1)) {
  if ((VAR_1->stf->rxstreams == 1) && (VAR_2 != VAR_0))
   return;
 }

 if (VAR_1->pub->up) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_1, 1);
 }
}
