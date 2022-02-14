
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int mtu; } ;
struct amd8111e_priv {int options; scalar_t__ rx_buff_len; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct amd8111e_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_4)
{
 struct amd8111e_priv *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6 = VAR_4->mtu;

 if (VAR_6 > VAR_0){



  VAR_5->rx_buff_len = VAR_6 + VAR_1 + 10;
  VAR_5->options |= VAR_2;
 } else{
  VAR_5->rx_buff_len = VAR_3;
  VAR_5->options &= ~VAR_2;
 }
}
