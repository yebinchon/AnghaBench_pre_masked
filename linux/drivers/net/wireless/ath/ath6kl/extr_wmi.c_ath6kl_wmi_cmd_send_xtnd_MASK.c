
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmix_cmd_hdr {int cmd_id; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum wmix_command_id { ____Placeholder_wmix_command_id } wmix_command_id ;
typedef enum wmi_sync_flag { ____Placeholder_wmi_sync_flag } wmi_sync_flag ;


 int VAR_0 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct wmi *VAR_1, struct sk_buff *VAR_2,
        enum wmix_command_id VAR_3,
        enum wmi_sync_flag VAR_4)
{
 struct wmix_cmd_hdr *VAR_5;
 int VAR_6;

 FUNC_2(VAR_2, sizeof(struct wmix_cmd_hdr));

 VAR_5 = (struct wmix_cmd_hdr *) VAR_2->data;
 VAR_5->cmd_id = FUNC_1(VAR_3);

 VAR_6 = FUNC_0(VAR_1, 0, VAR_2, VAR_0, VAR_4);

 return VAR_6;
}
