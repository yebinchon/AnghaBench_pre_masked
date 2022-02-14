
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_lun_data {struct esp_cmd_entry* non_tagged_cmd; int num_tagged; struct esp_cmd_entry** tagged_cmds; } ;
struct esp_cmd_entry {int* orig_tag; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct esp_cmd_entry *VAR_0,
        struct esp_lun_data *VAR_1)
{
 if (VAR_0->orig_tag[0]) {
  FUNC_0(VAR_1->tagged_cmds[VAR_0->orig_tag[1]] != VAR_0);
  VAR_1->tagged_cmds[VAR_0->orig_tag[1]] = ((void*)0);
  VAR_1->num_tagged--;
 } else {
  FUNC_0(VAR_1->non_tagged_cmd != VAR_0);
  VAR_1->non_tagged_cmd = ((void*)0);
 }
}
