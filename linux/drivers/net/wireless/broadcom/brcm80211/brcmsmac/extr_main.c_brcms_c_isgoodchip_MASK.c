
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_hardware {int corerev; TYPE_1__* wlc; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static bool FUNC_2(struct brcms_hardware *VAR_1)
{


 if (!FUNC_0(VAR_0, VAR_1->corerev)) {
  FUNC_1(VAR_1->wlc->wiphy, "unsupported core rev %d\n",
     VAR_1->corerev);
  return 0;
 }

 return 1;
}
