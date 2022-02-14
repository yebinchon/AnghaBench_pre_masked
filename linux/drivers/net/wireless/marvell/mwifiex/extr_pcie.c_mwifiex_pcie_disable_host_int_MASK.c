
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int tx_hw_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_3 (struct mwifiex_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_adapter *VAR_2)
{
 if (FUNC_2(VAR_2)) {
  if (FUNC_3(VAR_2, VAR_1,
          0x00000000)) {
   FUNC_1(VAR_2, VAR_0,
        "Disable host interrupt failed\n");
   return -1;
  }
 }

 FUNC_0(&VAR_2->tx_hw_pending, 0);
 return 0;
}
