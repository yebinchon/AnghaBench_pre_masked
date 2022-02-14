
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (struct netxen_adapter*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct netxen_adapter*) ;
 int FUNC_4 (struct netxen_adapter*) ;

__attribute__((used)) static int
FUNC_5(struct netxen_adapter *VAR_5)
{
 int VAR_6, VAR_7;
 if (FUNC_3(VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 FUNC_2(VAR_6 == 0);

 FUNC_1(VAR_5, VAR_1, --VAR_6);
 VAR_7 = FUNC_0(VAR_5, VAR_2);

 if (VAR_6 == 0 && VAR_7 != VAR_4)
  FUNC_1(VAR_5, VAR_2, VAR_3);

 FUNC_4(VAR_5);
 return VAR_6;
}
