
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis190_private {unsigned int rx_buf_sz; } ;
struct net_device {unsigned int mtu; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct sis190_private *VAR_3,
     struct net_device *VAR_4)
{
 unsigned int VAR_5 = VAR_4->mtu;

 VAR_3->rx_buf_sz = (VAR_5 > VAR_2) ? VAR_5 + VAR_0 + 8 : VAR_2;

 if (VAR_3->rx_buf_sz & 0x07) {
  VAR_3->rx_buf_sz += 8;
  VAR_3->rx_buf_sz &= VAR_1;
 }
}
