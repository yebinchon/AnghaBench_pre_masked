
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct dlm_rsb {int res_length; unsigned char* res_name; int res_flags; int res_toss_time; int res_dir_nodeid; int res_master_nodeid; int res_nodeid; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (struct dlm_rsb*) ;
 int FUNC_4 (struct seq_file*,char*,...) ;
 int FUNC_5 (struct seq_file*,char) ;
 int FUNC_6 (struct seq_file*,char*) ;
 int FUNC_7 (struct dlm_rsb*) ;

__attribute__((used)) static void FUNC_8(struct dlm_rsb *VAR_0, struct seq_file *VAR_1)
{
 int VAR_2 = FUNC_0();
 int VAR_3 = 1;
 int VAR_4;

 FUNC_3(VAR_0);

 FUNC_4(VAR_1, "rsb %p %d %d %d %d %lu %lx %d ",
     VAR_0,
     VAR_0->res_nodeid,
     VAR_0->res_master_nodeid,
     VAR_0->res_dir_nodeid,
     VAR_2,
     VAR_0->res_toss_time,
     VAR_0->res_flags,
     VAR_0->res_length);

 for (VAR_4 = 0; VAR_4 < VAR_0->res_length; VAR_4++) {
  if (!FUNC_1(VAR_0->res_name[VAR_4]) || !FUNC_2(VAR_0->res_name[VAR_4]))
   VAR_3 = 0;
 }

 FUNC_6(VAR_1, VAR_3 ? "str " : "hex");

 for (VAR_4 = 0; VAR_4 < VAR_0->res_length; VAR_4++) {
  if (VAR_3)
   FUNC_4(VAR_1, "%c", VAR_0->res_name[VAR_4]);
  else
   FUNC_4(VAR_1, " %02x", (unsigned char)VAR_0->res_name[VAR_4]);
 }
 FUNC_5(VAR_1, '\n');
 FUNC_7(VAR_0);
}
