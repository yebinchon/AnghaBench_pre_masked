
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_nvm_section {int length; int data; } ;
struct iwl_mvm {struct iwl_nvm_section* nvm_sections; TYPE_1__* trans; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct iwl_nvm_section*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct iwl_mvm*,char*,int) ;
 int FUNC_3 (struct iwl_mvm*,int,int ,int ) ;

int FUNC_4(struct iwl_mvm *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 struct iwl_nvm_section *VAR_3 = VAR_0->nvm_sections;

 FUNC_1(VAR_0->trans->dev, "'Write to NVM\n");

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->nvm_sections); VAR_1++) {
  if (!VAR_0->nvm_sections[VAR_1].data || !VAR_0->nvm_sections[VAR_1].length)
   continue;
  VAR_2 = FUNC_3(VAR_0, VAR_1, VAR_3[VAR_1].data,
         VAR_3[VAR_1].length);
  if (VAR_2 < 0) {
   FUNC_2(VAR_0, "iwl_mvm_send_cmd failed: %d\n", VAR_2);
   break;
  }
 }
 return VAR_2;
}
