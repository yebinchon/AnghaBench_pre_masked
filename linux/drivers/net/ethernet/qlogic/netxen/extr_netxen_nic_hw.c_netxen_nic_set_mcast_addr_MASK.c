
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct netxen_adapter {int physical_port; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct netxen_adapter*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_4(struct netxen_adapter *VAR_0,
  int VAR_1, u8 *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0;
 u16 VAR_5 = VAR_0->physical_port;

 VAR_4 = FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_2);

 FUNC_3(VAR_0, FUNC_2(VAR_5, VAR_1), VAR_3);
 FUNC_3(VAR_0, FUNC_2(VAR_5, VAR_1)+4, VAR_4);

 return 0;
}
