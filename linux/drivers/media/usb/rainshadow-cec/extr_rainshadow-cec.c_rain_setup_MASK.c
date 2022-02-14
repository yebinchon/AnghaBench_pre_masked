
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct serio {int dummy; } ;
struct rain {scalar_t__ cmd_reply; int dev; } ;
struct cec_log_addrs {int dummy; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct rain*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct rain *VAR_0, struct serio *VAR_1,
   struct cec_log_addrs *VAR_2, u16 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, "R", "REV");
 if (VAR_4)
  return VAR_4;
 FUNC_0(VAR_0->dev, "Firmware version %s\n", VAR_0->cmd_reply + 4);

 VAR_4 = FUNC_1(VAR_0, "Q 1", "QTY");
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_0, "c0000", "CFG");
 if (VAR_4)
  return VAR_4;
 return FUNC_1(VAR_0, "A F 0000", "ADR");
}
