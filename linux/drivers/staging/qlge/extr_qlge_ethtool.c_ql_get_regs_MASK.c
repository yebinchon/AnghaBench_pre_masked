
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_reg_dump {int dummy; } ;
struct ql_mpi_coredump {int dummy; } ;
struct ql_adapter {int flags; scalar_t__ core_is_dumped; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int len; } ;


 int VAR_0 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,void*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
   struct ethtool_regs *VAR_2, void *VAR_3)
{
 struct ql_adapter *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_4, VAR_3);
 VAR_4->core_is_dumped = 0;
 if (!FUNC_2(VAR_0, &VAR_4->flags))
  VAR_2->len = sizeof(struct ql_mpi_coredump);
 else
  VAR_2->len = sizeof(struct ql_reg_dump);
}
