
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_bus {TYPE_2__* drvr; } ;
struct brcmf_bcdc {int fws; } ;
struct TYPE_4__ {TYPE_1__* proto; } ;
struct TYPE_3__ {struct brcmf_bcdc* pd; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,struct sk_buff*,struct brcmf_if**) ;
 int FUNC_3 (struct brcmf_if*,struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct brcmf_bus* FUNC_5 (struct device*) ;

void
FUNC_6(struct device *VAR_0, struct sk_buff *VAR_1,
       bool VAR_2)
{
 struct brcmf_bus *VAR_3 = FUNC_5(VAR_0);
 struct brcmf_bcdc *VAR_4 = VAR_3->drvr->proto->pd;
 struct brcmf_if *VAR_5;


 if (FUNC_1(VAR_4->fws)) {
  if (!VAR_2)
   FUNC_0(VAR_4->fws, VAR_1);
 } else {
  if (FUNC_2(VAR_3->drvr, 0, VAR_1, &VAR_5))
   FUNC_4(VAR_1);
  else
   FUNC_3(VAR_5, VAR_1, VAR_2);
 }
}
