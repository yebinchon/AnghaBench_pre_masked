
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct kvaser_pciefd_rx_packet {int* header; } ;
struct kvaser_pciefd_can {int flush_comp; } ;
struct kvaser_pciefd {size_t nr_channels; struct kvaser_pciefd_can** can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct kvaser_pciefd *VAR_2,
           struct kvaser_pciefd_rx_packet *VAR_3)
{
 struct kvaser_pciefd_can *VAR_4;
 u8 VAR_5 = (VAR_3->header[1] >> VAR_1) & 0x7;

 if (VAR_5 >= VAR_2->nr_channels)
  return -VAR_0;

 VAR_4 = VAR_2->can[VAR_5];

 if (!FUNC_1(&VAR_4->flush_comp))
  FUNC_0(&VAR_4->flush_comp);

 return 0;
}
