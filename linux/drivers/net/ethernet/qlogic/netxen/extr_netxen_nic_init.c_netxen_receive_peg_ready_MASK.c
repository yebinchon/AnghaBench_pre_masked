
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netxen_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct netxen_adapter*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct netxen_adapter *VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5 = 2000;

 do {
  VAR_4 = FUNC_0(VAR_3, VAR_0);

  if (VAR_4 == VAR_2)
   return 0;

  FUNC_1(10);

 } while (--VAR_5);

 FUNC_2("Receive Peg initialization not complete, state: 0x%x.\n", VAR_4);
 return -VAR_1;
}
