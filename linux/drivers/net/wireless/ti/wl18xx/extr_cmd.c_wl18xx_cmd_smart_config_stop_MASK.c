
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271_cmd_header {int dummy; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1271_cmd_header*) ;
 struct wl1271_cmd_header* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl1271_cmd_header*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4)
{
 struct wl1271_cmd_header *VAR_5;
 int VAR_6 = 0;

 FUNC_3(VAR_1, "cmd smart config stop");

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_5, sizeof(*VAR_5), 0);
 if (VAR_6 < 0) {
  FUNC_4("failed to send smart config stop command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_5);
out:
 return VAR_6;
}
