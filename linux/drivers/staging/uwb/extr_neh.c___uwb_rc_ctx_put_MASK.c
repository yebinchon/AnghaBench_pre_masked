
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rc_neh {int context; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {int ctx_bm; TYPE_1__ uwb_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*,char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static
void FUNC_4(struct uwb_rc *VAR_0, struct uwb_rc_neh *VAR_1)
{
 struct device *VAR_2 = &VAR_0->uwb_dev.dev;
 if (VAR_1->context == 0)
  return;
 if (FUNC_3(VAR_1->context, VAR_0->ctx_bm) == 0) {
  FUNC_2(VAR_2, "context %u not set in bitmap\n",
   VAR_1->context);
  FUNC_0(1);
 }
 FUNC_1(VAR_1->context, VAR_0->ctx_bm);
 VAR_1->context = 0;
}
