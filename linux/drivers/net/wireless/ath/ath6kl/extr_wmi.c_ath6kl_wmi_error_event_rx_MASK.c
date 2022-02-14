
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_cmd_error_event {int err_code; int cmd_id; } ;
struct wmi {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int ,char const*) ;

__attribute__((used)) static int FUNC_1(struct wmi *VAR_1, u8 *VAR_2, int VAR_3)
{
 const char *VAR_4 = "unknown error";
 struct wmi_cmd_error_event *VAR_5;
 VAR_5 = (struct wmi_cmd_error_event *) VAR_2;

 switch (VAR_5->err_code) {
 case 128:
  VAR_4 = "invalid parameter";
  break;
 case 130:
  VAR_4 = "invalid state";
  break;
 case 129:
  VAR_4 = "internal error";
  break;
 }

 FUNC_0(VAR_0, "programming error, cmd=%d %s\n",
     VAR_5->cmd_id, VAR_4);

 return 0;
}
