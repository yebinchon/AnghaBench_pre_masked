
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct seq_file {int dummy; } ;
struct ahc_transinfo {scalar_t__ offset; int width; int ppr_options; int period; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void
FUNC_4(struct seq_file *VAR_1, struct ahc_transinfo *VAR_2)
{
 u_int VAR_3;
 u_int VAR_4;
 u_int VAR_5;

        VAR_3 = 3300;
        VAR_4 = 0;
 if (VAR_2->offset != 0) {
  VAR_4 = FUNC_0(VAR_2->period);
  VAR_3 = VAR_4;
 }
 VAR_3 *= (0x01 << VAR_2->width);
        VAR_5 = VAR_3 / 1000;
        if (VAR_5 > 0)
  FUNC_1(VAR_1, "%d.%03dMB/s transfers", VAR_5, VAR_3 % 1000);
        else
  FUNC_1(VAR_1, "%dKB/s transfers", VAR_3);

 if (VAR_4 != 0) {
  FUNC_1(VAR_1, " (%d.%03dMHz%s, offset %d",
    VAR_4 / 1000, VAR_4 % 1000,
    (VAR_2->ppr_options & VAR_0) != 0
    ? " DT" : "", VAR_2->offset);
 }

 if (VAR_2->width > 0) {
  if (VAR_4 != 0) {
   FUNC_3(VAR_1, ", ");
  } else {
   FUNC_3(VAR_1, " (");
  }
  FUNC_1(VAR_1, "%dbit)", 8 * (0x01 << VAR_2->width));
 } else if (VAR_4 != 0) {
  FUNC_2(VAR_1, ')');
 }
 FUNC_2(VAR_1, '\n');
}
