
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct i40e_rx_flow_userdef {int flex_word; int flex_offset; int flex_filter; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ethtool_rx_flow_spec {int flow_type; TYPE_2__ m_ext; TYPE_1__ h_ext; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct i40e_rx_flow_userdef*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ethtool_rx_flow_spec *VAR_5,
     struct i40e_rx_flow_userdef *VAR_6)
{
 u64 VAR_7, VAR_8;
 int VAR_9;


 FUNC_2(VAR_6, 0, sizeof(*VAR_6));

 if (!(VAR_5->flow_type & VAR_1))
  return 0;

 VAR_7 = FUNC_0(*((__be64 *)VAR_5->h_ext.data));
 VAR_8 = FUNC_0(*((__be64 *)VAR_5->m_ext.data));





 VAR_9 = FUNC_1(VAR_8, FUNC_0(31, 0));
 if (VAR_9 < 0) {
  return -VAR_0;
 } else if (VAR_9) {
  VAR_6->flex_word = VAR_7 & FUNC_0(15, 0);
  VAR_6->flex_offset =
   (VAR_7 & FUNC_0(31, 16)) >> 16;
  VAR_6->flex_filter = 1;
 }

 return 0;
}
