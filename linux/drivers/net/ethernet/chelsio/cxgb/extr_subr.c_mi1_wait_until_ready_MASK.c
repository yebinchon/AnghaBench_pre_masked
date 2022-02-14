
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(adapter_t *VAR_1, int VAR_2)
{
 int VAR_3 = 100, VAR_4;

 do {
  u32 VAR_5;

  FUNC_0(VAR_1, VAR_2, &VAR_5);
  VAR_4 = VAR_5 & VAR_0;
  if (VAR_4)
   FUNC_2(10);
 } while (VAR_4 && --VAR_3);
 if (VAR_4)
  FUNC_1("%s: MDIO operation timed out\n", VAR_1->name);
 return VAR_4;
}
