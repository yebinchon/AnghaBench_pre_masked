
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iscsi_endpoint {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,int *,int ) ;
 struct iscsi_endpoint* FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device*) ;

struct iscsi_endpoint *FUNC_3(u64 VAR_2)
{
 struct iscsi_endpoint *VAR_3;
 struct device *VAR_4;

 VAR_4 = FUNC_0(&VAR_0, ((void*)0), &VAR_2,
    VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_4);




 FUNC_2(VAR_4);
 return VAR_3;
}
