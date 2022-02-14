
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int dummy; } ;
struct ccw_device {int dummy; } ;


 struct zfcp_adapter* FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct zfcp_adapter*) ;
 int FUNC_2 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_3 (struct zfcp_adapter*) ;
 int FUNC_4 (struct zfcp_adapter*) ;

__attribute__((used)) static void FUNC_5(struct ccw_device *VAR_0)
{
 struct zfcp_adapter *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return;

 FUNC_2(VAR_1, 0, "ccshut1");
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_1(VAR_1);
}
