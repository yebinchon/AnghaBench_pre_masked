
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct ehea_port {int sig_comp_iv; int resets; TYPE_2__* port_res; } ;
struct TYPE_3__ {scalar_t__ queue_stopped; scalar_t__ err_frame_crc; scalar_t__ err_ip_cksum; scalar_t__ err_tcp_cksum; scalar_t__ poll_receive_errors; } ;
struct TYPE_4__ {int swqe_refill_th; int swqe_avail; TYPE_1__ p_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct ehea_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
         struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct ehea_port *VAR_8 = FUNC_2(VAR_2);

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_2, VAR_1); VAR_5++)
  VAR_4[VAR_5] = 0;
 VAR_5 = 0;

 VAR_4[VAR_5++] = VAR_8->sig_comp_iv;
 VAR_4[VAR_5++] = VAR_8->port_res[0].swqe_refill_th;
 VAR_4[VAR_5++] = VAR_8->resets;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_7 += VAR_8->port_res[VAR_6].p_stats.poll_receive_errors;
 VAR_4[VAR_5++] = VAR_7;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_7 += VAR_8->port_res[VAR_6].p_stats.err_tcp_cksum;
 VAR_4[VAR_5++] = VAR_7;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_7 += VAR_8->port_res[VAR_6].p_stats.err_ip_cksum;
 VAR_4[VAR_5++] = VAR_7;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_7 += VAR_8->port_res[VAR_6].p_stats.err_frame_crc;
 VAR_4[VAR_5++] = VAR_7;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_7 += VAR_8->port_res[VAR_6].p_stats.queue_stopped;
 VAR_4[VAR_5++] = VAR_7;

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  VAR_4[VAR_5++] = FUNC_0(&VAR_8->port_res[VAR_6].swqe_avail);
}
