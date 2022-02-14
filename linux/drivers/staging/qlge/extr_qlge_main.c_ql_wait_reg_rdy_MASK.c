
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*,int,...) ;
 int VAR_4 ;
 int FUNC_1 (struct ql_adapter*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct ql_adapter *VAR_5, u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 u32 VAR_9;
 int VAR_10 = VAR_2;

 while (VAR_10) {
  VAR_9 = FUNC_1(VAR_5, VAR_6);


  if (VAR_9 & VAR_8) {
   FUNC_0(VAR_5, VAR_4, VAR_5->ndev,
        "register 0x%.08x access error, value = 0x%.08x!.\n",
        VAR_6, VAR_9);
   return -VAR_0;
  } else if (VAR_9 & VAR_7)
   return 0;
  FUNC_2(VAR_3);
  VAR_10--;
 }
 FUNC_0(VAR_5, VAR_4, VAR_5->ndev,
      "Timed out waiting for reg %x to come ready.\n", VAR_6);
 return -VAR_1;
}
