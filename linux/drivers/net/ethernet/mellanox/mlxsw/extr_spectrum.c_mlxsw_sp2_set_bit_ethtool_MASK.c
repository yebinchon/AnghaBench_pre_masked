
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_port_link_mode {int m_ethtool_len; int * mask_ethtool; } ;


 int FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static void
FUNC_1(const struct mlxsw_sp2_port_link_mode *VAR_0,
     unsigned long *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->m_ethtool_len; VAR_2++)
  FUNC_0(VAR_0->mask_ethtool[VAR_2], VAR_1);
}
