
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_c_info {int band; TYPE_1__* stf; int cmi; int chanspec; } ;
struct TYPE_2__ {int ss_algo_channel; scalar_t__ ss_algosel_auto; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct brcms_c_info*,int *,int ) ;
 int FUNC_2 (struct brcms_c_info*,int ) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_1,
         u16 VAR_2)
{

 VAR_1->chanspec = VAR_2;


 FUNC_0(VAR_1->cmi, VAR_2, VAR_0);

 if (VAR_1->stf->ss_algosel_auto)
  FUNC_1(VAR_1, &VAR_1->stf->ss_algo_channel,
         VAR_2);

 FUNC_2(VAR_1, VAR_1->band);
}
