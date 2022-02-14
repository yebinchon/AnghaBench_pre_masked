
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int dummy; } ;
struct net_device {int dummy; } ;


 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*) ;
 int FUNC_3 (struct ql_adapter*) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 int VAR_1 = 0;
 struct ql_adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_1 = FUNC_1(VAR_2);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_3(VAR_2);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_4(VAR_2);
 if (VAR_1)
  goto error_up;

 VAR_1 = FUNC_2(VAR_2);
 if (VAR_1)
  goto error_up;

 return VAR_1;

error_up:
 FUNC_5(VAR_2);
 return VAR_1;
}
