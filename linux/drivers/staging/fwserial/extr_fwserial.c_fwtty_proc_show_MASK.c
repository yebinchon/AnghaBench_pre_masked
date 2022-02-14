
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct fwtty_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct fwtty_port* FUNC_1 (int) ;
 int FUNC_2 (struct fwtty_port*) ;
 int FUNC_3 (struct seq_file*,struct fwtty_port*) ;
 int FUNC_4 (struct seq_file*,char*,int) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_2, void *VAR_3)
{
 struct fwtty_port *VAR_4;
 int VAR_5;

 FUNC_5(VAR_2, "fwserinfo: 1.0 driver: 1.0\n");
 for (VAR_5 = 0; VAR_5 < VAR_1 && (VAR_4 = FUNC_1(VAR_5)); ++VAR_5) {
  FUNC_4(VAR_2, "%2d:", VAR_5);
  if (FUNC_0(VAR_0))
   FUNC_3(VAR_2, VAR_4);
  FUNC_2(VAR_4);
  FUNC_5(VAR_2, "\n");
 }
 return 0;
}
