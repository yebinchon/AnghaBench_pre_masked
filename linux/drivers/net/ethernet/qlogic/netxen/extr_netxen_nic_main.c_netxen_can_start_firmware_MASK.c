
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int dummy; } ;


 int FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (struct netxen_adapter*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct netxen_adapter*) ;
 int FUNC_3 (struct netxen_adapter*) ;
 int FUNC_4 (struct netxen_adapter*) ;

__attribute__((used)) static int
FUNC_5(struct netxen_adapter *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 if (FUNC_2(VAR_4)) {
  FUNC_4(VAR_4);
  return -1;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_0);

 if ((VAR_5 < 0) || (VAR_5 >= VAR_3))
  VAR_5 = 0;

 if (VAR_5 == 0) {
  VAR_6 = 1;
  FUNC_1(VAR_4, VAR_1, VAR_2);
 }

 FUNC_1(VAR_4, VAR_0, ++VAR_5);

 FUNC_3(VAR_4);

 return VAR_6;
}
