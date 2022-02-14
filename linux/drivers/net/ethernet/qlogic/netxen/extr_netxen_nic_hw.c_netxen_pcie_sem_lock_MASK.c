
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netxen_adapter {int portnum; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct netxen_adapter*,int ) ;
 int FUNC_2 (struct netxen_adapter*,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int
FUNC_5(struct netxen_adapter *VAR_2, int VAR_3, u32 VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;

 while (!VAR_5) {
  VAR_5 = FUNC_1(VAR_2, FUNC_0(FUNC_3(VAR_3)));
  if (VAR_5 == 1)
   break;
  if (++VAR_6 >= VAR_1)
   return -VAR_0;
  FUNC_4(1);
 }

 if (VAR_4)
  FUNC_2(VAR_2, VAR_4, VAR_2->portnum);

 return 0;
}
