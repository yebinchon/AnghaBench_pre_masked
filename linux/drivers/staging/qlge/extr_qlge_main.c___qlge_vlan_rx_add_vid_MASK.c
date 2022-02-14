
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_3, u16 VAR_4)
{
 u32 VAR_5 = VAR_0;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, (u8 *) &VAR_5,
      VAR_1, VAR_4);
 if (VAR_6)
  FUNC_0(VAR_3, VAR_2, VAR_3->ndev,
     "Failed to init vlan address.\n");
 return VAR_6;
}
