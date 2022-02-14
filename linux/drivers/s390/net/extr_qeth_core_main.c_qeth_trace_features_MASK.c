
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int diagass_support; } ;
struct TYPE_4__ {int adp; int ipa6; int ipa4; } ;
struct qeth_card {TYPE_1__ info; TYPE_2__ options; } ;


 int FUNC_0 (struct qeth_card*,int,int *,int) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;

void FUNC_2(struct qeth_card *VAR_0)
{
 FUNC_1(VAR_0, 2, "features");
 FUNC_0(VAR_0, 2, &VAR_0->options.ipa4, sizeof(VAR_0->options.ipa4));
 FUNC_0(VAR_0, 2, &VAR_0->options.ipa6, sizeof(VAR_0->options.ipa6));
 FUNC_0(VAR_0, 2, &VAR_0->options.adp, sizeof(VAR_0->options.adp));
 FUNC_0(VAR_0, 2, &VAR_0->info.diagass_support,
        sizeof(VAR_0->info.diagass_support));
}
