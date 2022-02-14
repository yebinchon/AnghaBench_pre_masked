
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int scan_work; } ;
struct ccw_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct zfcp_adapter* FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct zfcp_adapter*) ;
 int FUNC_4 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_5 (struct zfcp_adapter*,int) ;
 int FUNC_6 (struct zfcp_adapter*,int ) ;
 int FUNC_7 (struct zfcp_adapter*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct ccw_device *VAR_2, int VAR_3, char *VAR_4)
{
 struct zfcp_adapter *VAR_5 = FUNC_2(VAR_2);

 if (!VAR_5)
  return 0;

 FUNC_5(VAR_5, VAR_3);
 FUNC_6(VAR_5, VAR_1);
 FUNC_4(VAR_5, VAR_0,
    VAR_4);
 FUNC_1(FUNC_8());
 FUNC_7(VAR_5);
 FUNC_0(&VAR_5->scan_work);

 FUNC_3(VAR_5);

 return 0;
}
