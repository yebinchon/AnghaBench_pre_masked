
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_3)
{
 if (FUNC_1(VAR_3)) {

  if (FUNC_2(VAR_3, VAR_2,
          VAR_1)) {
   FUNC_0(VAR_3, VAR_0,
        "Enable host interrupt failed\n");
   return -1;
  }
 }

 return 0;
}
