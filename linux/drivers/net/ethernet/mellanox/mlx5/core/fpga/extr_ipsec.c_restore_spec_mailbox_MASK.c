
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mailbox_mod {scalar_t__ saved_esp_id; int saved_action; int saved_outer_esp_spi_value; } ;
struct TYPE_2__ {uintptr_t esp_id; int action; } ;
struct fs_fte {TYPE_1__ action; int val; } ;


 char* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct fs_fte *VAR_4,
     struct mailbox_mod *VAR_5)
{
 char *VAR_6 = FUNC_0(VAR_0,
        VAR_4->val,
        VAR_2);

 FUNC_1(VAR_1, VAR_6, VAR_3,
   VAR_5->saved_outer_esp_spi_value);
 VAR_4->action.action |= VAR_5->saved_action;
 VAR_4->action.esp_id = (uintptr_t)VAR_5->saved_esp_id;
}
