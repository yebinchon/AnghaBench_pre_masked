
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rs_rate {int index; int type; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {struct iwl_mvm* drv; } ;
struct iwl_lq_sta {TYPE_1__ pers; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,int,int,int ) ;
 int FUNC_1 (struct iwl_lq_sta*,struct rs_rate*) ;

__attribute__((used)) static bool FUNC_2(struct iwl_lq_sta *VAR_1,
     struct rs_rate *VAR_2)
{
 u8 VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 struct iwl_mvm *VAR_6 = VAR_1->pers.drv;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 VAR_4 = FUNC_0(VAR_6, VAR_2->index, VAR_5,
     VAR_2->type);
 VAR_3 = VAR_4 & 0xff;


 if (VAR_3 == VAR_0)
  return 1;

 VAR_2->index = VAR_3;
 return 0;
}
