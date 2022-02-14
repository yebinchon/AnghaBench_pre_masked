
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netxen_adapter {int dummy; } ;


 int FUNC_0 (struct netxen_adapter*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32
FUNC_3(struct netxen_adapter *VAR_4)
{
 u32 VAR_5 = VAR_1;
 int VAR_6 = 0;

 do {

  FUNC_2(1);

  if (++VAR_6 > VAR_3)
   return VAR_2;

  VAR_5 = FUNC_0(VAR_4, VAR_0);
 } while (!FUNC_1(VAR_5));

 return VAR_5;
}
