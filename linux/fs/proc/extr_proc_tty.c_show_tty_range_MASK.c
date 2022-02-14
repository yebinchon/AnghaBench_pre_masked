
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {char* driver_name; int num; int type; scalar_t__ subtype; int name; } ;
struct seq_file {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_5, struct tty_driver *VAR_6,
 dev_t VAR_7, int VAR_8)
{
 FUNC_2(VAR_5, "%-20s ", VAR_6->driver_name ? VAR_6->driver_name : "unknown");
 FUNC_2(VAR_5, "/dev/%-8s ", VAR_6->name);
 if (VAR_6->num > 1) {
  FUNC_2(VAR_5, "%3d %d-%d ", FUNC_0(VAR_7), FUNC_1(VAR_7),
   FUNC_1(VAR_7) + VAR_8 - 1);
 } else {
  FUNC_2(VAR_5, "%3d %7d ", FUNC_0(VAR_7), FUNC_1(VAR_7));
 }
 switch (VAR_6->type) {
 case 128:
  FUNC_4(VAR_5, "system");
  if (VAR_6->subtype == VAR_4)
   FUNC_4(VAR_5, ":/dev/tty");
  else if (VAR_6->subtype == VAR_3)
   FUNC_4(VAR_5, ":console");
  else if (VAR_6->subtype == VAR_2)
   FUNC_4(VAR_5, ":vtmaster");
  break;
 case 131:
  FUNC_4(VAR_5, "console");
  break;
 case 129:
  FUNC_4(VAR_5, "serial");
  break;
 case 130:
  if (VAR_6->subtype == VAR_0)
   FUNC_4(VAR_5, "pty:master");
  else if (VAR_6->subtype == VAR_1)
   FUNC_4(VAR_5, "pty:slave");
  else
   FUNC_4(VAR_5, "pty");
  break;
 default:
  FUNC_2(VAR_5, "type:%d.%d", VAR_6->type, VAR_6->subtype);
 }
 FUNC_3(VAR_5, '\n');
}
