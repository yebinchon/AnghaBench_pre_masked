
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_2, u16 VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, (u8 *) &VAR_4,
      VAR_0, VAR_3);
 if (VAR_5)
  FUNC_0(VAR_2, VAR_1, VAR_2->ndev,
     "Failed to clear vlan address.\n");
 return VAR_5;
}
