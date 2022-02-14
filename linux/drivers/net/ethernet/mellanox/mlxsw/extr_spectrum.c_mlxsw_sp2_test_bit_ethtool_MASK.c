
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_port_link_mode {int m_ethtool_len; int * mask_ethtool; } ;


 scalar_t__ FUNC_0 (int ,unsigned long const*) ;

__attribute__((used)) static bool
FUNC_1(const struct mlxsw_sp2_port_link_mode *VAR_0,
      const unsigned long *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->m_ethtool_len; VAR_3++) {
  if (FUNC_0(VAR_0->mask_ethtool[VAR_3], VAR_1))
   VAR_2++;
 }

 return VAR_2 == VAR_0->m_ethtool_len;
}
