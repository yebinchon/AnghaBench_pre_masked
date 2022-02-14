
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yam_port {scalar_t__ rx_len; unsigned char rx_crcl; int rx_crch; unsigned char* rx_buf; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned char* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct net_device *VAR_3, struct yam_port *VAR_4, unsigned char VAR_5)
{
 if (VAR_4->rx_len < VAR_0) {
  unsigned char VAR_6 = VAR_4->rx_crcl;
  VAR_4->rx_crcl = (VAR_2[VAR_6] ^ VAR_4->rx_crch);
  VAR_4->rx_crch = (VAR_1[VAR_6] ^ VAR_5);
  VAR_4->rx_buf[VAR_4->rx_len++] = VAR_5;
 }
}
