
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct i40e_rx_flow_userdef {int flex_word; scalar_t__ flex_offset; scalar_t__ flex_filter; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ethtool_rx_flow_spec {TYPE_2__ m_ext; TYPE_1__ h_ext; int flow_type; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ethtool_rx_flow_spec *VAR_2,
     struct i40e_rx_flow_userdef *VAR_3)
{
 u64 VAR_4 = 0, VAR_5 = 0;

 if (VAR_3->flex_filter) {
  VAR_4 |= VAR_3->flex_word;
  VAR_4 |= (u64)VAR_3->flex_offset << 16;
  VAR_5 |= VAR_1;
 }

 if (VAR_4 || VAR_5)
  VAR_2->flow_type |= VAR_0;

 *((__be64 *)VAR_2->h_ext.data) = FUNC_0(VAR_4);
 *((__be64 *)VAR_2->m_ext.data) = FUNC_0(VAR_5);
}
