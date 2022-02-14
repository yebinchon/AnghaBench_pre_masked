
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct kvaser_pciefd_rx_packet {int* header; } ;
struct kvaser_pciefd_can {scalar_t__ err_rep_cnt; int bec_poll_timer; } ;
struct kvaser_pciefd {size_t nr_channels; struct kvaser_pciefd_can** can; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvaser_pciefd_can*) ;
 int FUNC_1 (struct kvaser_pciefd_can*,struct kvaser_pciefd_rx_packet*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct kvaser_pciefd *VAR_4,
          struct kvaser_pciefd_rx_packet *VAR_5)
{
 struct kvaser_pciefd_can *VAR_6;
 u8 VAR_7 = (VAR_5->header[1] >> VAR_3) & 0x7;

 if (VAR_7 >= VAR_4->nr_channels)
  return -VAR_0;

 VAR_6 = VAR_4->can[VAR_7];

 FUNC_1(VAR_6, VAR_5);
 if (VAR_6->err_rep_cnt >= VAR_2)

  FUNC_0(VAR_6);

 FUNC_2(&VAR_6->bec_poll_timer, VAR_1);
 return 0;
}
