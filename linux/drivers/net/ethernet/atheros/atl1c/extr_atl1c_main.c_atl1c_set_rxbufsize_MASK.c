
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct net_device {int mtu; } ;
struct atl1c_adapter {int rx_buffer_len; int rx_frag_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct atl1c_adapter *VAR_5,
    struct net_device *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8 = VAR_6->mtu;

 VAR_5->rx_buffer_len = VAR_8 > VAR_0 ?
  FUNC_1(VAR_8 + VAR_2 + VAR_1 + VAR_4, 8) : VAR_0;

 VAR_7 = FUNC_0(VAR_5->rx_buffer_len + VAR_3) +
      FUNC_0(sizeof(struct skb_shared_info));
 VAR_5->rx_frag_size = FUNC_2(VAR_7);
}
