
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bus_flash_session {int target_id; } ;
struct device {int dummy; } ;


 struct iscsi_bus_flash_session* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct iscsi_bus_flash_session *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 if (!FUNC_1(VAR_0, ((void*)0)))
  goto exit_match_index;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = (VAR_2->target_id == *((int *)VAR_1)) ? 1 : 0;

exit_match_index:
 return VAR_3;
}
