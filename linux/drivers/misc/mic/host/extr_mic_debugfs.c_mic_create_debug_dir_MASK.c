
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_device {int dbg_dir; int id; } ;
typedef int name ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,struct mic_device*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,char*,int ) ;

void FUNC_3(struct mic_device *VAR_4)
{
 char VAR_5[16];

 if (!VAR_0)
  return;

 FUNC_2(VAR_5, sizeof(VAR_5), "mic%d", VAR_4->id);
 VAR_4->dbg_dir = FUNC_0(VAR_5, VAR_0);

 FUNC_1("smpt", 0444, VAR_4->dbg_dir, VAR_4,
       &VAR_3);

 FUNC_1("post_code", 0444, VAR_4->dbg_dir, VAR_4,
       &VAR_2);

 FUNC_1("msi_irq_info", 0444, VAR_4->dbg_dir, VAR_4,
       &VAR_1);
}
