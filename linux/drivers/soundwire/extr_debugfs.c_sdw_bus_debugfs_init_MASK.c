
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_bus {int link_id; int debugfs; } ;
typedef int name ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,int) ;

void FUNC_2(struct sdw_bus *VAR_1)
{
 char VAR_2[16];

 if (!VAR_0)
  return;


 FUNC_1(VAR_2, sizeof(VAR_2), "master-%d", VAR_1->link_id);
 VAR_1->debugfs = FUNC_0(VAR_2, VAR_0);
}
