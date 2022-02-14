
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int ixgbe_dbg_adapter; int pdev; } ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,int,int ,struct ixgbe_adapter*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;

void FUNC_3(struct ixgbe_adapter *VAR_3)
{
 const char *VAR_4 = FUNC_2(VAR_3->pdev);

 VAR_3->ixgbe_dbg_adapter = FUNC_0(VAR_4, VAR_2);
 FUNC_1("reg_ops", 0600, VAR_3->ixgbe_dbg_adapter,
       VAR_3, &VAR_1);
 FUNC_1("netdev_ops", 0600, VAR_3->ixgbe_dbg_adapter,
       VAR_3, &VAR_0);
}
