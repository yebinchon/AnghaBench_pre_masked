
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sup_chars; } ;
struct TYPE_4__ {int supported_funcs; } ;
struct TYPE_6__ {TYPE_2__ vnicc; TYPE_1__ sbp; } ;
struct qeth_card {TYPE_3__ options; } ;


 int FUNC_0 (struct qeth_card*,int,int *,int) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;

__attribute__((used)) static void FUNC_2(struct qeth_card *VAR_0)
{

 FUNC_1(VAR_0, 2, "featuSBP");
 FUNC_0(VAR_0, 2, &VAR_0->options.sbp.supported_funcs,
        sizeof(VAR_0->options.sbp.supported_funcs));

 FUNC_1(VAR_0, 2, "feaVNICC");
 FUNC_0(VAR_0, 2, &VAR_0->options.vnicc.sup_chars,
        sizeof(VAR_0->options.vnicc.sup_chars));
}
