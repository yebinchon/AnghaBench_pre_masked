
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int dma_len; } ;
struct TYPE_4__ {unsigned int len; TYPE_1__ buf; } ;
struct xgbe_ring_data {TYPE_2__ rx; } ;
struct xgbe_packet_data {int attributes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct xgbe_ring_data *VAR_2,
         struct xgbe_packet_data *VAR_3,
         unsigned int VAR_4)
{

 if (!FUNC_0(VAR_3->attributes, VAR_1, VAR_0))
  return VAR_2->rx.buf.dma_len;




 return VAR_2->rx.len - VAR_4;
}
