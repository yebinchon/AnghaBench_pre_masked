
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int dummy; } ;
struct ccw_device {int dummy; } ;


 struct zfcp_adapter* FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct zfcp_adapter*) ;
 int FUNC_2 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_3 (struct zfcp_adapter*,int) ;
 int FUNC_4 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_5(struct ccw_device *VAR_0, int VAR_1, char *VAR_2)
{
 struct zfcp_adapter *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3)
  return 0;

 FUNC_3(VAR_3, VAR_1);
 FUNC_2(VAR_3, 0, VAR_2);
 FUNC_4(VAR_3);

 FUNC_1(VAR_3);
 return 0;
}
