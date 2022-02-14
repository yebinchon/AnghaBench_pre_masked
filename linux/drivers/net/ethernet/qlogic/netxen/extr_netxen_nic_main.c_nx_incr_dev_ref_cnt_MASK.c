
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (struct netxen_adapter*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct netxen_adapter*) ;
 int FUNC_3 (struct netxen_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct netxen_adapter *VAR_2)
{
 int VAR_3;
 if (FUNC_2(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_2, VAR_1, ++VAR_3);

 FUNC_3(VAR_2);
 return VAR_3;
}
