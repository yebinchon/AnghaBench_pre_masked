
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int dummy; } ;
struct o2hb_heartbeat_group {struct config_group hs_group; } ;


 int VAR_0 ;
 int FUNC_0 (struct config_group*,char*,int *) ;
 int FUNC_1 (struct o2hb_heartbeat_group*) ;
 struct o2hb_heartbeat_group* FUNC_2 (int,int ) ;
 int VAR_1 ;

struct config_group *FUNC_3(void)
{
 struct o2hb_heartbeat_group *VAR_2 = ((void*)0);
 struct config_group *VAR_3 = ((void*)0);

 VAR_2 = FUNC_2(sizeof(struct o2hb_heartbeat_group), VAR_0);
 if (VAR_2 == ((void*)0))
  goto out;

 FUNC_0(&VAR_2->hs_group, "heartbeat",
        &VAR_1);

 VAR_3 = &VAR_2->hs_group;
out:
 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_2);
 return VAR_3;
}
