
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (struct netxen_adapter*,int ,int) ;
 scalar_t__ FUNC_2 (struct netxen_adapter*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct netxen_adapter *VAR_6,
       int VAR_7, int *VAR_8)
{
 FUNC_1(VAR_6, VAR_2, VAR_7);
 FUNC_1(VAR_6, VAR_3, 0);
 FUNC_1(VAR_6, VAR_1, 3);
 FUNC_1(VAR_6, VAR_4, 0xb);
 if (FUNC_2(VAR_6)) {
  FUNC_3("Error waiting for rom done\n");
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_1, 0);
 FUNC_4(10);
 FUNC_1(VAR_6, VAR_3, 0);

 *VAR_8 = FUNC_0(VAR_6, VAR_5);
 return 0;
}
