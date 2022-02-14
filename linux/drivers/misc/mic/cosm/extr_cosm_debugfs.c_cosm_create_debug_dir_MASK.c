
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosm_device {int dbg_dir; int index; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,struct cosm_device*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*,int ) ;

void FUNC_3(struct cosm_device *VAR_3)
{
 char VAR_4[16];

 if (!VAR_0)
  return;

 FUNC_2(VAR_4, sizeof(VAR_4), "mic%d", VAR_3->index);
 VAR_3->dbg_dir = FUNC_0(VAR_4, VAR_0);

 FUNC_1("log_buf", 0444, VAR_3->dbg_dir, VAR_3,
       &VAR_2);
 FUNC_1("force_reset", 0444, VAR_3->dbg_dir, VAR_3,
       &VAR_1);
}
