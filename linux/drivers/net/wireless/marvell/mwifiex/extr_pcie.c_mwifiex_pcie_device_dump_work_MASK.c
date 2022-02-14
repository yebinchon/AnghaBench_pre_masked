
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int devdump_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mwifiex_adapter *VAR_2)
{
 VAR_2->devdump_data = FUNC_5(VAR_1);
 if (!VAR_2->devdump_data) {
  FUNC_0(VAR_2, VAR_0,
       "vzalloc devdump data failure!\n");
  return;
 }

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
}
