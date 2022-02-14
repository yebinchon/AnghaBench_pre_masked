
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct netxen_adapter {int dummy; } ;


 int FUNC_0 (struct netxen_adapter*,int,int *,size_t) ;
 int FUNC_1 (struct netxen_adapter*) ;
 int FUNC_2 (struct netxen_adapter*) ;

int
FUNC_3(struct netxen_adapter *VAR_0, int VAR_1,
    u8 *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_0);
 return VAR_4;
}
