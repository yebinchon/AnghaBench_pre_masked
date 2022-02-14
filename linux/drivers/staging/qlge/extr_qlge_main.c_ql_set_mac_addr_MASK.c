
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ql_adapter {char* current_mac_addr; int func; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,int ,char*,...) ;
 int FUNC_3 (struct ql_adapter*,int ) ;
 int FUNC_4 (struct ql_adapter*,int ) ;
 int FUNC_5 (struct ql_adapter*,int *,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ql_adapter *VAR_6, int VAR_7)
{
 int VAR_8;
 char VAR_9[VAR_0];
 char *VAR_10;

 if (VAR_7) {
  VAR_10 = &VAR_6->current_mac_addr[0];
  FUNC_2(VAR_6, VAR_5, VAR_1, VAR_6->ndev,
        "Set Mac addr %pM\n", VAR_10);
 } else {
  FUNC_0(VAR_9);
  VAR_10 = &VAR_9[0];
  FUNC_2(VAR_6, VAR_5, VAR_1, VAR_6->ndev,
        "Clearing MAC address\n");
 }
 VAR_8 = FUNC_3(VAR_6, VAR_4);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_5(VAR_6, (u8 *) VAR_10,
   VAR_2, VAR_6->func * VAR_3);
 FUNC_4(VAR_6, VAR_4);
 if (VAR_8)
  FUNC_1(VAR_6, VAR_5, VAR_6->ndev,
     "Failed to init mac address.\n");
 return VAR_8;
}
