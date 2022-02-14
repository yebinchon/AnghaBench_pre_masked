
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_cmd_config_fwlog {int threshold; int output; int timestamp; int log_severity; int logger_mode; } ;
struct TYPE_3__ {int threshold; int output; int timestamp; int severity; int mode; } ;
struct TYPE_4__ {TYPE_1__ fwlog; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl12xx_cmd_config_fwlog*) ;
 struct wl12xx_cmd_config_fwlog* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl12xx_cmd_config_fwlog*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4)
{
 struct wl12xx_cmd_config_fwlog *VAR_5;
 int VAR_6 = 0;

 FUNC_3(VAR_1, "cmd config firmware logger");

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_5->logger_mode = VAR_4->conf.fwlog.mode;
 VAR_5->log_severity = VAR_4->conf.fwlog.severity;
 VAR_5->timestamp = VAR_4->conf.fwlog.timestamp;
 VAR_5->output = VAR_4->conf.fwlog.output;
 VAR_5->threshold = VAR_4->conf.fwlog.threshold;

 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_5, sizeof(*VAR_5), 0);
 if (VAR_6 < 0) {
  FUNC_4("failed to send config firmware logger command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_5);

out:
 return VAR_6;
}
