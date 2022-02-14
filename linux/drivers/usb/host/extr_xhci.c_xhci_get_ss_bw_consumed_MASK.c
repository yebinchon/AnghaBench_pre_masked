
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_bw_info {unsigned int max_packet_size; int ep_interval; unsigned int mult; unsigned int num_packets; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(struct xhci_bw_info *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3->max_packet_size, VAR_0);

 if (VAR_3->ep_interval == 0)
  return VAR_2 +
   (VAR_3->mult * VAR_3->num_packets *
     (VAR_1 + VAR_4));
 return FUNC_0(VAR_3->mult * VAR_3->num_packets *
    (VAR_1 + VAR_4 + VAR_2),
    1 << VAR_3->ep_interval);

}
