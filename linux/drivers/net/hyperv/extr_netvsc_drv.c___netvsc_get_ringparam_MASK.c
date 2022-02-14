
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netvsc_device {scalar_t__ nvsp_version; int recv_section_size; int send_section_size; int send_section_cnt; int recv_section_cnt; } ;
struct ethtool_ringparam {int rx_max_pending; int tx_max_pending; int tx_pending; int rx_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct netvsc_device *VAR_4,
       struct ethtool_ringparam *VAR_5)
{
 u32 VAR_6;

 VAR_5->rx_pending = VAR_4->recv_section_cnt;
 VAR_5->tx_pending = VAR_4->send_section_cnt;

 if (VAR_4->nvsp_version <= VAR_3)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 VAR_5->rx_max_pending = VAR_6 / VAR_4->recv_section_size;
 VAR_5->tx_max_pending = VAR_2
  / VAR_4->send_section_size;
}
